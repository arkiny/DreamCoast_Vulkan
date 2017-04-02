#include "DcCommonHeader.h"
#include "Renderer.h"
#include "Geometry.h"
#include "SystemSetting.h"
#include "FileManager.h"
#include "Model.h"

// Ʃ�丮��� �ӽ� ���� ����
//Geometry Triangle;
//Geometry Quads;
//Geometry ThreeDQuads;
Model ModelTute;

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
	CreateInstance(); // ��ĭ �ν�ź�� ����
	SetupDebugCallback(); // ����� �ݹ� ó��
	CreateSurface(InWindow); // �����̽� ������ �����ͼ� ����
	PickPhysicalDevice(); // ��� ������ ���� ��ġ ��������
	CreateLogicalDevice(); // �� ��ġ �����
	CreateSwapChain(); // ����ü�� �����
	
	CreateImageViews(); // �̹��� �� �����

	CreateRenderPass(); // ���� �н� �����

	CreateDescriptorSetLayout(); // ��ũ���� ��Ʈ �����

	CreateGraphicsPipeLine(); // �׷��� ������ ���� �����, ���̴� �ҷ����� ����
	CreateCommandPool(); // Ŀ�ǵ� Ǯ �����

	CreateDepthResources(); //���� ���ҽ� �����
	CreateFrameBuffer(); // ������ ���� �����, ������ �������Ƿ� ���� �ڷ� �����Ѵ�.
	CreateTextureImage();
	CreateTextureImageView();
	CreateTextureSampler();

	//CreateVertexBuffer(Triangle.trianglevertices); // ���ؽ� ���۸����, ����ó���� �� ���߿�
	//CreateVertexBuffer(Quads.QuadVerticesWithUV);
	//CreateIndexBuffer(Quads.QuadIndices);

	ModelTute.LoadModel();
	CreateVertexBuffer(ModelTute.GetVertices());
	CreateIndexBuffer(ModelTute.GetIndices());

	CreateUniformBuffer(UniformBuffer);
	CreateDescriptorPool(); // ��ũ���� Ǯ �����
	CreateDescriptorSet();

	CreateCommandBuffers(); // Ŀ�ǵ� ���� �����
	CreateSemaphore(); // �������� �����
}

void VulkanRenderer::CreateInstance()
{
	if (SystemSetting::enableValidationLayers && !CheckValidationLayerSupport())
	{
		throw std::runtime_error("validation layers requested, but not available");
	}

	VkApplicationInfo appInfo = {}; // ���ø����̼� ���� �Է�
	appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;  // ��ĭ�� �׻� �� ��Ʈ������ ������ ���� �������־�� �մϴ�.
	appInfo.pNext = nullptr; // �ϴ� �� �����ͷ� ���ܵӴϴ�. ���� �ٸ� ��Ʈ���Ŀ� �������ٶ� ����Ҽ� �ִٰ� �մϴ�.
	appInfo.pApplicationName = "Hello Vulkan"; // ���ø����̼� �̸�
	appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0); // ����� ��ĭ ����
	appInfo.pEngineName = "DreamCoast Engine";
	appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
	appInfo.apiVersion = VK_API_VERSION_1_0; // API ����

	VkInstanceCreateInfo createInfo = {};
	createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
	createInfo.pApplicationInfo = &appInfo;

	// ��ĭ�� �ο� ���� API�̱� ������ �����쿡 ���õ� Ȯ������ ���� ���� �����ؾ� �մϴ�.
	// ������ GLFW������ �̹� ������� ��Ʈ�� �Ǿ� �ֱ� ������, glfw�� �ͽ��ټ��� �����ͼ� �߰��ϵ��� �մϴ�.
	auto extensions = GetRequiredExtensions();
	createInfo.enabledExtensionCount = (uint32_t)extensions.size();
	createInfo.ppEnabledExtensionNames = extensions.data();

	// �ν�ź�� ������ �߸����̼� ���̾� ó���� �մϴ�.
	// �߸����̼� ���̾�� ����� ������ ���� ���̾� ó���μ� ����׿� ū ������ �شٰ� �մϴ�.
	if (SystemSetting::enableValidationLayers)
	{
		createInfo.enabledLayerCount = (uint32_t)SystemSetting::validationLayers.size();
		createInfo.ppEnabledLayerNames = SystemSetting::validationLayers.data();
	}
	else
	{
		createInfo.enabledLayerCount = 0;
	}

	// ���� �ν�ź���� �����մϴ�. ù��° ���ڴ� ��������, �ι�° ������ Ŀ���� �Ҵ���(TBB����)����, ����° ������ 
	// ���ο� ������Ʈ�� �����ɽ� ����� ������ �����Դϴ�.
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

	VkDebugReportCallbackCreateInfoEXT createInfo = {}; // ����� ����Ʈ �ݹ��� ����� ���� ��Ʈ����
	createInfo.sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
	createInfo.flags = VK_DEBUG_REPORT_ERROR_BIT_EXT | VK_DEBUG_REPORT_WARNING_BIT_EXT;
	createInfo.pfnCallback = DebugCallback;

	if (CreateDebugReportCallbackEXT(instance, &createInfo, nullptr, callback.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to set up debug callback!");
	}
}

inline void VulkanRenderer::EndSingleTimeCommands(VkCommandBuffer commandBuffer) {
	vkEndCommandBuffer(commandBuffer);

	VkSubmitInfo submitInfo = {};
	submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
	submitInfo.commandBufferCount = 1;
	submitInfo.pCommandBuffers = &commandBuffer;

	vkQueueSubmit(graphicQueue, 1, &submitInfo, VK_NULL_HANDLE);
	vkQueueWaitIdle(graphicQueue);

	vkFreeCommandBuffers(device, commandPool, 1, &commandBuffer);
}

