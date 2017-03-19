#include "DcCommonHeader.h"
#include "Renderer.h"
#include "Geometry.h"
#include "SystemSetting.h"
#include "FileManager.h"

// 튜토리얼용 임시 전역 변수
Geometry Triangle;
//


VkResult CreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo,
	const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback)
{
	auto func = (PFN_vkCreateDebugReportCallbackEXT)vkGetInstanceProcAddr(instance, "vkCreateDebugReportCallbackEXT");
	if (func != nullptr)
	{
		return func(instance, pCreateInfo, pAllocator, pCallback);
	}
	else
	{
		return VK_ERROR_EXTENSION_NOT_PRESENT;
	}
}

void DestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator)
{
	auto func = (PFN_vkDestroyDebugReportCallbackEXT)vkGetInstanceProcAddr(instance, "vkDestroyDebugReportCallbackEXT");
	if (func != nullptr)
	{
		func(instance, callback, pAllocator);
	}
}

VulkanRenderer::VulkanRenderer()
	: VertexNum(0)
{

}

VulkanRenderer::~VulkanRenderer()
{

}

void VulkanRenderer::InitRenderer(GLFWwindow* InWindow)
{
	CreateInstance(); // 불칸 인스탄스 생성
	SetupDebugCallback(); // 디버그 콜백 처리
	CreateSurface(InWindow); // 서페이스 정보를 가져와서 생성
	PickPhysicalDevice(); // 사용 가능한 물리 장치 가져오기
	CreateLogicalDevice(); // 논리 장치 만들기
	CreateSwapChain(); // 스왑체인 만들기
	CreateImageViews(); // 이미지 뷰 만들기
	CreateRenderPass(); // 렌더 패스 만들기
	CreateGraphicsPipeLine(); // 그래픽 파이프 라인 만들기, 셰이더 불러오기 포함
	CreateFrameBuffer(); // 프레임 버퍼 만들기
	CreateCommandPool(); // 커맨드 풀 만들기

	CreateVertexBuffer(Triangle.trianglevertices); // 버텍스 버퍼만들기
	
	
	CreateCommandBuffers(); // 커맨드 버퍼 만들기
	CreateSemaphore(); // 세마포어 만들기
}

void VulkanRenderer::CreateInstance()
{
	if (SystemSetting::enableValidationLayers && !CheckValidationLayerSupport())
	{
		throw std::runtime_error("validation layers requested, but not available");
	}

	VkApplicationInfo appInfo = {}; // 어플리케이션 인포 입력
	appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;  // 불칸은 항상 이 스트럭쳐의 정보를 따로 설정해주어야 합니다.
	appInfo.pNext = nullptr; // 일단 빈 포인터로 남겨둡니다. 차후 다른 스트럭쳐와 연결해줄때 사용할수 있다고 합니다.
	appInfo.pApplicationName = "Hello Vulkan"; // 어플리케이션 이름
	appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0); // 사용할 불칸 버전
	appInfo.pEngineName = "DreamCoast Engine";
	appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
	appInfo.apiVersion = VK_API_VERSION_1_0; // API 버전

	VkInstanceCreateInfo createInfo = {};
	createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	createInfo.pApplicationInfo = &appInfo;

	// 불칸은 로우 레벨 API이기 때문에 윈도우에 관련된 확장기능을 직접 만들어서 삽입해야 합니다.
	// 하지만 GLFW에서는 이미 어느정도 빌트인 되어 있기 때문에, glfw의 익스텐션을 가져와서 추가하도록 합니다.
	auto extensions = GetRequiredExtensions();
	createInfo.enabledExtensionCount = (uint32_t)extensions.size();
	createInfo.ppEnabledExtensionNames = extensions.data();

	// 인스탄스 정보에 발리데이션 레이어 처리를 합니다.
	// 발리데이션 레이어는 디버그 정보를 위한 레이어 처리로서 디버그에 큰 도움을 준다고 합니다.
	if (SystemSetting::enableValidationLayers)
	{
		createInfo.enabledLayerCount = (uint32_t)SystemSetting::validationLayers.size();
		createInfo.ppEnabledLayerNames = SystemSetting::validationLayers.data();
	}
	else
	{
		createInfo.enabledLayerCount = 0;
	}

	// 이제 인스탄스를 생성합니다. 첫번째 인자는 생성정보, 두번째 정보는 커스텀 할당자(TBB같은)정보, 세번째 정보는 
	// 새로운 오브젝트가 생성될시 저장될 포인터 정보입니다.
	VkResult result = vkCreateInstance(&createInfo, nullptr, instance.replace());

	if (result != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create instance");
	}
}

void VulkanRenderer::CheckAvailableExtension()
{
	uint32_t extensionCount = 0;
	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
	
	std::vector<VkExtensionProperties> extensions(extensionCount);

	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, extensions.data());

	std::cout << "available extensions:" << std::endl;

	for (const auto& extension : extensions)
	{
		std::cout << "\t" << extension.extensionName << std::endl;
	}
}

bool VulkanRenderer::CheckValidationLayerSupport()
{
	uint32_t layerCount;
	vkEnumerateInstanceLayerProperties(&layerCount, nullptr);

	std::vector<VkLayerProperties> availableLayers(layerCount);
	vkEnumerateInstanceLayerProperties(&layerCount, availableLayers.data());

	for (const char* layername : SystemSetting::validationLayers)
	{
		bool layerFound = false;
		for (const auto& layerProperties : availableLayers)
		{
			if (std::strcmp(layername, layerProperties.layerName) == 0)
			{
				layerFound = true;
				break;
			}
		}

		if (!layerFound)
		{
			return false;
		}
	}

	return true;
}

std::vector<const char*> VulkanRenderer::GetRequiredExtensions()
{
	std::vector<const char*> extensions;
	unsigned int glfwExtensionCount = 0;
	const char** glfwExtensions;
	
	glfwExtensions = glfwGetRequiredInstanceExtensions(&glfwExtensionCount);
	for (unsigned int i = 0; i < glfwExtensionCount; ++i)
	{
		extensions.push_back(glfwExtensions[i]);
	}

	if (SystemSetting::enableValidationLayers)
	{
		extensions.push_back(VK_EXT_DEBUG_REPORT_EXTENSION_NAME); // -> VK_EXT_debug_report
	}

	return extensions;
}