inline void VulkanRenderer::CopyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, VkDeviceSize size) {
	VkCommandBuffer commandBuffer = BeginSingleTimeCommands();

	VkBufferCopy copyRegion = {};
	copyRegion.size = size;
	vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, 1, &copyRegion);

	EndSingleTimeCommands(commandBuffer);
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
	vkEnumeratePhysicalDevices(instance, &deviceCount, nullptr); // ��ĭ�� �����ϴ� GPU�� �����ϴ� �Լ�

	if (deviceCount == 0)
	{
		throw std::runtime_error("failed to find GPUs with Vulkan Support");
	}

	std::vector<VkPhysicalDevice> devices(deviceCount);
	vkEnumeratePhysicalDevices(instance, &deviceCount, devices.data());

	// �������� ���� �ڵ� ������ �븰��.
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

	// ����̽��� Ȯ������ �����ϴ��� Ȯ���մϴ�.
	bool extensionSupported = CheckDeviceExtensionSupport(device);

	// ����ü�� �������θ� Ȯ���Ѵ�
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
	VkPhysicalDeviceProperties deviceProperties; // ����̽��� �Ӽ� ����
	VkPhysicalDeviceFeatures deviceFeatures; // ����̽��� ���� ����
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
	
	// ������ ���� ť�йи��Ӽ����� �����ɴϴ�.
	uint32_t queueFamilyCount = 0;
	vkGetPhysicalDeviceQueueFamilyProperties(device, &queueFamilyCount, nullptr);

	std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
	vkGetPhysicalDeviceQueueFamilyProperties(device, &queueFamilyCount, queueFamilies.data());

	int i = 0;
	for (const auto& queueFamily : queueFamilies)
	{
		// ����̽��� ť�йи��߿� �׷��� ��Ʈ ť�йи��� Ȯ��
		if (queueFamily.queueCount > 0 && queueFamily.queueFlags & VK_QUEUE_GRAPHICS_BIT)
		{
			indices.graphicFamily = i;
		}

		// ����̽��� ť�йи��߿� ������Ʈ ť�йи��� Ȯ��
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
	// ���� ť ��üȭ�ϱ�
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



	// ����̽� ���� ��üȭ�ϱ�
	VkPhysicalDeviceFeatures deviceFeatures = {}; // ������ Ư���� �ʿ��Ѱ� �����Ƿ� false�� ���Ӵϴ�.
	
	// ������ ����̽� �����
	VkDeviceCreateInfo createInfo = {};
	createInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
	createInfo.pQueueCreateInfos = queueCreateInfos.data();
	createInfo.queueCreateInfoCount = (uint32_t)queueCreateInfos.size();
	createInfo.pEnabledFeatures = &deviceFeatures;

	// ������ Ȯ���� ���� �ʽ��ϴ�.
	createInfo.enabledExtensionCount = (uint32_t)SystemSetting::deviceExtensions.size();
	createInfo.ppEnabledExtensionNames = SystemSetting::deviceExtensions.data();

	// ���� ���̾�� ����� ��忡���� �߰��մϴ�.
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
	// ���� ��ȣ�ϴ� ������ �������� ����Ʈ ���̽� �ó�����. ����� �Ѱ��̰� ������ Ȯ������ �ʾҴٸ� �����ؼ� �����ش�.
	if (availableFormats.size() == 1 && availableFormats[0].format == VK_FORMAT_UNDEFINED)
	{
		return{VK_FORMAT_B8G8R8A8_UNORM, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR};
	}

	for (const auto& availableFormat : availableFormats)
	{
		// ���� ��ȣ�Ǵ� ������ �����ϸ� �P�� ������ ����Ѵ�.
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
	// ���� �� 4������ �����Ѵ�.
	//VK_PRESENT_MODE_IMMEDIATE_KHR = 0, �̹����� �������ڸ��� �ѷ������� ��, �׾ �� �Ͼ�� �ִ�.
	//VK_PRESENT_MODE_MAILBOX_KHR = 1, 
	// ť�� ������ ���ø����̼��� ����ϴ� ��ſ�, ť�� �����ִ� ���ο� �̹����� �Ѹ���.
	// �� ���� Ʈ���� ���۸��� ¥�µ� ���δ�.
	//VK_PRESENT_MODE_FIFO_KHR = 2, 
	// ��Ƽ�� �÷�ũ�� ���� ���� ��ٸ��鼭 ���� ���� ������ �̹������� �Ѹ��� ��, 
	// ���� ť�� ������ ���α׷��� ��ٷ����Ѵ�. ��Ƽ�� ��ũ�� ���� ���
	//VK_PRESENT_MODE_FIFO_RELAXED_KHR = 3,
	// ���� ���ø����̼��� ��ٸ��� ���̰�, ť�� ����ִٸ�, ��Ƽ�� ��ũ�� ��ٸ��� �ʰ� �ٷ� ��������. �׾�� �Ͼ�� �ִ�.
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
	// ����ü�ο� ��� ������ �ػ󵵸� �˾Ƴ��� ������ �Ѵ�.
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
	createInfo.imageArrayLayers = 1; // �̹��� ��� ����, 3D ���ø����̼��� ����� ��찡 �ƴ϶�� 1��
	createInfo.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT; 
	// ����ü�ο��� � ���� ������ ó���Ұ����� VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT�� �ٷ� ĥ�ϱ� ������ �÷� ÷�η� ���
	// ���� ���� �ٸ� �̹����� �׸��ڿ� ����Ʈ ���μ����� ó���Ѵٸ�, VK_IMAGE_USAGE_TRANSFER_DST_BIT�� ���� �÷��׸� ���

	QueueFamilyIndices indices = FindQueueFamilies(physicalDevice);
	uint32_t queueFamiltyIndices[] = { (uint32_t)indices.graphicFamily, (uint32_t)indices.presentFamily };
	if (indices.graphicFamily != indices.presentFamily)
	{
		createInfo.imageSharingMode = VK_SHARING_MODE_CONCURRENT;
		// �̹����� ���� ť�йи��� ���� �����ȴ�.
		createInfo.queueFamilyIndexCount = 2;
		createInfo.pQueueFamilyIndices = queueFamiltyIndices;
	}
	else
	{
		createInfo.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
		// �̹����� �ϳ��� ť�йи��� ���� �ִٸ�, �ٸ� ť�йи��� �������� ��ٷ��� �ϸ�, �ְ��� �����ս��� ������.
		createInfo.queueFamilyIndexCount = 0; // Optional
		createInfo.pQueueFamilyIndices = nullptr; // Optional
	}

	// ����ü���� Ʈ�������� ������� �����ټ� �ִ�.
	createInfo.preTransform = swapChainSupport.capabilities.currentTransform;
	
	// ���� ä���� ��� ó���ɱ ���� ó����, ����� ����ä���� ���õǱ� ���ϹǷ� �Ʒ��� �÷��׸� ����Ѵ�.
	createInfo.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
	createInfo.presentMode = presentMode;
	// �ȼ��� Į�� ��ȣ�ص� ���� ���ٴ� ǥ��
	createInfo.clipped = VK_TRUE;
	
	// ��ũ����Ʈ�� ���� ����ü�� ó��
	VkSwapchainKHR oldSwapChain = swapChain;
	createInfo.oldSwapchain = oldSwapChain;

	// ��ĭ�� ����ü���� ��ȿ���� �ʰų� ����ȭ���� �ʰ� ó���ع��� �� �ִ�(�����찡 ������¡ �Ǿ�����)
	// SwapChainRecreation�� ����..
	// ������ ����ü���� �ϳ��� ����� �ɷ�
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
	// Ŀ���� ��������Ϳ� �Բ� ���� ��� �ʱ�ȭ
	swapChainImageViews.resize(swapChainImages.size(), VDeleter<VkImageView>{device, vkDestroyImageView});

	for (uint32_t i = 0; i < swapChainImages.size(); i++)
	{
		CreateImageView(swapChainImages[i], swapChainImageFormat, VK_IMAGE_ASPECT_COLOR_BIT,swapChainImageViews[i]);
	}
}

void VulkanRenderer::CreateGraphicsPipeLine()
{
	// ����Ʈ �ڵ�� �����ϵ� ���̴����� �ҷ��´�.
	auto vertShaderCode = FileManager::ReadFile("../../../Shader/UniformTexCoordVS.spv");
	auto fragShaderCode = FileManager::ReadFile("../../../Shader/TexCoordFragShader.spv");
	
	// ���̴� ����� �����Ѵ�.
	CreateShaderModule(vertShaderCode, vertShaderModule);
	CreateShaderModule(fragShaderCode, fragShaderModule);

	VkPipelineShaderStageCreateInfo vertShaderStageInfo = {};
	vertShaderStageInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
	vertShaderStageInfo.stage = VK_SHADER_STAGE_VERTEX_BIT;// ���ؽ� ���̴� ������������ �˸���.
	vertShaderStageInfo.module = vertShaderModule; // ���� �ڵ尡 ����� ���
	vertShaderStageInfo.pName = "main"; // ��Ʈ�� ����Ʈ�� ���� �̸�

	VkPipelineShaderStageCreateInfo fragShaderStageInfo = {};
	fragShaderStageInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
	fragShaderStageInfo.stage = VK_SHADER_STAGE_FRAGMENT_BIT;// ������ ���̴� ������������ �˸���.
	fragShaderStageInfo.module = fragShaderModule; // ���� �ڵ尡 ����� ���
	fragShaderStageInfo.pName = "main"; // ��Ʈ�� ����Ʈ�� ���� �̸�

	VkPipelineShaderStageCreateInfo shaderStages[] = {vertShaderStageInfo, fragShaderStageInfo};

	// ���� API���� ��� �׷��� ������ ���ο� ���� �⺻ ������ ����������, ��ĭ�� ������ ��������� �Ѵ�.
	// ����Ʈ ���������, �÷� ���� �Լ�����...
	

	// ���ؽ� ��ǲ
	// ���ؽ� ���̴��� �н��� ���ؽ��� ���ĵ���Ÿ, �����ϴ� ����� �ΰ���
	// ���ؽ� Ȥ�� �ν�ź������ ���ε� ���ִ� ���
	// ���ؽ� ���̴��� �ѱ� �Ӽ��� �������ְ�, ���ε� �ϴ� ���
	
	// �ϴ� ����� ���ؽ� ����Ÿ�� ���̴��� �ص��ڵ� �������Ƿ�, ���� �߰��� ���ؽ� ����Ÿ�� ����.
	VkPipelineVertexInputStateCreateInfo vertexInputInfo = {};
	vertexInputInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;

	auto bindingDescription = Vertex::getBindingDescription();
	auto attributeDescription = Vertex::getAttributeDescription();

	// ���ؽ� ����Ÿ ���ε� �����Է�
	vertexInputInfo.vertexBindingDescriptionCount = 1;
	vertexInputInfo.pVertexBindingDescriptions = &bindingDescription; // optional
	vertexInputInfo.vertexAttributeDescriptionCount = attributeDescription.size();
	vertexInputInfo.pVertexAttributeDescriptions = attributeDescription.data(); // optional

	// �Է� ���ձ�, ���ؽ��� ��� �����Ұ��ΰ�.. ���� �ƴ� �װ�
	//VK_PRIMITIVE_TOPOLOGY_POINT_LIST: ����Ʈ ������
	//VK_PRIMITIVE_TOPOLOGY_LINE_LIST: ���� ���� �� ����Ʈ
	//VK_PRIMITIVE_TOPOLOGY_LINE_STRIP: ���� �ִ� ������Ʈ(�ι�° ���ؽ��� ���� ������ �ɼ� ����)
	//VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST: ���� ���� �ﰢ�� ����Ʈ
	//VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP: ����° ���ؽ��� ���� �ﰢ���� ù��° ���ؽ�
	VkPipelineInputAssemblyStateCreateInfo inputAssembly = {};
	inputAssembly.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
	inputAssembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
	inputAssembly.primitiveRestartEnable = VK_FALSE;

	//����Ʈ ����
	// ������ ������ ������ ũ��, ���� (0,0)���� ���� (����, ����) ũ�� ���θ� ����.
	VkViewport viewport = {};
	viewport.x = 0.0f;
	viewport.y = 0.0f;
	viewport.width = (float)swapChainExtent.width;
	viewport.height = (float)swapChainExtent.height;
	viewport.minDepth = 0.0f;
	viewport.maxDepth = 1.0f;

	// ���� ���ʱ� ����, � �κ��� �Ȼ����� ������ ������� �����մϴ�.
	// ���� ���ʱ� �ۿ� �ִ� �ȼ����� �����Ͷ������� ���� ���͵˴ϴ�.
	VkRect2D scissor = {};
	scissor.offset = { 0, 0 };
	scissor.extent = swapChainExtent;

	// ���� ����Ʈ�� ����� ���� ����ü�� �����մϴ�.
	// ��� �׷��� ī��� ��Ƽ ����Ʈ�� ����Ҽ� �ִµ�, ����ġ���� GPU��ó�� Ȱ��ȭ �ؾ��մϴ�.
	VkPipelineViewportStateCreateInfo viewportState = {};
	viewportState.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
	viewportState.viewportCount = 1;
	viewportState.pViewports = &viewport;
	viewportState.scissorCount = 1;
	viewportState.pScissors = &scissor;

	// �����Ͷ�����
	// �����׽����� ���� �����׽���, ���̽� �ø�ó�� �� ���ؽ� ���̴��� �����׸����� ����� �۾��� �մϴ�.
	// ���̾������� ������ó�� ���� ���⼭ ó���Ҽ� �ֽ��ϴ�.
	VkPipelineRasterizationStateCreateInfo rasterizer = {};
	rasterizer.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
	// true�ϰ��, Near�� Far Plane �ۿ� �ִ� ��� ���ؽ��� �����ϰ� �˴ϴ�. ���� ������ �ʿ��� ���� �ִٰ��մϴ�.
	// �ش� ����� GPU ��ó�� ���� Ȱ��ȭ �ؾ��մϴ�.
	rasterizer.depthClampEnable = VK_FALSE; 
	// ���� TRUE�� �����Ǿ��մٸ� ������Ʈ���� �����Ͷ������� ������� �ʽ��ϴ�. 
	// ���� ������ ���ۿ� ���� ��� �ƿ�ǲ�� ��Ȱ��ȭ��ŵ�ϴ�.
	rasterizer.rasterizerDiscardEnable = VK_FALSE;
	// ���� �ƴ� ������ ����Դϴ�.
	//VK_POLYGON_MODE_FILL: �������� ä��ϴ�.
	//VK_POLYGON_MODE_LINE : ���̾� ������ ���
	//VK_POLYGON_MODE_POINT : ���ؽ����� ������ ǥ���մϴ�.
	rasterizer.polygonMode = VK_POLYGON_MODE_FILL;
	// ���� ���⸦ �����մϴ�. 1.0���� �β������ ���� ����带 Ȱ��ȭ �ؾ��մϴ�.
	rasterizer.lineWidth = 1.0f;
	// ���̽� �ø���� �Դϴ�.
	rasterizer.cullMode = VK_CULL_MODE_BACK_BIT;
	//rasterizer.frontFace = VK_FRONT_FACE_CLOCKWISE;
	rasterizer.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
	// �����׸�Ʈ�� �������� ���� �ٸ� ���� �����Ҽ� �ֽ��ϴ�. ������ ���ο� ���˴ϴ�.
	rasterizer.depthBiasEnable = VK_FALSE;
	rasterizer.depthBiasConstantFactor = 0.0f;// optional
	rasterizer.depthBiasClamp = 0.0f; // optional
	rasterizer.depthBiasSlopeFactor = 0.0f; // optional

	//��Ƽ���ø�
	// ��Ƽ �󸮾���� ������� ���˴ϴ�. ��Ʃ�丮�󿡼��� ������� �ʽ��ϴ�.
	VkPipelineMultisampleStateCreateInfo multisampling = {};
	multisampling.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
	multisampling.sampleShadingEnable = VK_FALSE;
	multisampling.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
	multisampling.minSampleShading = 1.0f; // Optional
	multisampling.pSampleMask = nullptr; // Optional
	multisampling.alphaToCoverageEnable = VK_FALSE; // Optional
	multisampling.alphaToOneEnable = VK_FALSE; // Optional

	// �� Ʃ�丮�󿡼��� ������ ���ٽ� ���۸� ������ �ʽ��ϴ�. 
	VkPipelineDepthStencilStateCreateInfo depthStencil = {};
	depthStencil.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
	depthStencil.depthTestEnable = VK_TRUE;
	depthStencil.depthWriteEnable = VK_TRUE;
	depthStencil.depthCompareOp = VK_COMPARE_OP_LESS;
	depthStencil.depthBoundsTestEnable = VK_FALSE;
	depthStencil.minDepthBounds = 0.0f; // Optional
	depthStencil.maxDepthBounds = 1.0f; // Optional
	depthStencil.stencilTestEnable = VK_FALSE;
	depthStencil.front = {}; // Optional
	depthStencil.back = {}; // Optional

	// �÷� ����
	// �Ʒ��� �����ڵ带 �����ϴ�.
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
	//�� ����ϰ��� �Ҷ����� 
	//colorBlendAttachment.blendEnable = VK_TRUE;
	//colorBlendAttachment.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
	//colorBlendAttachment.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
	//colorBlendAttachment.colorBlendOp = VK_BLEND_OP_ADD;
	//colorBlendAttachment.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
	//colorBlendAttachment.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
	//colorBlendAttachment.alphaBlendOp = VK_BLEND_OP_ADD;
	//�� ���� �������ָ� �ȴ�.
	// ���� colorBlending.logicOpEnable�� VK_TRUE�� �������־�� �Ѵ�.

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

	// ���̳��� ������Ʈ
	// ������������ ������ϴ� ��� �ٲܼ� �ִ� ��� ������Ʈ���� �ֽ��ϴ�.
	// �ش� ������Ʈ���� ���� �ſ� �����ϴ�.
	VkDynamicState dynamicStates[] =
	{
		VK_DYNAMIC_STATE_VIEWPORT,
		VK_DYNAMIC_STATE_LINE_WIDTH
	};

	VkPipelineDynamicStateCreateInfo dynamicState = {};
	dynamicState.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
	dynamicState.dynamicStateCount = 2;
	dynamicState.pDynamicStates = dynamicStates;

	// ���������� ���̾ƿ�
	// ������ ����� ����ϹǷ� �Ʒ��� ���� �����մϴ�.
	//VkPipelineLayoutCreateInfo pipelineLayoutInfo = {};
	//pipelineLayoutInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
	//pipelineLayoutInfo.setLayoutCount = 0; // optional
	//pipelineLayoutInfo.pSetLayouts = nullptr;//optional
	//pipelineLayoutInfo.pushConstantRangeCount = 0;//optional
	//pipelineLayoutInfo.pPushConstantRanges = 0;//opiotnal

	VkDescriptorSetLayout setLayouts[] = { descriptorSetLayout };
	VkPipelineLayoutCreateInfo pipelineLayoutInfo = {};
	pipelineLayoutInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
	pipelineLayoutInfo.setLayoutCount = 1;
	pipelineLayoutInfo.pSetLayouts = setLayouts;

	if (vkCreatePipelineLayout(device, &pipelineLayoutInfo, nullptr, pipelineLayout.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create pipeline layout!");
	}

	VkGraphicsPipelineCreateInfo pipelineInfo = {};
	pipelineInfo.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
	// ���̴� ����
	pipelineInfo.stageCount = 2;
	pipelineInfo.pStages = shaderStages;
	
	// �����Լ��� ����
	pipelineInfo.pVertexInputState = &vertexInputInfo;
	pipelineInfo.pInputAssemblyState = &inputAssembly;
	pipelineInfo.pViewportState = &viewportState;
	pipelineInfo.pRasterizationState = &rasterizer;
	pipelineInfo.pMultisampleState = &multisampling;
	pipelineInfo.pDepthStencilState = &depthStencil;
	pipelineInfo.pColorBlendState = &colorBlending;
	pipelineInfo.pDynamicState = nullptr; // Optional

	//���������� ���̾ƿ� ����
	pipelineInfo.layout = pipelineLayout;

	//���� �н� ����
	pipelineInfo.renderPass = renderPass;
	pipelineInfo.subpass = 0;

	// ��ĭ������ ���� ���������ο��� ���ο� ������������ �Ļ���ų�� �ֽ��ϴ�.
	// ������������ �Ļ���Ű�� ���� �� ������������ ����� �ͺ��� ���� �ΰ� ���,
	// ���� �θ�κ��� ���� ���������� ����Ī�� �ξ� ������ �Ϸ�˴ϴ�.
	// ������ �̱������������� ����Ƿ� ���ڵ��� ����մϴ�.
	pipelineInfo.basePipelineHandle = VK_NULL_HANDLE;
	pipelineInfo.basePipelineIndex = -1;
	
	// �ι�° �з����ʹ� VkPipelineCache ������Ʈ�� ���� ���۷�����, ������ �����ϰ� ĳ��ó���� �ϴ� ���̶� �մϴ�.
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

VkFormat VulkanRenderer::findSupportedFormat(const std::vector<VkFormat>& candidates, VkImageTiling tiling, VkFormatFeatureFlags features)
{
	VkFormatProperties props;
	for (VkFormat format : candidates)
	{
		VkFormatProperties props;
		vkGetPhysicalDeviceFormatProperties(physicalDevice, format, &props);

		if (tiling == VK_IMAGE_TILING_LINEAR && (props.linearTilingFeatures & features) == features) {
			return format;
		}
		else if (tiling == VK_IMAGE_TILING_OPTIMAL && (props.optimalTilingFeatures & features) == features) {
			return format;
		}

	}

	//linearTilingFeatures: Use cases that are supported with linear tiling
	//optimalTilingFeatures : Use cases that are supported with optimal tiling
	//bufferFeatures : Use cases that are supported for buffers

	throw std::runtime_error("failed to find support format!");
	//return VkFormat();
}

inline VkFormat VulkanRenderer::findDepthFormat() {
	return findSupportedFormat({ VK_FORMAT_D32_SFLOAT, VK_FORMAT_D32_SFLOAT_S8_UINT, VK_FORMAT_D24_UNORM_S8_UINT },
		VK_IMAGE_TILING_OPTIMAL,
		VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT);
}

inline bool VulkanRenderer::HasStencilComponent(VkFormat format)
{
	return (format == VK_FORMAT_D32_SFLOAT_S8_UINT || format == VK_FORMAT_D24_UNORM_S8_UINT);
}

void VulkanRenderer::CreateRenderPass()
{
	VkAttachmentDescription colorAttachment = {};
	colorAttachment.format = swapChainImageFormat; // ����ü���� �̹��� ����
	colorAttachment.samples = VK_SAMPLE_COUNT_1_BIT; // ��Ƽ���� ���ϰڴٴ� ��

	//VK_ATTACHMENT_LOAD_OP_LOAD: ����ġ��Ʈ ���� ������ �״�� �����մϴ�.
	//VK_ATTACHMENT_LOAD_OP_CLEAR : ���۽ÿ� ���� ����ϴ�.
	//VK_ATTACHMENT_LOAD_OP_DONT_CARE : �׳� �Ű澲�� �ʽ��ϴ�.
	colorAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;

	//VK_ATTACHMENT_STORE_OP_STORE: �׷��� �������� �޸𸮿� �����ϰ�, ���߿� ������ �ְ��մϴ�.
	//VK_ATTACHMENT_STORE_OP_DONT_CARE : �׳� �ϵ��� �˾Ƽ� �ϰ� �մϴ�.
	colorAttachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;

	colorAttachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
	colorAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;

	colorAttachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;

	//VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL: �̹����� �÷�÷�ι�ó�� ����մϴ�.
	//VK_IMAGE_LAYOUT_PRESENT_SRC_KHR : ����ü�ο��� ���� �̹��� 
	//VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL : �̹����� �޸� ī�ǿ� ����մϴ�.
	colorAttachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;

	VkAttachmentReference colorAttachmentRef = {};
	colorAttachmentRef.attachment = 0;
	colorAttachmentRef.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

	VkAttachmentDescription depthAttachment = {};
	depthAttachment.format = findDepthFormat();
	depthAttachment.samples = VK_SAMPLE_COUNT_1_BIT;
	depthAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
	depthAttachment.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
	depthAttachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
	depthAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
	depthAttachment.initialLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
	depthAttachment.finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

	VkAttachmentReference depthAttachmentRef = {};
	depthAttachmentRef.attachment = 1;
	depthAttachmentRef.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

	VkSubpassDescription subPass = {};
	subPass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
	subPass.colorAttachmentCount = 1;
	subPass.pColorAttachments = &colorAttachmentRef;
	subPass.pDepthStencilAttachment = &depthAttachmentRef;
	//�����н��� ��Ÿ �з�����
	//pInputAttachments: ���̴����� ���� ����ġ
	//pResolveAttachments : ��Ƽ���ø����� ����� �÷� ����ġ��
	//pDepthStencilAttachment : ���� �� ���ٽ� ����Ÿ���� ���� ����ġ��
	//pPreserveAttachments : ���⼭ ������ ������ �����Ǿ�� �� ����ġ��


	// �����н� ������� �׷��� ����
	VkSubpassDependency dependency = {};
	dependency.srcSubpass = VK_SUBPASS_EXTERNAL;
	dependency.dstSubpass = 0;
	dependency.srcStageMask = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT;
	dependency.srcAccessMask = VK_ACCESS_MEMORY_READ_BIT;
	dependency.dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
	dependency.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
	
	// ���� �߰��� ����ġ��Ʈ�� �ΰ��� �þ���� �����������
	std::array<VkAttachmentDescription, 2> attachments = { colorAttachment, depthAttachment };
	VkRenderPassCreateInfo renderPassInfo = {};
	renderPassInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
	renderPassInfo.attachmentCount = attachments.size();
	renderPassInfo.pAttachments = attachments.data();
	renderPassInfo.subpassCount = 1;
	renderPassInfo.pSubpasses = &subPass;
	renderPassInfo.dependencyCount = 1;
	renderPassInfo.pDependencies = &dependency;

	if (vkCreateRenderPass(device, &renderPassInfo, nullptr, renderPass.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create render pass!");
	}
}

void VulkanRenderer::CreateDescriptorSetLayout()
{
	VkDescriptorSetLayoutBinding uboLayoutBinding = {};
	uboLayoutBinding.binding = 0;

	//VK_DESCRIPTOR_TYPE_SAMPLER = 0,
	//VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER = 1,
	//VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE = 2,
	//VK_DESCRIPTOR_TYPE_STORAGE_IMAGE = 3,
	//VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER = 4,
	//VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER = 5,
	//VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER = 6,
	//VK_DESCRIPTOR_TYPE_STORAGE_BUFFER = 7,
	//VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC = 8,
	//VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC = 9,
	//VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT = 10,
	//VK_DESCRIPTOR_TYPE_BEGIN_RANGE = VK_DESCRIPTOR_TYPE_SAMPLER,
	//VK_DESCRIPTOR_TYPE_END_RANGE = VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT,

	uboLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER; // ������ ���� ���ε�
	uboLayoutBinding.descriptorCount = 1; // �츮�� MVP�� �ϳ��� ������ ���۸� ���ε��ϴ�, �ϳ��� ���ε� �ϴ� �ɷ�

	//VK_SHADER_STAGE_VERTEX_BIT = 0x00000001,
	//VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT = 0x00000002,
	//VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT = 0x00000004,
	//VK_SHADER_STAGE_GEOMETRY_BIT = 0x00000008,
	//VK_SHADER_STAGE_FRAGMENT_BIT = 0x00000010,
	//VK_SHADER_STAGE_COMPUTE_BIT = 0x00000020,
	//VK_SHADER_STAGE_ALL_GRAPHICS = 0x0000001F,
	//VK_SHADER_STAGE_ALL = 0x7FFFFFFF,
	uboLayoutBinding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;

	uboLayoutBinding.pImmutableSamplers = nullptr; // Optional, �̹��� ���ø����� 
												   
	// ���÷� ���̾ƿ�ó��
	VkDescriptorSetLayoutBinding samplerLayoutBinding = {};
	samplerLayoutBinding.binding = 1;
	samplerLayoutBinding.descriptorCount = 1;
	samplerLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
	samplerLayoutBinding.pImmutableSamplers = nullptr;
	samplerLayoutBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

	std::array<VkDescriptorSetLayoutBinding, 2> bindings = { uboLayoutBinding, samplerLayoutBinding };

	/*VkDescriptorSetLayoutCreateInfo layoutInfo = {};
	layoutInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
	layoutInfo.bindingCount = 1;
	layoutInfo.pBindings = &uboLayoutBinding;*/

	VkDescriptorSetLayoutCreateInfo layoutInfo = {};
	layoutInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
	layoutInfo.bindingCount = bindings.size();
	layoutInfo.pBindings = bindings.data();

	if (vkCreateDescriptorSetLayout(device, &layoutInfo, nullptr, descriptorSetLayout.replace()) != VK_SUCCESS) {
		throw std::runtime_error("failed to create descriptor set layout!");
	}
}

void VulkanRenderer::CreateDescriptorSet()
{
	VkDescriptorSetLayout layouts[] = { descriptorSetLayout };
	VkDescriptorSetAllocateInfo allocInfo = {};
	allocInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
	allocInfo.descriptorPool = descriptorPool;
	allocInfo.descriptorSetCount = 1;
	allocInfo.pSetLayouts = layouts;

	if (vkAllocateDescriptorSets(device, &allocInfo, &descriptorSet) != VK_SUCCESS) {
		throw std::runtime_error("failed to allocate descriptor set!");
	}

	VkDescriptorBufferInfo bufferInfo = {};
	bufferInfo.buffer = uniformBuffer;
	bufferInfo.offset = 0;
	bufferInfo.range = sizeof(UniformBufferObject);

	VkDescriptorImageInfo imageInfo = {};
	imageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
	imageInfo.imageView = textureImageView;
	imageInfo.sampler = textureSampler;

	//VkWriteDescriptorSet descriptorWrite = {};
	//descriptorWrite.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
	//descriptorWrite.dstSet = descriptorSet;
	//descriptorWrite.dstBinding = 0;
	//descriptorWrite.dstArrayElement = 0;
	//descriptorWrite.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
	//descriptorWrite.descriptorCount = 1; // �ϴ� �ϳ�
	//descriptorWrite.pBufferInfo = &bufferInfo;
	//descriptorWrite.pImageInfo = nullptr; // Optional ��ũ���Ͱ� �̹��� ����Ÿ�� ���� �Ҷ� ��
	//descriptorWrite.pTexelBufferView = nullptr; // Optional ��ũ���Ͱ� ���ۺ並 ���� ��

	std::array<VkWriteDescriptorSet, 2> descriptorWrites = {};

	descriptorWrites[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
	descriptorWrites[0].dstSet = descriptorSet;
	descriptorWrites[0].dstBinding = 0;
	descriptorWrites[0].dstArrayElement = 0;
	descriptorWrites[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
	descriptorWrites[0].descriptorCount = 1;
	descriptorWrites[0].pBufferInfo = &bufferInfo;

	descriptorWrites[1].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
	descriptorWrites[1].dstSet = descriptorSet;
	descriptorWrites[1].dstBinding = 1;
	descriptorWrites[1].dstArrayElement = 0;
	descriptorWrites[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
	descriptorWrites[1].descriptorCount = 1;
	descriptorWrites[1].pImageInfo = &imageInfo;

	vkUpdateDescriptorSets(device, descriptorWrites.size(), descriptorWrites.data(), 0, nullptr);
}

void VulkanRenderer::CreateDescriptorPool()
{
	//VkDescriptorPoolSize poolSize = {};
	//poolSize.type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
	//poolSize.descriptorCount = 1;

	//VkDescriptorPoolCreateInfo poolInfo = {};
	//poolInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
	//poolInfo.poolSizeCount = 1;
	//poolInfo.pPoolSizes = &poolSize;

	//poolInfo.maxSets = 1;

	std::array<VkDescriptorPoolSize, 2> poolSizes = {};
	poolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
	poolSizes[0].descriptorCount = 1;
	poolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
	poolSizes[1].descriptorCount = 1;

	VkDescriptorPoolCreateInfo poolInfo = {};
	poolInfo.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
	poolInfo.poolSizeCount = poolSizes.size();
	poolInfo.pPoolSizes = poolSizes.data();
	poolInfo.maxSets = 1;

	if (vkCreateDescriptorPool(device, &poolInfo, nullptr, descriptorPool.replace()) != VK_SUCCESS) {
		throw std::runtime_error("failed to create descriptor pool!");
	}
}

void VulkanRenderer::CreateFrameBuffer()
{
	swapChainFrameBuffer.resize(swapChainImageViews.size(), VDeleter<VkFramebuffer>{device, vkDestroyFramebuffer});
	for (size_t i = 0; i < swapChainImageViews.size(); ++i)
	{
		std::array<VkImageView, 2> attachments = {
			swapChainImageViews[i],
			depthImageView
		};

		VkFramebufferCreateInfo framebufferInfo = {};
		framebufferInfo.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
		// �����н��� ����ġ��Ʈ�� ������ ������ ����ġ��Ʈ�� ������ �Ѵ�.
		framebufferInfo.renderPass = renderPass;
		// �̹��� ���� ���� �� �̹����� ���
		framebufferInfo.attachmentCount = attachments.size();
		framebufferInfo.pAttachments = attachments.data();
		// ���� ����ü�� �̹����� �ϳ��̹Ƿ�, ���̾�� 1
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
	
	// Ŀ�ǵ� ���۴� �׷��� �� ���������̼� ťó�� �ѹ��� ó���˴ϴ�.
	// ������ Ŀ�ǵ� Ǯ�� �ϳ��� Ŀ�ǵ� ���۸� �Ҵ��Ҽ� �ְ�, �Ѱ��� Ÿ���� ť�� �����Ҽ� �ֽ��ϴ�.
	VkCommandPoolCreateInfo poolInfo = {};
	poolInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
	poolInfo.queueFamilyIndex = queueFamiltyIndices.graphicFamily;
	
	//VK_COMMAND_POOL_CREATE_TRANSIENT_BIT: 
	//Hint that command buffers are rerecorded with new commands very often(may change memory allocation behavior)
	//Ŀ�ǵ� ���۰� ���� ���� ���̶��(�޸� ������̼� ���浵 ���Եɼ� ����)��� ��Ʈ�� �ݴϴ�.
	//VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT
	//Allow command buffers to be rerecorded individually, without this flag they all have to be reset together
	//Ŀ�ǵ� ���۰� ���� ������ �ɼ� �ְ� ����մϴ�. �� �÷��װ� ���� �ÿ� ��� �Բ� ����ó���Ǿ�� �մϴ�.
	poolInfo.flags = 0;

	if (vkCreateCommandPool(device, &poolInfo, nullptr, commandPool.replace()) != VK_SUCCESS)
	{
		throw std::runtime_error("failed to create command pool");
	}
}


#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h> 

void VulkanRenderer::CreateDepthResources()
{
	//VK_FORMAT_D32_SFLOAT: 32 - bit float for depth
	//VK_FORMAT_D32_SFLOAT_S8_UINT : 32 - bit signed float for depth and 8 bit stencil component
	//VK_FORMAT_D24_UNORM_S8_UINT : 24 - bit float for depth and 8 bit stencil component
	VkFormat depthFormat = findDepthFormat();
	CreateImage(swapChainExtent.width, swapChainExtent.height, depthFormat, VK_IMAGE_TILING_OPTIMAL, VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, depthImage, depthImageMemory);
	CreateImageView(depthImage, depthFormat, VK_IMAGE_ASPECT_DEPTH_BIT, depthImageView);

	
	TransitionImageLayout(depthImage, depthFormat, VK_IMAGE_LAYOUT_UNDEFINED, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);
	
}

// stb �̹��� ���̺귯��
void VulkanRenderer::CreateTextureImage()
{
	int texWidth, texHeight, texChannels;
	stbi_uc* pixels = stbi_load(ModelTute.GetTexturePath().c_str(), &texWidth, &texHeight, &texChannels, STBI_rgb_alpha);
	//stbi_uc* pixels = stbi_load("../../../Resource/Texture/BumpTest_01_Diff.tga", &texWidth, &texHeight, &texChannels, STBI_rgb_alpha);
	VkDeviceSize imageSize = texWidth * texHeight * 4;

	if (!pixels) {
		throw std::runtime_error("failed to load texture image!");
	}

	VDeleter<VkImage> stagingImage{ device, vkDestroyImage }; // ������¡ ����ó��
	VDeleter<VkDeviceMemory> stagingImageMemory{ device, vkFreeMemory };

	CreateImage(texWidth, texHeight, 
		VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_TILING_LINEAR, VK_IMAGE_USAGE_TRANSFER_SRC_BIT, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, 
		stagingImage, stagingImageMemory);

	VkImageSubresource subresource = {};
	subresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
	subresource.mipLevel = 0;
	subresource.arrayLayer = 0;

	VkSubresourceLayout stagingImageLayout;
	vkGetImageSubresourceLayout(device, stagingImage, &subresource, &stagingImageLayout);

	void* data;
	vkMapMemory(device, stagingImageMemory, 0, imageSize, 0, &data);

	// ��ī�Ǹ� ���� ���ϹǷ� �е� ó��
	if (stagingImageLayout.rowPitch == texWidth * 4) 
	{
		memcpy(data, pixels, (size_t)imageSize);
	}
	else 
	{
		// 2�� ����� �ƴҶ� �е� ó��
		uint8_t* dataBytes = reinterpret_cast<uint8_t*>(data);

		for (int y = 0; y < texHeight; y++) {
			memcpy(
				&dataBytes[y * stagingImageLayout.rowPitch],
				&pixels[y * texWidth * 4],
				texWidth * 4
			);
		}
	}

	vkUnmapMemory(device, stagingImageMemory);
	stbi_image_free(pixels); // �ҷ���ģ���� �������ش�

	// ���� �̹����� �����.
	CreateImage(texWidth, texHeight, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_TILING_OPTIMAL, VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, textureImage, textureImageMemory);
	//Transition the staging image to VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL
	//Transition the texture image to VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL
	//Execute the image copy operation

	// ī���� ������ �˰� ���� �ʰ� �Ű浵 �Ⱦ��� ���̾ƿ��� Preinitialized�� undefined �Ѵ� ��� ����.
	TransitionImageLayout(stagingImage, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_LAYOUT_PREINITIALIZED, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
	TransitionImageLayout(textureImage, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_LAYOUT_PREINITIALIZED, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
	CopyImage(stagingImage, textureImage, texWidth, texHeight);

	TransitionImageLayout(textureImage, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);

}
#undef STB_IMAGE_IMPLEMENTATION

void VulkanRenderer::CreateTextureImageView()
{
	// �������� �̹����� �ʿ���
	CreateImageView(textureImage, VK_FORMAT_R8G8B8A8_UNORM, VK_IMAGE_ASPECT_COLOR_BIT,textureImageView);
}

void VulkanRenderer::CreateTextureSampler()
{
	VkSamplerCreateInfo samplerInfo = {};
	samplerInfo.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
	samplerInfo.magFilter = VK_FILTER_LINEAR; // Ȯ��� ����
	samplerInfo.minFilter = VK_FILTER_LINEAR; // ��ҽ� ����

	//VK_SAMPLER_ADDRESS_MODE_REPEAT: �Ϲ����� �ݺ�.
	//VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT : �̷� �ݺ�.
	//VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE : ������ �÷��� Ŭ����.
	//VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE : �ݴ��� �÷��� Ŭ����.
	//VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER : �ָ��� ��� �÷��� Ŭ����.

	samplerInfo.addressModeU = VK_SAMPLER_ADDRESS_MODE_REPEAT;
	samplerInfo.addressModeV = VK_SAMPLER_ADDRESS_MODE_REPEAT;
	samplerInfo.addressModeW = VK_SAMPLER_ADDRESS_MODE_REPEAT;

	samplerInfo.anisotropyEnable = VK_TRUE; // �ƴϼ� Ʈ���� ���ø��� ų������
	samplerInfo.maxAnisotropy = 16; // �ִ� �ƴϼ� Ʈ���� ���ü�

	samplerInfo.borderColor = VK_BORDER_COLOR_INT_OPAQUE_BLACK; // ��� ��
	samplerInfo.unnormalizedCoordinates = VK_FALSE; // UV ��ǥ�� ���ȭ ���� ���� ������
	samplerInfo.compareEnable = VK_FALSE; // �� �ɼ�
	samplerInfo.compareOp = VK_COMPARE_OP_ALWAYS; // �׻� ������ �� �ɼ��� ������������ ���� ���� ����

	samplerInfo.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR; // �Ӹ� ���
	samplerInfo.mipLodBias = 0.0f;
	samplerInfo.minLod = 0.0f;
	samplerInfo.maxLod = 0.0f;

	if (vkCreateSampler(device, &samplerInfo, nullptr, textureSampler.replace()) != VK_SUCCESS) {
		throw std::runtime_error("failed to create texture sampler!");
	}
}


void VulkanRenderer::CreateCommandBuffers()
{
	commandBuffers.resize(swapChainFrameBuffer.size());
	// vkFreeCommandBuffers�� ��� Ŀ�ǵ� Ǯ���� �ʱ�ȭ �մϴ�.

	VkCommandBufferAllocateInfo allocInfo = {};
	allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
	allocInfo.commandPool = commandPool;
	//VK_COMMAND_BUFFER_LEVEL_PRIMARY: 
	// ���� ������ ť�� ����� �� �����ϴ�. ������ �ٸ� Ŀ�ǵ� ���ۿ��� �θ����� �����ϴ�.
	//VK_COMMAND_BUFFER_LEVEL_SECONDARY 
	// ���� �����Ҽ��� ������, �� Ŀ�ǵ� ���ۿ��� ȣ�� �Ҽ� �ֽ��ϴ�.
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
		//Ŀ�ǵ� ���۰� ���۵� ���� �ٷ� ��ȭ�ϱ� �����մϴ�.
		//VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT 
		//This is a secondary command buffer that will be entirely within a single render pass.
		//�̱� �����н��� ���Ǵ� �ι�° Ŀ�ǵ� �����Դϴ�.
		//VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT
		//The command buffer can be resubmitted while it is also already pending execution.
		//�� Ŀ�ǵ� ���۴� ���� ����߿��� �ٽ� ����ɼ� �ֽ��ϴ�.
		beginInfo.flags = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
		// �ι�° ���ۿ͸� �����Ǿ��ֽ��ϴ�. �� ���ۿ��� �θ��� �����̵带 ��üȭ�մϴ�.
		beginInfo.pInheritanceInfo = nullptr;//optional

		// ���� ���۰� �̹� ��ȭ�Ǿ� �ִٸ�, ���������� �����մϴ�.
		vkBeginCommandBuffer(commandBuffers[i], &beginInfo);

		VkRenderPassBeginInfo renderPassInfo = {};
		renderPassInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
		renderPassInfo.renderPass = renderPass;
		renderPassInfo.framebuffer = swapChainFrameBuffer[i];
		renderPassInfo.renderArea.offset = {0,0};
		renderPassInfo.renderArea.extent = swapChainExtent;

		// ���������� Ŭ����
		// VK_ATTACHMENT_LOAD_OP_CLEAR���� ���� ��
		std::array<VkClearValue, 2> clearValues = {};
		clearValues[0].color = { 0.0f, 0.5f, 0.5f, 1.0f };
		clearValues[1].depthStencil = { 1.0f, 0 };
		renderPassInfo.clearValueCount = clearValues.size();
		renderPassInfo.pClearValues = clearValues.data(); 
		//VK_SUBPASS_CONTENTS_INLINE: 
		//The render pass commands will be embedded in the primary command buffer itself and no secondary command buffers will be executed.
		//2�� ���۸� ������� �ʰ� �ֹ��۸� ����
		//VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS : The render pass commands will be executed from secondary command buffers.
		//�����н��� 2�� ���ۿ��� �����
		vkCmdBeginRenderPass(commandBuffers[i], &renderPassInfo, VK_SUBPASS_CONTENTS_INLINE);

			vkCmdBindPipeline(commandBuffers[i], VK_PIPELINE_BIND_POINT_GRAPHICS, graphicsPipeline);

			if (VertexNum > 0)
			{
				VkBuffer vertexBuffers[] = { VertexBuffer };
				VkDeviceSize offsets[] = { 0 };
				vkCmdBindVertexBuffers(commandBuffers[i], 0, 1, vertexBuffers, offsets);
			}		
			//vertexCount, ���ؽ� ����¥�� �ﰢ���� �׸��Ƿ�..
			//instanceCount, �ν�ź�� �������� ���� �ʴ´�.
			//firstVertex, // ���ؽ� ���ۿ����� ������
			//firstIntance // �ν�ź�� ������������ ������
		
			//vkCmdBindIndexBuffer(commandBuffers[i], IndexBuffer, 0, VK_INDEX_TYPE_UINT16);
			vkCmdBindIndexBuffer(commandBuffers[i], IndexBuffer, 0, VK_INDEX_TYPE_UINT32);

			vkCmdBindDescriptorSets(commandBuffers[i], VK_PIPELINE_BIND_POINT_GRAPHICS, pipelineLayout, 0, 1, &descriptorSet, 0, nullptr);

			vkCmdDrawIndexed(commandBuffers[i], ModelTute.GetIndices().size(), 1, 0, 0, 0);

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
	// ������¡ ����
	// ���ؽ� ������ ��쿡 CPU���� ���� �Ҽ� �ֱ� ������ ����ȭ �Ǿ��ִ� ���۰� �ƴϴ�.
	// ���� CPU���� �������� ���ϵ��� VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT�� �÷��׸� ���� ���۸� �����.
	// �޸� Ʈ������ (�޸� ��ȯ)�� ���ؼ��� VK_QUEUE_TRANSFER_BIT�� �����ϴ� �йи� ť�� �־�� �ϰ�,
	// ������ VK_QUEUE_GRAPHICS_BIT�� VK_QUEUE_COMPUTE_BIT�� �Ϲ������� VK_QUEUE_TRANSFER_BIT�� �����Ѵ�.

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

inline VkCommandBuffer VulkanRenderer::BeginSingleTimeCommands() {
	VkCommandBufferAllocateInfo allocInfo = {};
	allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
	allocInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
	allocInfo.commandPool = commandPool;
	allocInfo.commandBufferCount = 1;

	VkCommandBuffer commandBuffer;
	vkAllocateCommandBuffers(device, &allocInfo, &commandBuffer);

	VkCommandBufferBeginInfo beginInfo = {};
	beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
	beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;

	vkBeginCommandBuffer(commandBuffer, &beginInfo);

	return commandBuffer;
}

void VulkanRenderer::CreateVertexBuffer(const std::vector<Vertex>& InVertex)
{
	VertexNum = 0;

	VkDeviceSize bufferSize = sizeof(InVertex[0]) * InVertex.size();
	VDeleter<VkBuffer> stagingBuffer{ device, vkDestroyBuffer };
	VDeleter<VkDeviceMemory> stagingBufferMemory{ device, vkFreeMemory };
	
	//VK_BUFFER_USAGE_TRANSFER_SRC_BIT: �޸� Ʈ������ �۾����� �ҽ��� �ɼ� �ִ� ����
	//VK_BUFFER_USAGE_TRANSFER_DST_BIT: �޸� Ʈ������ �۾����� �������� �ɼ� �ִ� ����

	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, stagingBuffer, stagingBufferMemory);

	void* data;
	vkMapMemory(device, stagingBufferMemory	, 0, bufferSize, 0, &data);
	memcpy(data, InVertex.data(), bufferSize);
	vkUnmapMemory(device, stagingBufferMemory);

	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, VertexBuffer, VertexBufferMemory);
	CopyBuffer(stagingBuffer, VertexBuffer, bufferSize);

	VertexNum = (uint32_t)InVertex.size();
}

void VulkanRenderer::CreateIndexBuffer(const std::vector<uint16_t>& InIndices)
{
	VkDeviceSize bufferSize = sizeof(InIndices[0]) * InIndices.size();

	VDeleter<VkBuffer> stagingBuffer{ device, vkDestroyBuffer };
	VDeleter<VkDeviceMemory> stagingBufferMemory{ device, vkFreeMemory };
	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, stagingBuffer, stagingBufferMemory);

	void* data;
	vkMapMemory(device, stagingBufferMemory, 0, bufferSize, 0, &data);
	memcpy(data, InIndices.data(), (size_t)bufferSize);
	vkUnmapMemory(device, stagingBufferMemory);

	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, IndexBuffer, IndexBufferMemory);

	CopyBuffer(stagingBuffer, IndexBuffer, bufferSize);
}

void VulkanRenderer::CreateIndexBuffer(const std::vector<uint32_t>& InIndices)
{
	VkDeviceSize bufferSize = sizeof(InIndices[0]) * InIndices.size();

	VDeleter<VkBuffer> stagingBuffer{ device, vkDestroyBuffer };
	VDeleter<VkDeviceMemory> stagingBufferMemory{ device, vkFreeMemory };
	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, stagingBuffer, stagingBufferMemory);

	void* data;
	vkMapMemory(device, stagingBufferMemory, 0, bufferSize, 0, &data);
	memcpy(data, InIndices.data(), (size_t)bufferSize);
	vkUnmapMemory(device, stagingBufferMemory);

	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, IndexBuffer, IndexBufferMemory);

	CopyBuffer(stagingBuffer, IndexBuffer, bufferSize);
}

void VulkanRenderer::CreateUniformBuffer(const UniformBufferObject & InObject)
{
	VkDeviceSize bufferSize = sizeof(UniformBufferObject);

	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_SRC_BIT, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, uniformStagingBuffer, uniformStagingBufferMemory);
	CreateBuffer(bufferSize, VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, uniformBuffer, uniformBufferMemory);

}

void VulkanRenderer::CreateImage(uint32_t width, uint32_t height, VkFormat format, VkImageTiling tiling, VkImageUsageFlags usage, VkMemoryPropertyFlags properties, VDeleter<VkImage>& image, VDeleter<VkDeviceMemory>& imageMemory)
{
	VkImageCreateInfo imageInfo = {};
	imageInfo.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
	imageInfo.imageType = VK_IMAGE_TYPE_2D;
	imageInfo.extent.width = width;
	imageInfo.extent.height = height;
	imageInfo.extent.depth = 1;
	imageInfo.mipLevels = 1;
	imageInfo.arrayLayers = 1;
	imageInfo.format = format;
	imageInfo.tiling = tiling;
	imageInfo.initialLayout = VK_IMAGE_LAYOUT_PREINITIALIZED;
	imageInfo.usage = usage;
	imageInfo.samples = VK_SAMPLE_COUNT_1_BIT;
	imageInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;

	if (vkCreateImage(device, &imageInfo, nullptr, image.replace()) != VK_SUCCESS) {
		throw std::runtime_error("failed to create image!");
	}

	VkMemoryRequirements memRequirements;
	vkGetImageMemoryRequirements(device, image, &memRequirements);

	VkMemoryAllocateInfo allocInfo = {};
	allocInfo.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
	allocInfo.allocationSize = memRequirements.size;
	allocInfo.memoryTypeIndex = findMemoryType(memRequirements.memoryTypeBits, properties);

	if (vkAllocateMemory(device, &allocInfo, nullptr, imageMemory.replace()) != VK_SUCCESS) {
		throw std::runtime_error("failed to allocate image memory!");
	}

	vkBindImageMemory(device, image, imageMemory, 0);
}

void VulkanRenderer::CreateImageView(VkImage image, VkFormat format, VkImageAspectFlags aspectFlags, VDeleter<VkImageView>& imageView)
{
	VkImageViewCreateInfo viewInfo = {};
	viewInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
	viewInfo.image = image;
	viewInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
	viewInfo.format = format;
	viewInfo.subresourceRange.aspectMask = aspectFlags;
	viewInfo.subresourceRange.baseMipLevel = 0;
	viewInfo.subresourceRange.levelCount = 1;
	viewInfo.subresourceRange.baseArrayLayer = 0;
	viewInfo.subresourceRange.layerCount = 1;

	if (vkCreateImageView(device, &viewInfo, nullptr, imageView.replace()) != VK_SUCCESS) {
		throw std::runtime_error("failed to create texture image view!");
	}
}

//void VulkanRenderer::CopyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, VkDeviceSize size)
//{
//	VkCommandBufferAllocateInfo allocInfo = {};
//	allocInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
//	allocInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
//	allocInfo.commandPool = commandPool;
//	allocInfo.commandBufferCount = 1;
//
//	VkCommandBuffer commandBuffer;
//	vkAllocateCommandBuffers(device, &allocInfo, &commandBuffer);
//
//	VkCommandBufferBeginInfo beginInfo = {};
//	beginInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
//	beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT; // �ѹ��� �����Ѵٴ� �̾߱�
//	vkBeginCommandBuffer(commandBuffer, &beginInfo);
//
//	VkBufferCopy copyRegion = {};
//	copyRegion.srcOffset = 0; // Optional
//	copyRegion.dstOffset = 0; // Optional
//	copyRegion.size = size;
//	vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, 1, &copyRegion);
//
//	vkEndCommandBuffer(commandBuffer);
//
//	VkSubmitInfo submitInfo = {};
//	submitInfo.sType = VK_STRUCTURE_TYPE_SUBMIT_INFO;
//	submitInfo.commandBufferCount = 1;
//	submitInfo.pCommandBuffers = &commandBuffer;
//
//	vkQueueSubmit(graphicQueue, 1, &submitInfo, VK_NULL_HANDLE);
//	vkQueueWaitIdle(graphicQueue);
//
//	vkFreeCommandBuffers(device, commandPool, 1, &commandBuffer);
//}

void VulkanRenderer::TransitionImageLayout(VkImage image, VkFormat format, VkImageLayout oldLayout, VkImageLayout newLayout)
{
	VkCommandBuffer commandBuffer = BeginSingleTimeCommands();
	VkImageMemoryBarrier barrier = {}; // �޸� �踮� ���ְ� ����
	barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
	barrier.oldLayout = oldLayout;
	barrier.newLayout = newLayout;
	// �йи� �ε����� ��������� �Ѵ�.
	barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
	barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;

	barrier.image = image;
	barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
	barrier.subresourceRange.baseMipLevel = 0;
	barrier.subresourceRange.levelCount = 1;
	barrier.subresourceRange.baseArrayLayer = 0;
	barrier.subresourceRange.layerCount = 1;

	if (newLayout == VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL) {
		barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;

		if (HasStencilComponent(format)) {
			barrier.subresourceRange.aspectMask |= VK_IMAGE_ASPECT_STENCIL_BIT;
		}
	}
	else {
		barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
	}

	// Validation Level���� �ʿ��ϴ�
	if (oldLayout == VK_IMAGE_LAYOUT_PREINITIALIZED && newLayout == VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL) {
		barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
		barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
	}
	else if (oldLayout == VK_IMAGE_LAYOUT_PREINITIALIZED && newLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL) {
		barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
		barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
	}
	else if (oldLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL && newLayout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
		barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
		barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
	}
	else if (oldLayout == VK_IMAGE_LAYOUT_UNDEFINED && newLayout == VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL) {
		barrier.srcAccessMask = 0;
		barrier.dstAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
	}
	else {
		throw std::invalid_argument("unsupported layout transition!");
	}

	// �踮� �����ش�.
	vkCmdPipelineBarrier(
		commandBuffer,
		VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
		0,
		0, nullptr,
		0, nullptr,
		1, &barrier
	);
	EndSingleTimeCommands(commandBuffer);
}

void VulkanRenderer::CopyImage(VkImage srcImage, VkImage dstImage, uint32_t width, uint32_t height)
{
	VkCommandBuffer commandBuffer = BeginSingleTimeCommands();

	VkImageSubresourceLayers subResource = {};
	subResource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
	subResource.baseArrayLayer = 0;
	subResource.mipLevel = 0;
	subResource.layerCount = 1;

	VkImageCopy region = {};
	region.srcSubresource = subResource;
	region.dstSubresource = subResource;
	region.srcOffset = { 0, 0, 0 };
	region.dstOffset = { 0, 0, 0 };
	region.extent.width = width;
	region.extent.height = height;
	region.extent.depth = 1;

	vkCmdCopyImage(
		commandBuffer,
		srcImage, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
		dstImage, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
		1, &region
	);

	EndSingleTimeCommands(commandBuffer);
}

void VulkanRenderer::DrawFrame()
{
	uint32_t imageIndex;
	// ����̽��� ���� ����ü�� �̹����� �����´�.
	// ����° �з����Ͱ� Ÿ�Ӿƿ� �ð�
	// imageAvailable ������� ���⼭ ���
	// ��� ������ �̹��� �ε����� ������ �з�����
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

	//�������� ��üȭ � ������������ �������� ��ٸ� ó���� �Ұ��� �����ش�.
	VkSemaphore waitSemaphores[] = { imageAvailableSemaphore };
	VkPipelineStageFlags waitStages[] = { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
	submitInfo.waitSemaphoreCount = 1;
	submitInfo.pWaitSemaphores = waitSemaphores;
	submitInfo.pWaitDstStageMask = waitStages;
	
	// ���� ������ Ŀ�ǵ� ����
	submitInfo.commandBufferCount = 1;
	submitInfo.pCommandBuffers = &commandBuffers[imageIndex];

	// �����Ϸ� �������� ����
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
	CreateDepthResources();
	CreateFrameBuffer();
	CreateCommandPool();
	CreateCommandBuffers();
}

inline void VulkanRenderer::UpdateUniformBuffer()
{
	static auto startTime = std::chrono::high_resolution_clock::now();

	auto currentTime = std::chrono::high_resolution_clock::now();
	float time = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count() / 1000.0f; // Ÿ��üũ

	UniformBufferObject ubo = {};

	// matrix, angle, vector
	ubo.model = glm::rotate(glm::mat4(), time * glm::radians(90.0f), glm::vec3(0.0f, 0.0f, 1.0f));
	
	// eye, center, up
	ubo.view = glm::lookAt(glm::vec3(2.0f, 2.0f, 2.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 0.0f, 1.0f));

	//fovy, aspect, zNear, zFar
	ubo.proj = glm::perspective(glm::radians(45.0f), swapChainExtent.width/ (float)swapChainExtent.height, 0.1f, 10.0f);

	// GLM�� OpenGL�� �߽����� ������ �Ǿ��ְ�, Y���� �������� �ִ�.
	ubo.proj[1][1] *= -1;

	void* data;
	vkMapMemory(device, uniformStagingBufferMemory, 0, sizeof(ubo), 0, &data);
	memcpy(data, &ubo, sizeof(ubo));
	vkUnmapMemory(device, uniformStagingBufferMemory);

	CopyBuffer(uniformStagingBuffer, uniformBuffer, sizeof(ubo));
}