void VulkanRenderer::SetupDebugCallback()
{
	if (!SystemSetting::enableValidationLayers) return;

	VkDebugReportCallbackCreateInfoEXT createInfo = {}; // 디버그 리포트 콜백을 만들기 위한 스트럭쳐
	createInfo.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
	createInfo.flags = VK_DEBUG_REPORT_ERROR_BIT_EXT | VK_DEBUG_REPORT_WARNING_BIT_EXT;
	createInfo.pfnCallback = DebugCallback;

	if (CreateDebugReportCallbackEXT(instance, &createInfo, nullptr, callback.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to set up debug callback!");
	}
}

VKAPI_ATTR VkBool32 VKAPI_CALL VulkanRenderer::DebugCallback(VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objType,
	uint64_t obj, size_t location, int32_t code, const char* layerPrefix, const char* msg, void* userData)
{
	std::cerr << "validation layers: " << msg << std::endl;
	return VK_FALSE;
}

void VulkanRenderer::PickPhysicalDevice()
{
	uint32_t deviceCount = 0;
	vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr); // 불칸을 지원하는 GPU를 쿼리하는 함수

	if (deviceCount == 0)
	{
		throw std::runtime_error("failed to find GPUs with Vulkan Support");
	}

	std::vector<VkPhysicalDevice> devices(deviceCount);
	vkEnumeratePhysicalDevices(instance, &deviceCount, devices.data());

	// 오더맵을 통해 자동 소팅을 노린다.
	std::map<int, VkPhysicalDevice> candidates;
	for (const auto& device : devices)
	{
		int score = RateDeviceSuitability(device);
		candidates[score] = device;
	}

	if (candidates.begin()->first > 0)
	{
		physicalDevice = candidates.begin()->second;
	}
	else
	{
		throw std::runtime_error("failed to find a suitable GPU!");
	}

	if (IsDeviceSuitable(physicalDevice) == false)
	{
		throw std::runtime_error("failed to find a suitable GPU!");
	}
}

bool VulkanRenderer::IsDeviceSuitable(VkPhysicalDevice device)
{
	QueueFamilyIndices indices = FindQueueFamilies(device);

	// 디바이스가 확장기능을 지원하는지 확인합니다.
	bool extensionSupported = CheckDeviceExtensionSupport(device);

	// 스왑체인 지원여부를 확인한다
	bool swapChainAdequate = false;
	if (extensionSupported)
	{
		SwapChainSupportDetails swapChainSupport = QuerySwapChainSupport(device);
		swapChainAdequate = !swapChainSupport.formats.empty() && !swapChainSupport.presentModes.empty();
	}

	return indices.isComplete() && extensionSupported && swapChainAdequate;
}

bool VulkanRenderer::CheckDeviceExtensionSupport(VkPhysicalDevice device)
{
	uint32_t extensionCount;
	vkEnumerateDeviceExtensionProperties(device, nullptr, &extensionCount, nullptr);

	std::vector<VkExtensionProperties> availableExtensions(extensionCount); 
	vkEnumerateDeviceExtensionProperties(device, nullptr, &extensionCount, availableExtensions.data());

	std::set<std::string> requiredExtensions(
		SystemSetting::deviceExtensions.begin(), 
		SystemSetting::deviceExtensions.end());

	for (const auto& extension : availableExtensions)
	{
		requiredExtensions.erase(extension.extensionName);
	}

	return requiredExtensions.empty();
}

int VulkanRenderer::RateDeviceSuitability(VkPhysicalDevice device)
{
	VkPhysicalDeviceProperties deviceProperties; // 디바이스의 속성 정보
	VkPhysicalDeviceFeatures deviceFeatures; // 디바이스의 피쳐 정보
	vkGetPhysicalDeviceProperties(device, &deviceProperties);
	vkGetPhysicalDeviceFeatures(device, &deviceFeatures);

	int score = 0;
	if (deviceProperties.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU)
	{
		score += 1000;
	}

	score += deviceProperties.limits.maxImageDimension2D;
	
	if (!deviceFeatures.geometryShader)
	{
		return 0;
	}

	return score;
}

QueueFamilyIndices VulkanRenderer::FindQueueFamilies(VkPhysicalDevice device)
{
	QueueFamilyIndices indices;
	
	// 쿼리를 통해 큐패밀리속성들을 가져옵니다.
	uint32_t queueFamilyCount = 0;
	vkGetPhysicalDeviceQueueFamilyProperties(device, &queueFamilyCount, nullptr);

	std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
	vkGetPhysicalDeviceQueueFamilyProperties(device, &queueFamilyCount, queueFamilies.data());

	int i = 0;
	for (const auto& queueFamily : queueFamilies)
	{
		// 디바이스의 큐패밀리중에 그래픽 피트 큐패밀리를 확인
		if (queueFamily.queueCount > 0 && queueFamily.queueFlags & VK_QUEUE_GRAPHICS_BIT)
		{
			indices.graphicFamily = i;
		}

		// 디바이스의 큐패밀리중에 프레젠트 큐패밀리를 확인
		VkBool32 presentSupport = false;
		vkGetPhysicalDeviceSurfaceSupportKHR(device, i, surface, &presentSupport);
		if (queueFamily.queueCount > 0 && presentSupport)
		{
			indices.presentFamily = i;
		}

		if (indices.isComplete())
		{
			break;
		}
		
		++i;
	}



	return indices;
}

void VulkanRenderer::CreateLogicalDevice()
{
	// 만들 큐 구체화하기
	QueueFamilyIndices indices = FindQueueFamilies(physicalDevice);

	std::vector<VkDeviceQueueCreateInfo> queueCreateInfos;
	std::set<int> uniqueQueueFamilies = {indices.graphicFamily, indices.presentFamily};
	float queuePriority = 1.0f;
	for (int queueFamily : uniqueQueueFamilies)
	{
		VkDeviceQueueCreateInfo queueCreateInfo = {};
		queueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
		queueCreateInfo.queueFamilyIndex = queueFamily;
		queueCreateInfo.queueCount = 1;
		queueCreateInfo.pQueuePriorities = &queuePriority;
		queueCreateInfos.push_back(queueCreateInfo);
	}



	// 디바이스 피쳐 구체화하기
	VkPhysicalDeviceFeatures deviceFeatures = {}; // 지금은 특별히 필요한거 없으므로 false로 놔둡니다.
	
	// 로지컬 디바이스 만들기
	VkDeviceCreateInfo createInfo = {};
	createInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
	createInfo.pQueueCreateInfos = queueCreateInfos.data();
	createInfo.queueCreateInfoCount = (uint32_t)queueCreateInfos.size();
	createInfo.pEnabledFeatures = &deviceFeatures;

	// 별도의 확장은 하지 않습니다.
	createInfo.enabledExtensionCount = (uint32_t)SystemSetting::deviceExtensions.size();
	createInfo.ppEnabledExtensionNames = SystemSetting::deviceExtensions.data();

	// 검증 레이어는 디버그 모드에서만 추가합니다.
	if (SystemSetting::enableValidationLayers)
	{
		createInfo.enabledLayerCount = (uint32_t)SystemSetting::validationLayers.size();
		createInfo.ppEnabledLayerNames = SystemSetting::validationLayers.data();
	}
	else
	{
		createInfo.enabledLayerCount = 0;
	}

	if (vkCreateDevice(physicalDevice, &createInfo, nullptr, device.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create logical device!");
	}

	vkGetDeviceQueue(device, indices.graphicFamily, 0, &graphicQueue);
	vkGetDeviceQueue(device, indices.presentFamily, 0, &presentQueue);
}

void VulkanRenderer::CreateSurface(GLFWwindow* InWindow)
{
	if (glfwCreateWindowSurface(instance, InWindow, nullptr, surface.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create window surface!");
	}
}

SwapChainSupportDetails VulkanRenderer::QuerySwapChainSupport(VkPhysicalDevice device)
{
	SwapChainSupportDetails details;

	vkGetPhysicalDeviceSurfaceCapabilitiesKHR(device, surface, &details.capabilities);

	uint32_t formatCount;
	vkGetPhysicalDeviceSurfaceFormatsKHR(device, surface, &formatCount, nullptr);

	if (formatCount != 0)
	{
		details.formats.resize(formatCount);
		vkGetPhysicalDeviceSurfaceFormatsKHR(device, surface, &formatCount, details.formats.data());
	}

	uint32_t presentModeCount;
	vkGetPhysicalDeviceSurfacePresentModesKHR(device, surface, &presentModeCount, nullptr);

	if (presentModeCount != 0)
	{
		details.presentModes.resize(presentModeCount);
		vkGetPhysicalDeviceSurfacePresentModesKHR(device, surface, &presentModeCount, details.presentModes.data());
	}

	return details;
}

VkSurfaceFormatKHR VulkanRenderer::ChooseSwapSurfaceFormat(const std::vector<VkSurfaceFormatKHR>& availableFormats)
{
	// 만약 선호하는 포맷이 없을때가 베스트 케이스 시나리오. 사이즈가 한개이고 포맷이 확정되지 않았다면 설정해서 돌려준다.
	if (availableFormats.size() == 1 && availableFormats[0].format == VK_FORMAT_UNDEFINED)
	{
		return{VK_FORMAT_B8G8R8A8_UNORM, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR};
	}

	for (const auto& availableFormat : availableFormats)
	{
		// 가장 선호되는 포멧이 존재하면 핻아 포맷을 사용한다.
		if (availableFormat.format == VK_FORMAT_B8G8R8A8_UNORM 
			&& availableFormat.colorSpace == VK_COLOR_SPACE_SRGB_NONLINEAR_KHR)
		{
			return availableFormat;
		}
	}

	return availableFormats[0];
}

VkPresentModeKHR VulkanRenderer::ChooseSwapPresentMode(const std::vector<VkPresentModeKHR>& availablePresentModes)
{
	// 모드는 총 4개지가 존재한다.
	//VK_PRESENT_MODE_IMMEDIATE_KHR = 0, 이미지가 도착하자마자 뿌려버리는 것, 테어링 이 일어날수 있다.
	//VK_PRESENT_MODE_MAILBOX_KHR = 1, 
	// 큐가 꽉차면 어플리케이션을 블록하는 대신에, 큐에 들어와있는 새로운 이미지를 뿌린다.
	// 이 모드는 트리플 버퍼링을 짜는데 쓰인다.
	//VK_PRESENT_MODE_FIFO_KHR = 2, 
	// 버티컬 플랭크가 찰때 까지 기다리면서 가장 먼저 도착한 이미지부터 뿌리는 것, 
	// 만약 큐가 꽉차면 프로그램이 기다려야한다. 버티컬 싱크와 가장 비슷
	//VK_PRESENT_MODE_FIFO_RELAXED_KHR = 3,
	// 만약 어플리케이션이 기다리는 중이고, 큐가 비어있다면, 버티컬 블랭크를 기다리지 않고 바로 쏴버린다. 테어링이 일어날수 있다.
	for (const auto& availablePresentMode : availablePresentModes)
	{
		if (availablePresentMode == VK_PRESENT_MODE_MAILBOX_KHR)
		{
			return availablePresentMode;
		}
	}

	return VK_PRESENT_MODE_FIFO_KHR;
}

VkExtent2D VulkanRenderer::ChooseSwapExtent(const VkSurfaceCapabilitiesKHR& capabilities)
{
	// 스왑체인에 사용 가능한 해상도를 알아내는 역할을 한다.
	if (capabilities.currentExtent.width != std::numeric_limits<uint32_t>::max())
	{
		return capabilities.currentExtent;
	}
	else
	{
		VkExtent2D actualExtent = { SystemSetting::WIDTH, SystemSetting::WIDTH };

		actualExtent.width = std::max(capabilities.minImageExtent.width, std::min(capabilities.maxImageExtent.width, actualExtent.width));
		actualExtent.height = std::max(capabilities.minImageExtent.height, std::min(capabilities.maxImageExtent.height, actualExtent.height));

		return actualExtent;
	}
}

void VulkanRenderer::CreateSwapChain()
{
	SwapChainSupportDetails swapChainSupport = QuerySwapChainSupport(physicalDevice);

	VkSurfaceFormatKHR surfaceFormat = ChooseSwapSurfaceFormat(swapChainSupport.formats);
	VkPresentModeKHR presentMode = ChooseSwapPresentMode(swapChainSupport.presentModes);
	VkExtent2D extent = ChooseSwapExtent(swapChainSupport.capabilities);

	uint32_t imageCount = swapChainSupport.capabilities.minImageCount + 1;
	if (swapChainSupport.capabilities.maxImageCount > 0 && imageCount > swapChainSupport.capabilities.maxImageCount)
	{
		imageCount = swapChainSupport.capabilities.maxImageCount;
	}

	VkSwapchainCreateInfoKHR createInfo = {};
	createInfo.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
	createInfo.surface = surface;
	createInfo.minImageCount = imageCount;
	createInfo.imageFormat = surfaceFormat.format;
	createInfo.imageColorSpace = surfaceFormat.colorSpace;
	createInfo.imageExtent = extent;
	createInfo.imageArrayLayers = 1; // 이미지 어레이 갯수, 3D 어플리케이션을 만드는 경우가 아니라면 1개
	createInfo.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT; 
	// 스왑체인에서 어떤 종류 동작을 처리할것인지 VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT는 바로 칠하기 때문에 컬러 첨부로 사용
	// 만약 따로 다른 이미지에 그린뒤에 포스트 프로세스로 처리한다면, VK_IMAGE_USAGE_TRANSFER_DST_BIT와 같은 플래그를 사용

	QueueFamilyIndices indices = FindQueueFamilies(physicalDevice);
	uint32_t queueFamiltyIndices[] = { (uint32_t)indices.graphicFamily, (uint32_t)indices.presentFamily };
	if (indices.graphicFamily != indices.presentFamily)
	{
		createInfo.imageSharingMode = VK_SHARING_MODE_CONCURRENT;
		// 이미지가 여러 큐패밀리에 의해 공유된다.
		createInfo.queueFamilyIndexCount = 2;
		createInfo.pQueueFamilyIndices = queueFamiltyIndices;
	}
	else
	{
		createInfo.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
		// 이미지가 하나의 큐패밀리가 쓰고 있다면, 다른 큐패밀리가 쓰기위해 기다려야 하며, 최고의 퍼포먼스를 가진다.
		createInfo.queueFamilyIndexCount = 0; // Optional
		createInfo.pQueueFamilyIndices = nullptr; // Optional
	}

	// 스왑체인의 트랜스폼을 마음대로 정해줄수 있다.
	createInfo.preTransform = swapChainSupport.capabilities.currentTransform;
	
	// 알파 채널이 어떻게 처리될까에 대한 처리고, 현재는 알파채널이 무시되길 원하므로 아래의 플래그를 사용한다.
	createInfo.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
	createInfo.presentMode = presentMode;
	// 픽셀의 칼라가 모호해도 생관 없다는 표시
	createInfo.clipped = VK_TRUE;
	
	// 리크레이트를 위한 스왑체인 처리
	VkSwapchainKHR oldSwapChain = swapChain;
	createInfo.oldSwapchain = oldSwapChain;

	// 불칸은 스왑체인이 유효하지 않거나 최적화되지 않게 처리해버릴 수 있다(윈도우가 리사이징 되었을때)
	// SwapChainRecreation과 같이..
	// 지금은 스왑체인을 하나만 만드는 걸로
	// createInfo.oldSwapchain = VK_NULL_HANDLE;

	VkSwapchainKHR newSwapChain = {};
	if (vkCreateSwapchainKHR(device, &createInfo, nullptr, &newSwapChain) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create swap chain!");
	}

	swapChain = newSwapChain;

	vkGetSwapchainImagesKHR(device, swapChain, &imageCount, nullptr);
	swapChainImages.resize(imageCount);
	vkGetSwapchainImagesKHR(device, swapChain, &imageCount, swapChainImages.data());

	swapChainImageFormat = surfaceFormat.format;
	swapChainExtent = extent;
}

void VulkanRenderer::CreateImageViews()
{
	// 커스텀 얼로케이터와 함께 백터 어레이 초기화
	swapChainImageViews.resize(swapChainImages.size(), VDeleter<VkImageView>{device, vkDestroyImageView});

	for (uint32_t i = 0; i < swapChainImages.size(); i++)
	{
		VkImageViewCreateInfo createInfo = {};
		createInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
		createInfo.image = swapChainImages[i];
		createInfo.viewType = VK_IMAGE_VIEW_TYPE_2D; // 이미지를 1d 텍스쳐, 2d 텍스쳐, 3d 텍스쳐, 혹은 큐브맵들로 취급할것인가.
		createInfo.format = swapChainImageFormat;
		// 불칸에서는 컴포넌트의 rgba값을 혼합시킬수 있습니다. 하지만 여기선 일단 본래의 값을 사용합니다.
		// 예 - 모든 채널을 r 채널의 모노크롬 텍스쳐 값으로 사용 
		createInfo.components.r = VK_COMPONENT_SWIZZLE_IDENTITY; 
		createInfo.components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
		createInfo.components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
		createInfo.components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
		
		// 이미지의 목적과 어떤 파트가 억세스 될건지 
		// 일단 현재는 멀티플 레이어나, 밉맵레벨 없이 컬러로 사용할 것
		// 만약 스테레오 그래픽 3d어플리케이션을 만들경우에는 여러 레이어의 스왑체인을 만들어야 합니다.
		// 불칸을 통해서 여러 이미지 뷰를 각각의 눈에 대응하여 다른 레이어로 그릴 수 있습니다.
		createInfo.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
		createInfo.subresourceRange.baseMipLevel = 0;
		createInfo.subresourceRange.levelCount = 1;
		createInfo.subresourceRange.baseArrayLayer = 0;
		createInfo.subresourceRange.layerCount = 1;

		if (vkCreateImageView(device, &createInfo, nullptr, swapChainImageViews[i].replace()) != VK_SUCCESS)
		{
			throw std::runtime_error("failed to create image views!");
		}
	}
}

void VulkanRenderer::CreateGraphicsPipeLine()
{
	// 바이트 코드로 컴파일된 쉐이더들을 불러온다.
	auto vertShaderCode = FileManager::ReadFile("../../../Shader/vert.spv");
	auto fragShaderCode = FileManager::ReadFile("../../../Shader/frag.spv");
	
	// 셰이더 모듈을 생성한다.
	CreateShaderModule(vertShaderCode, vertShaderModule);
	CreateShaderModule(fragShaderCode, fragShaderModule);

	VkPipelineShaderStageCreateInfo vertShaderStageInfo = {};
	vertShaderStageInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
	vertShaderStageInfo.stage = VK_SHADER_STAGE_VERTEX_BIT;// 버텍스 쉐이더 스테이지임을 알린다.
	vertShaderStageInfo.module = vertShaderModule; // 실제 코드가 저장된 모듈
	vertShaderStageInfo.pName = "main"; // 엔트리 포인트로 사용될 이름

	VkPipelineShaderStageCreateInfo fragShaderStageInfo = {};
	fragShaderStageInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
	fragShaderStageInfo.stage = VK_SHADER_STAGE_FRAGMENT_BIT;// 프래그 쉐이더 스테이지임을 알린다.
	fragShaderStageInfo.module = fragShaderModule; // 실제 코드가 저장된 모듈
	fragShaderStageInfo.pName = "main"; // 엔트리 포인트로 사용될 이름

	VkPipelineShaderStageCreateInfo shaderStages[] = {vertShaderStageInfo, fragShaderStageInfo};

	// 예전 API들은 모든 그래픽 파이프 라인에 대해 기본 정보를 제공했지만, 벌칸은 모든것을 설정해줘야 한다.
	// 뷰포트 사이즈부터, 컬러 블렌딩 함수까지...
	

	// 버텍스 인풋
	// 버텍스 쉐이더에 패스할 퍼텍스의 형식데이타, 제공하는 방법은 두가지
	// 버텍스 혹은 인스탄스마다 바인딩 해주는 방법
	// 버텍스 쉐이더에 넘길 속성을 설정해주고, 바인딩 하는 방법
	
	// 일단 현재는 퍼텍스 데이타가 쉐이더에 해드코딩 되있으므로, 현재 추가할 버텍스 데이타는 없다.
	VkPipelineVertexInputStateCreateInfo vertexInputInfo = {};
	vertexInputInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;

	auto bindingDescription = Vertex::getBindingDescription();
	auto attributeDescription = Vertex::getAttributeDescription();

	// 버텍스 데이타 바인딩 정보입력
	vertexInputInfo.vertexBindingDescriptionCount = 1;
	vertexInputInfo.pVertexBindingDescriptions = &bindingDescription; // optional
	vertexInputInfo.vertexAttributeDescriptionCount = attributeDescription.size();
	vertexInputInfo.pVertexAttributeDescriptions = attributeDescription.data(); // optional

	// 입력 조합기, 버텍스를 어떻게 조합할것인가.. 익히 아는 그것
	//VK_PRIMITIVE_TOPOLOGY_POINT_LIST: 포인트 리스들
	//VK_PRIMITIVE_TOPOLOGY_LINE_LIST: 재사용 없는 선 리스트
	//VK_PRIMITIVE_TOPOLOGY_LINE_STRIP: 재사용 있는 선리스트(두번째 버텍스가 선의 시작이 될수 있음)
	//VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST: 재사용 없는 삼각형 리스트
	//VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP: 세번째 버텍스가 다음 삼각형의 첫번째 버텍스
	VkPipelineInputAssemblyStateCreateInfo inputAssembly = {};
	inputAssembly.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
	inputAssembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
	inputAssembly.primitiveRestartEnable = VK_FALSE;

	//뷰포트 설정
	// 렌더될 프레임 버퍼의 크기, 보통 (0,0)에서 부터 (가로, 세로) 크기 전부를 쓴다.
	VkViewport viewport = {};
	viewport.x = 0.0f;
	viewport.y = 0.0f;
	viewport.width = (float)swapChainExtent.width;
	viewport.height = (float)swapChainExtent.height;
	viewport.minDepth = 0.0f;
	viewport.maxDepth = 1.0f;

	// 시저 렉탱글 설정, 어떤 부분의 픽샐들이 실제로 저장될지 정의합니다.
	// 시저 렉탱글 밖에 있는 픽셀들은 래스터라이저에 의해 필터됩니다.
	VkRect2D scissor = {};
	scissor.offset = { 0, 0 };
	scissor.extent = swapChainExtent;

	// 실제 뷰포트를 만들기 위한 구조체를 생성합니다.
	// 몇몇 그래픽 카드는 벌티 뷰포트를 사용할수 있는데, 논리장치에서 GPU피처를 활성화 해야합니다.
	VkPipelineViewportStateCreateInfo viewportState = {};
	viewportState.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
	viewportState.viewportCount = 1;
	viewportState.pViewports = &viewport;
	viewportState.scissorCount = 1;
	viewportState.pScissors = &scissor;

	// 래스터라이저
	// 시저테스팅을 통한 뎁스테스팅, 페이스 컬링처리 및 버텍스 쉐이더를 프래그먼츠로 만드는 작업을 합니다.
	// 와이어프레임 렌더링처리 역시 여기서 처리할수 있습니다.
	VkPipelineRasterizationStateCreateInfo rasterizer = {};
	rasterizer.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
	// true일경우, Near와 Far Plane 밖에 있는 모든 버텍스는 무시하게 됩니다. 일정 쉐도우 맵에서 쓸수 있다고합니다.
	// 해당 기능은 GPU 피처에 따라 활성화 해야합니다.
	rasterizer.depthClampEnable = VK_FALSE; 
	// 만약 TRUE가 설정되어잇다면 지오매트리는 래스터라이저를 통과하지 않습니다. 
	// 또한 프레임 버퍼에 대한 모든 아웃풋을 비활성화시킵니다.
	rasterizer.rasterizerDiscardEnable = VK_FALSE;
	// 익히 아는 폴리곤 모드입니다.
	//VK_POLYGON_MODE_FILL: 폴리곤을 채웁니다.
	//VK_POLYGON_MODE_LINE : 와이어 프레임 모드
	//VK_POLYGON_MODE_POINT : 버텍스들을 점으로 표현합니다.
	rasterizer.polygonMode = VK_POLYGON_MODE_FILL;
	// 선의 굵기를 결정합니다. 1.0보다 두꺼우려면 넓은 선모드를 활성화 해야합니다.
	rasterizer.lineWidth = 1.0f;
	// 페이스 컬링모드 입니다.
	rasterizer.cullMode = VK_CULL_MODE_BACK_BIT;
	rasterizer.frontFace = VK_FRONT_FACE_CLOCKWISE;
	// 프래그먼트의 슬로프에 따라 다른 값을 적용할수 있습니다. 쉐도우 매핑에 사용됩니다.
	rasterizer.depthBiasEnable = VK_FALSE;
	rasterizer.depthBiasConstantFactor = 0.0f;// optional
	rasterizer.depthBiasClamp = 0.0f; // optional
	rasterizer.depthBiasSlopeFactor = 0.0f; // optional

	//멀티샘플링
	// 안티 얼리어싱의 방법으로 사용됩니다. 현튜토리얼에서는 사용하지 않습니다.
	VkPipelineMultisampleStateCreateInfo multisampling = {};
	multisampling.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
	multisampling.sampleShadingEnable = VK_FALSE;
	multisampling.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
	multisampling.minSampleShading = 1.0f; // Optional
	multisampling.pSampleMask = nullptr; // Optional
	multisampling.alphaToCoverageEnable = VK_FALSE; // Optional
	multisampling.alphaToOneEnable = VK_FALSE; // Optional

	// 현 튜토리얼에서는 뎁스와 스텐실 버퍼를 만들지 않습니다. 
	//VkPipelineDepthStencilStateCreateInfo

	// 컬러 블렌딩
	// 아래의 스도코드를 따릅니다.
	//if (blendEnable) {
	//	finalColor.rgb = (srcColorBlendFactor * newColor.rgb) <colorBlendOp> (dstColorBlendFactor * oldColor.rgb);
	//	finalColor.a = (srcAlphaBlendFactor * newColor.a) <alphaBlendOp> (dstAlphaBlendFactor * oldColor.a);
	//}
	//else {
	//	finalColor = newColor;
	//}

	//finalColor = finalColor & colorWriteMask;

	//finalColor.rgb = newAlpha * newColor + (1 - newAlpha) * oldColor;
	//finalColor.a = newAlpha.a;
	//를 사용하고자 할때에는 
	//colorBlendAttachment.blendEnable = VK_TRUE;
	//colorBlendAttachment.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
	//colorBlendAttachment.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
	//colorBlendAttachment.colorBlendOp = VK_BLEND_OP_ADD;
	//colorBlendAttachment.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
	//colorBlendAttachment.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
	//colorBlendAttachment.alphaBlendOp = VK_BLEND_OP_ADD;
	//와 같이 설정해주면 된다.
	// 또한 colorBlending.logicOpEnable를 VK_TRUE로 설정해주어야 한다.

	VkPipelineColorBlendAttachmentState colorBlendAttachment = {};
	colorBlendAttachment.colorWriteMask 
		= VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
	colorBlendAttachment.blendEnable = VK_FALSE;
	colorBlendAttachment.srcColorBlendFactor = VK_BLEND_FACTOR_ONE; // Optional
	colorBlendAttachment.dstColorBlendFactor = VK_BLEND_FACTOR_ZERO; // Optional
	colorBlendAttachment.colorBlendOp = VK_BLEND_OP_ADD; // Optional
	colorBlendAttachment.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE; // Optional
	colorBlendAttachment.dstColorBlendFactor = VK_BLEND_FACTOR_ZERO; // Optional
	colorBlendAttachment.alphaBlendOp = VK_BLEND_OP_ADD; // Optional

	VkPipelineColorBlendStateCreateInfo colorBlending = {};
	colorBlending.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
	colorBlending.logicOpEnable = VK_FALSE;
	colorBlending.logicOp = VK_LOGIC_OP_COPY; //Optional
	colorBlending.attachmentCount = 1;
	colorBlending.pAttachments = &colorBlendAttachment;
	colorBlending.blendConstants[0] = 0.0f; // Optional
	colorBlending.blendConstants[1] = 0.0f; // Optional
	colorBlending.blendConstants[2] = 0.0f; // Optional
	colorBlending.blendConstants[3] = 0.0f; // Optional

	// 다이나믹 스테이트
	// 파이프라인을 재생성하는 대신 바꿀수 있는 몇가지 스테이트들이 있습니다.
	// 해당 스테이트들의 수는 매우 적습니다.
	VkDynamicState dynamicStates[] =
	{
		VK_DYNAMIC_STATE_VIEWPORT,
		VK_DYNAMIC_STATE_LINE_WIDTH
	};

	VkPipelineDynamicStateCreateInfo dynamicState = {};
	dynamicState.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
	dynamicState.dynamicStateCount = 2;
	dynamicState.pDynamicStates = dynamicStates;

	// 파이프라인 레이아웃
	// 유니폼 밸류를 사용하므로 아래와 같이 생성합니다.
	VkPipelineLayoutCreateInfo pipelineLayoutInfo = {};
	pipelineLayoutInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
	pipelineLayoutInfo.setLayoutCount = 0; // optional
	pipelineLayoutInfo.pSetLayouts = nullptr;//optional
	pipelineLayoutInfo.pushConstantRangeCount = 0;//optional
	pipelineLayoutInfo.pPushConstantRanges = 0;//opiotnal

	if (vkCreatePipelineLayout(device, &pipelineLayoutInfo, nullptr, pipelineLayout.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create pipeline layout!");
	}

	VkGraphicsPipelineCreateInfo pipelineInfo = {};
	pipelineInfo.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
	// 셰이더 설정
	pipelineInfo.stageCount = 2;
	pipelineInfo.pStages = shaderStages;
	
	// 고정함수들 설정
	pipelineInfo.pVertexInputState = &vertexInputInfo;
	pipelineInfo.pInputAssemblyState = &inputAssembly;
	pipelineInfo.pViewportState = &viewportState;
	pipelineInfo.pRasterizationState = &rasterizer;
	pipelineInfo.pMultisampleState = &multisampling;
	pipelineInfo.pDepthStencilState = nullptr; // 현 튜토리얼에서는 사용하지 않습니다.
	pipelineInfo.pColorBlendState = &colorBlending;
	pipelineInfo.pDynamicState = nullptr; // Optional

	//파이프라인 레이아웃 설정
	pipelineInfo.layout = pipelineLayout;

	//렌더 패스 설정
	pipelineInfo.renderPass = renderPass;
	pipelineInfo.subpass = 0;

	// 불칸에서는 기존 파이프라인에서 새로운 파이프라인을 파생시킬수 있습니다.
	// 파이프라인을 파생시키는 것은 새 파이프라인을 만드는 것보다 값이 싸게 들며,
	// 같은 부모로부터 나온 파이프라인 스위칭은 훨씬 빠르게 완료됩니다.
	// 지금은 싱글파이프라인을 만드므로 널핸들을 사용합니다.
	pipelineInfo.basePipelineHandle = VK_NULL_HANDLE;
	pipelineInfo.basePipelineIndex = -1;
	
	// 두번째 패러미터는 VkPipelineCache 오브젝트에 대한 리퍼런스로, 재사용이 가능하게 캐싱처리를 하는 것이라 합니다.
	if (vkCreateGraphicsPipelines(device, VK_NULL_HANDLE, 1, &pipelineInfo, nullptr, graphicsPipeline.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create graphics pipeline");
	}
}

void VulkanRenderer::CreateShaderModule(const std::vector<char>& code, VDeleter<VkShaderModule>& shaderModule)
{
	VkShaderModuleCreateInfo createInfo = {};
	createInfo.sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
	createInfo.codeSize = code.size();
	createInfo.pCode = (uint32_t*)code.data();

	if (vkCreateShaderModule(device, &createInfo, nullptr, shaderModule.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create shader module!");
	}
}

uint32_t VulkanRenderer::findMemoryType(uint32_t typeFilter, VkMemoryPropertyFlags properties)
{
	VkPhysicalDeviceMemoryProperties memProperties;
	vkGetPhysicalDeviceMemoryProperties(physicalDevice, &memProperties);
	for (uint32_t i = 0; i < memProperties.memoryTypeCount; i++)
	{
		if ((typeFilter & (1 << i)) && (memProperties.memoryTypes[i].propertyFlags & properties) == properties)
		{
			return i;
		}
	}
	throw std::runtime_error("failed to find suitable memory type!");
}

void VulkanRenderer::CreateRenderPass()
{
	VkAttachmentDescription colorAttachment = {};
	colorAttachment.format = swapChainImageFormat; // 스왑체인의 이미지 포맷
	colorAttachment.samples = VK_SAMPLE_COUNT_1_BIT; // 멀티샘플 안하겠다는 것

	//VK_ATTACHMENT_LOAD_OP_LOAD: 어태치먼트 현재 내용을 그대로 보존합니다.
	//VK_ATTACHMENT_LOAD_OP_CLEAR : 시작시에 값을 지웁니다.
	//VK_ATTACHMENT_LOAD_OP_DONT_CARE : 그냥 신경쓰지 않습니다.
	colorAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;

	//VK_ATTACHMENT_STORE_OP_STORE: 그려진 컨텐츠를 메모리에 저장하고, 나중에 읽을수 있게합니다.
	//VK_ATTACHMENT_STORE_OP_DONT_CARE : 그냥 하드웨어가 알아서 하게 합니다.
	colorAttachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;

	colorAttachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
	colorAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;

	colorAttachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;

	//VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL: 이미지를 컬러첨부물처럼 사용합니다.
	//VK_IMAGE_LAYOUT_PRESENT_SRC_KHR : 스왑체인에서 쓰일 이미지 
	//VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL : 이미지를 메모리 카피에 사용합니다.
	colorAttachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;

	VkAttachmentReference colorAttachmentRef = {};
	colorAttachmentRef.attachment = 0;
	colorAttachmentRef.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

	VkSubpassDescription subPass = {};
	subPass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
	subPass.colorAttachmentCount = 1;
	subPass.pColorAttachments = &colorAttachmentRef;
	//서브패스의 기타 패러미터
	//pInputAttachments: 쉐이더에서 읽을 어태치
	//pResolveAttachments : 멀티샘플링에서 사용할 컬러 어태치들
	//pDepthStencilAttachment : 뎁스 및 스텐실 데이타에서 사용될 어태치들
	//pPreserveAttachments : 여기서 사용되지 않지만 보존되어야 할 어태치들

	// 서브패스 이펜던시 그래프 설정
	VkSubpassDependency dependency = {};
	dependency.srcSubpass = VK_SUBPASS_EXTERNAL;
	dependency.dstSubpass = 0;
	dependency.srcStageMask = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT;
	dependency.srcAccessMask = VK_ACCESS_MEMORY_READ_BIT;
	dependency.dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
	dependency.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
	

	VkRenderPassCreateInfo renderPassInfo = {};
	renderPassInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
	renderPassInfo.attachmentCount = 1;
	renderPassInfo.pAttachments = &colorAttachment;
	renderPassInfo.subpassCount = 1;
	renderPassInfo.pSubpasses = &subPass;
	renderPassInfo.dependencyCount = 1;
	renderPassInfo.pDependencies = &dependency;

	if (vkCreateRenderPass(device, &renderPassInfo, nullptr, renderPass.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create render pass!");
	}
}

void VulkanRenderer::CreateFrameBuffer()
{
	swapChainFrameBuffer.resize(swapChainImageViews.size(), VDeleter<VkFramebuffer>{device, vkDestroyFramebuffer});
	for (size_t i = 0; i < swapChainImageViews.size(); ++i)
	{
		VkImageView attachement[] = { swapChainImageViews[i] };
		
		VkFramebufferCreateInfo framebufferInfo = {};
		framebufferInfo.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
		// 렌더패스의 어태치먼트와 동일한 숫자의 어태치먼트를 가져야 한다.
		framebufferInfo.renderPass = renderPass;
		// 이미지 뷰의 갯수 및 이미지뷰 어레이
		framebufferInfo.attachmentCount = 1;
		framebufferInfo.pAttachments = attachement;
		// 현재 스왑체인 이미지는 하나이므로, 레이어는 1
		framebufferInfo.width = swapChainExtent.width;
		framebufferInfo.height = swapChainExtent.height;
		framebufferInfo.layers = 1;

		if (vkCreateFramebuffer(device, &framebufferInfo, nullptr, swapChainFrameBuffer[i].replace()) != VK_SUCCESS)
		{
			throw std::runtime_error("failed to create framebuffer!");
		}
	}
}

void VulkanRenderer::CreateCommandPool()
{
	QueueFamilyIndices queueFamiltyIndices = FindQueueFamilies(physicalDevice);
	
	// 커맨드 버퍼는 그래픽 및 프레젠테이션 큐처럼 한번에 처리됩니다.
	// 각각의 커맨드 풀은 하나의 커맨드 버퍼를 할당할수 있고, 한가지 타입의 큐를 제출할수 있습니다.
	VkCommandPoolCreateInfo poolInfo = {};
	poolInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
	poolInfo.queueFamilyIndex = queueFamiltyIndices.graphicFamily;
	
	//VK_COMMAND_POOL_CREATE_TRANSIENT_BIT: 
	//Hint that command buffers are rerecorded with new commands very often(may change memory allocation behavior)
	//커맨드 버퍼가 자주 사용될 것이라고(메모리 얼로케이션 변경도 포함될수 있음)라고 힌트를 줍니다.
	//VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT
	//Allow command buffers to be rerecorded individually, without this flag they all have to be reset together
	//커맨드 버퍼가 각각 재저장 될수 있게 허용합니다. 이 플래그가 없을 시에 모두 함께 리셋처리되어야 합니다.
	poolInfo.flags = 0;

	if (vkCreateCommandPool(device, &poolInfo, nullptr, commandPool.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create command pool");
	}
}

void VulkanRenderer::CreateCommandBuffers()
{
	commandBuffers.resize(swapChainFrameBuffer.size());
	// vkFreeCommandBuffers의 경우 커맨드 풀까지 초기화 합니다.

	VkCommandBufferAllocateInfo allocInfo = {};
	allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
	allocInfo.commandPool = commandPool;
	//VK_COMMAND_BUFFER_LEVEL_PRIMARY: 
	// 실행 이전에 큐에 제출될 수 없습니다. 하지만 다른 커맨드 버퍼에서 부를수도 없습니다.
	//VK_COMMAND_BUFFER_LEVEL_SECONDARY 
	// 직접 제출할수는 없지만, 주 커맨드 버퍼에서 호출 할수 있습니다.
	allocInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
	allocInfo.commandBufferCount = (uint32_t)commandBuffers.size();

	if (vkAllocateCommandBuffers(device, &allocInfo, commandBuffers.data()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to allocate command buffers!");
	}

	for (size_t i = 0; i < commandBuffers.size(); i++)
	{
		VkCommandBufferBeginInfo beginInfo = {};
		beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
		//VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT
		//The command buffer will be rerecorded right after executing it once.
		//커맨드 버퍼가 시작된 이후 바로 녹화하기 시작합니다.
		//VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT 
		//This is a secondary command buffer that will be entirely within a single render pass.
		//싱글 렌더패스로 사용되는 두번째 커맨드 버퍼입니다.
		//VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT
		//The command buffer can be resubmitted while it is also already pending execution.
		//이 커맨드 버퍼는 실행 대기중에도 다시 제출될수 있습니다.
		beginInfo.flags = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
		// 두번째 버퍼와만 연관되어있습니다. 주 버퍼에서 부를때 스테이드를 구체화합니다.
		beginInfo.pInheritanceInfo = nullptr;//optional

		// 만약 버퍼가 이미 넉화되어 있다면, 임의적으로 리셋합니다.
		vkBeginCommandBuffer(commandBuffers[i], &beginInfo);

		VkRenderPassBeginInfo renderPassInfo = {};
		renderPassInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
		renderPassInfo.renderPass = renderPass;
		renderPassInfo.framebuffer = swapChainFrameBuffer[i];
		renderPassInfo.renderArea.offset = {0,0};
		renderPassInfo.renderArea.extent = swapChainExtent;

		// 검은색으로 클리어
		// VK_ATTACHMENT_LOAD_OP_CLEAR에서 사용될 것
		VkClearValue clearColor = {0.0f, 0.0f, 0.0f, 1.0f};
		renderPassInfo.clearValueCount = 1;
		renderPassInfo.pClearValues = &clearColor; 
		//VK_SUBPASS_CONTENTS_INLINE: 
		//The render pass commands will be embedded in the primary command buffer itself and no secondary command buffers will be executed.
		//2차 버퍼를 사용하지 않고 주버퍼만 실행
		//VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS : The render pass commands will be executed from secondary command buffers.
		//렌더패스가 2차 버퍼에서 실행됨
		vkCmdBeginRenderPass(commandBuffers[i], &renderPassInfo, VK_SUBPASS_CONTENTS_INLINE);

		vkCmdBindPipeline(commandBuffers[i], VK_PIPELINE_BIND_POINT_GRAPHICS, graphicsPipeline);

		if (VertexNum > 0)
		{
			VkBuffer vertexBuffers[] = { VertexBuffer };
			VkDeviceSize offsets[] = { 0 };
			vkCmdBindVertexBuffers(commandBuffers[i], 0, 1, vertexBuffers, offsets);
		}		
		//vertexCount, 버텍스 세개짜리 삼각형을 그리므로..
		//instanceCount, 인스탄스 렌더링을 쓰지 않는다.
		//firstVertex, // 버텍스 버퍼에서의 오프셋
		//firstIntance // 인스탄스 렌더링에서의 오프셋
		vkCmdDraw(commandBuffers[i], VertexNum, 1, 0, 0);

		vkCmdEndRenderPass(commandBuffers[i]);

		if (vkEndCommandBuffer(commandBuffers[i]) != VK_SUCCESS)
		{
			throw std::runtime_error("failed to record command buffer!");
		}
	}
}

void VulkanRenderer::CreateSemaphore()
{
	VkSemaphoreCreateInfo semaphoreInfo = {};
	semaphoreInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
	if (vkCreateSemaphore(device, &semaphoreInfo, nullptr, imageAvailableSemaphore.replace()) != VK_SUCCESS ||
		vkCreateSemaphore(device, &semaphoreInfo, nullptr, renderFinishedSemaphore.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create semaphores!");
	}
}

void VulkanRenderer::CreateBuffer(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties, VDeleter<VkBuffer>& buffer, VDeleter<VkDeviceMemory>& bufferMemory)
{
	// 스테이징 버퍼
	// 버텍스 버퍼의 경우에 CPU에서 접근 할수 있기 때문에 최적화 되어있는 버퍼가 아니다.
	// 따라서 CPU에서 접근하지 못하도록 VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT의 플래그를 가진 버퍼를 만든다.
	// 메모리 트랜스퍼 (메모리 변환)을 위해선는 VK_QUEUE_TRANSFER_BIT을 지원하는 패밀리 큐가 있어야 하고,
	// 다행히 VK_QUEUE_GRAPHICS_BIT과 VK_QUEUE_COMPUTE_BIT는 암묵적으로 VK_QUEUE_TRANSFER_BIT를 지원한다.

	VkBufferCreateInfo bufferInfo = {};
	bufferInfo.sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
	bufferInfo.size = size;
	bufferInfo.usage = usage;
	bufferInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

	//VDeleter<VkBuffer> vertexBuffer{ VRenderer->device, vkDestroyBuffer };
	//VDeleter<VkDeviceMemory> vertexBufferMemory{ VRenderer->device, vkFreeMemory };

	if (vkCreateBuffer(device, &bufferInfo, nullptr, buffer.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create vertex buffer");
	}
	VkMemoryRequirements memRequirements;
	vkGetBufferMemoryRequirements(device, buffer, &memRequirements);

	VkMemoryAllocateInfo allocInfo = {};
	allocInfo.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
	allocInfo.allocationSize = memRequirements.size;
	allocInfo.memoryTypeIndex = findMemoryType(memRequirements.memoryTypeBits, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);

	if (vkAllocateMemory(device, &allocInfo, nullptr, bufferMemory.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to allocate buffer memory");

	}

	vkBindBufferMemory(device, buffer, bufferMemory, 0);
}

void VulkanRenderer::CreateVertexBuffer(const std::vector<Vertex>& InVertex)
{
	VertexNum = 0;

	VkDeviceSize bufferSize = sizeof(InVertex[0]) * InVertex.size();
	VDeleter<VkBuffer> stagingBuffer{ device, vkDestroyBuffer };
	VDeleter<VkDeviceMemory> stagingBufferMemory{ device, vkFreeMemory };
	
	//VK_BUFFER_USAGE_TRANSFER_SRC_BIT: 메모리 트랜스퍼 작업에서 소스가 될수 있는 버퍼
	//VK_BUFFER_USAGE_TRANSFER_DST_BIT: 메모리 트랜스퍼 작업에서 목적지가 될수 있는 버퍼

	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, stagingBuffer, stagingBufferMemory);

	void* data;
	vkMapMemory(device, stagingBufferMemory	, 0, bufferSize, 0, &data);
	memcpy(data, InVertex.data(), bufferSize);
	vkUnmapMemory(device, stagingBufferMemory);

	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, VertexBuffer, VertexBufferMemory);
	CopyBuffer(stagingBuffer, VertexBuffer, bufferSize);

	VertexNum = (uint32_t)InVertex.size();
}

void VulkanRenderer::CopyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, VkDeviceSize size)
{
	VkCommandBufferAllocateInfo allocInfo = {};
	allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
	allocInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
	allocInfo.commandPool = commandPool;
	allocInfo.commandBufferCount = 1;

	VkCommandBuffer commandBuffer;
	vkAllocateCommandBuffers(device, &allocInfo, &commandBuffer);

	VkCommandBufferBeginInfo beginInfo = {};
	beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
	beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT; // 한번만 서밋한다는 이야기
	vkBeginCommandBuffer(commandBuffer, &beginInfo);

	VkBufferCopy copyRegion = {};
	copyRegion.srcOffset = 0; // Optional
	copyRegion.dstOffset = 0; // Optional
	copyRegion.size = size;
	vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, 1, &copyRegion);

	vkEndCommandBuffer(commandBuffer);

	VkSubmitInfo submitInfo = {};
	submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
	submitInfo.commandBufferCount = 1;
	submitInfo.pCommandBuffers = &commandBuffer;

	vkQueueSubmit(graphicQueue, 1, &submitInfo, VK_NULL_HANDLE);
	vkQueueWaitIdle(graphicQueue);

	vkFreeCommandBuffers(device, commandPool, 1, &commandBuffer);
}

void VulkanRenderer::DrawFrame()
{
	uint32_t imageIndex;
	// 디바이스로 부터 스왑체인 이미지를 가져온다.
	// 세번째 패러미터가 타임아웃 시간
	// imageAvailable 세마포어를 여기서 사용
	// 사용 가능한 이미지 인덱스는 마지막 패러미터
	VkResult result = vkAcquireNextImageKHR(
		device, swapChain, std::numeric_limits<uint64_t>::max(), imageAvailableSemaphore, VK_NULL_HANDLE, &imageIndex);

	if (result == VK_ERROR_OUT_OF_DATE_KHR)
	{
		RecreateSwapChain();
		return;
	}
	else if (result != VK_SUCCESS && result != VK_SUBOPTIMAL_KHR)
	{
		throw std::runtime_error("failed to acquire swap chain image");
	}

	VkSubmitInfo submitInfo = {};
	submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;

	//세마포어 구체화 어떤 스테이지에서 세마포어 기다림 처리를 할건지 정해준다.
	VkSemaphore waitSemaphores[] = { imageAvailableSemaphore };
	VkPipelineStageFlags waitStages[] = { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
	submitInfo.waitSemaphoreCount = 1;
	submitInfo.pWaitSemaphores = waitSemaphores;
	submitInfo.pWaitDstStageMask = waitStages;
	
	// 실제 실행할 커맨드 버퍼
	submitInfo.commandBufferCount = 1;
	submitInfo.pCommandBuffers = &commandBuffers[imageIndex];

	// 렌더완료 세마포어 설정
	VkSemaphore signalSemaphores[] = { renderFinishedSemaphore };
	submitInfo.signalSemaphoreCount = 1;
	submitInfo.pSignalSemaphores = signalSemaphores;

	if (vkQueueSubmit(graphicQueue, 1, &submitInfo, VK_NULL_HANDLE) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to submit draw command buffer!");
	}

	VkPresentInfoKHR presentInfo = {};
	presentInfo.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
	presentInfo.waitSemaphoreCount = 1;
	presentInfo.pWaitSemaphores = signalSemaphores;

	VkSwapchainKHR swapChains[] = { swapChain };
	presentInfo.swapchainCount = 1;
	presentInfo.pSwapchains = swapChains;
	presentInfo.pImageIndices = &imageIndex;

	presentInfo.pResults = nullptr;
	result = vkQueuePresentKHR(presentQueue, &presentInfo);

	if (result == VK_ERROR_OUT_OF_DATE_KHR || result == VK_SUBOPTIMAL_KHR)
	{
		RecreateSwapChain();
	}
	else if (result != VK_SUCCESS)
	{
		throw std::runtime_error("failed to present swap chain image!");
	}
}

void VulkanRenderer::WaitIdle()
{
	vkDeviceWaitIdle(device);
}

void VulkanRenderer::RecreateSwapChain()
{
	vkDeviceWaitIdle(device);

	CreateSwapChain();
	CreateImageViews();
	CreateRenderPass();
	CreateGraphicsPipeLine();
	CreateFrameBuffer();
	CreateCommandPool();
	CreateCommandBuffers();
}