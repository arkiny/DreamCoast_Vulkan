#pragma once

// 디버그용 확장 콜백을 만들기 위한 함수

extern VkResult CreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT* pCreateInfo,
	const VkAllocationCallbacks* pAllocator, VkDebugReportCallbackEXT* pCallback);

extern void DestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator);

// 불칸에서는 모든 명령이 큐로 이루지고 이런 다른 타입들의 큐는 각각의 큐패밀리들에 들어있습니다.
struct QueueFamilyIndices
{
	int graphicFamily = -1;
	int presentFamily = -1;

	bool isComplete()
	{
		return graphicFamily >= 0 && presentFamily >= 0;
	}
};

// 스왑체인 지원을 어디까지 해주는지 확인하기 위한 구조체
struct SwapChainSupportDetails
{
	VkSurfaceCapabilitiesKHR capabilities;
	std::vector<VkSurfaceFormatKHR> formats;
	std::vector<VkPresentModeKHR> presentModes;
};

class Renderer
{
public:
	virtual void InitRenderer(GLFWwindow* InWindow) {};
	virtual void DrawFrame() {};
	virtual void WaitIdle() {};
	virtual void RecreateSwapChain() {};
};

class VulkanRenderer : public Renderer
{
public:
	VulkanRenderer();
	virtual ~VulkanRenderer();
	virtual void InitRenderer(GLFWwindow* InWindow) override;
	virtual void DrawFrame();
	virtual void WaitIdle();
	virtual void RecreateSwapChain();

public:
	void CreateVertexBuffer(const std::vector<Vertex>& InVertex);
	void CreateIndexBuffer(const std::vector<uint16_t>& InIndices);

	void CopyBuffer(VkBuffer srcBuffer, VkBuffer dstBuffer, VkDeviceSize size);

private:
	//creators
	bool CheckValidationLayerSupport();
	void CheckAvailableExtension();
	std::vector<const char*> GetRequiredExtensions();
	void CreateInstance();
	
	void SetupDebugCallback();

	void CreateSurface(GLFWwindow* InWindow);

	void PickPhysicalDevice();
	void CreateLogicalDevice();
	void CreateSwapChain();
	void CreateImageViews();
	void CreateRenderPass();
	void CreateGraphicsPipeLine();
	void CreateFrameBuffer();
	void CreateCommandPool();
	void CreateCommandBuffers();
	void CreateSemaphore();

	void CreateBuffer(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties, VDeleter<VkBuffer>& buffer, VDeleter<VkDeviceMemory>& bufferMemory);

	// helpers
	static VKAPI_ATTR VkBool32 VKAPI_CALL DebugCallback(VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objType,
		uint64_t obj, size_t location, int32_t code, const char* layerPrefix, const char* msg, void* userData);

	bool IsDeviceSuitable(VkPhysicalDevice device);
	bool CheckDeviceExtensionSupport(VkPhysicalDevice device);

	int RateDeviceSuitability(VkPhysicalDevice device);
	QueueFamilyIndices FindQueueFamilies(VkPhysicalDevice device);

	SwapChainSupportDetails QuerySwapChainSupport(VkPhysicalDevice device);
	VkSurfaceFormatKHR ChooseSwapSurfaceFormat(const std::vector<VkSurfaceFormatKHR>& availableFormats);
	VkPresentModeKHR ChooseSwapPresentMode(const std::vector<VkPresentModeKHR>& availablePresentModes);
	VkExtent2D ChooseSwapExtent(const VkSurfaceCapabilitiesKHR& capabilities);
	void CreateShaderModule(const std::vector<char>& code, VDeleter<VkShaderModule>& shaderModule);

	uint32_t findMemoryType(uint32_t typeFilter, VkMemoryPropertyFlags properties);

private:
	VDeleter<VkInstance> instance{ vkDestroyInstance }; // 불칸 인스탄스
	VDeleter<VkDebugReportCallbackEXT> callback{ instance, DestroyDebugReportCallbackEXT }; // 불칸 콜백 확장함수
	VDeleter<VkSurfaceKHR> surface{ instance, vkDestroySurfaceKHR }; // 서페이스, 출력될 이미지

	VkPhysicalDevice physicalDevice = VK_NULL_HANDLE; // 물리 디바이스 VkInstance가 부서질때 같이 부서진다
	VDeleter<VkDevice> device{ vkDestroyDevice };  //불칸 로지컬 디바이스
	
	VkQueue graphicQueue; // 그래픽 큐 역시 불칸 인스탄스가 파괴될때 같이 파괴된다.
	VkQueue presentQueue; // 프레젠트 큐

	VDeleter<VkSwapchainKHR> swapChain{ device, vkDestroySwapchainKHR };
	std::vector<VkImage> swapChainImages;
	VkFormat swapChainImageFormat; 
	VkExtent2D swapChainExtent;

	std::vector<VDeleter<VkImageView>> swapChainImageViews; // VkImage와는 다르게 직접 지워줘야 한다.

	VDeleter<VkShaderModule> vertShaderModule{ device, vkDestroyShaderModule };
	VDeleter<VkShaderModule> fragShaderModule{ device, vkDestroyShaderModule };

	VDeleter<VkPipelineLayout> pipelineLayout{ device, vkDestroyPipelineLayout };
	VDeleter<VkRenderPass> renderPass{device, vkDestroyRenderPass};

	VDeleter<VkPipeline> graphicsPipeline{ device, vkDestroyPipeline };

	std::vector<VDeleter<VkFramebuffer>> swapChainFrameBuffer;

	VDeleter<VkCommandPool> commandPool{ device, vkDestroyCommandPool };
	std::vector<VkCommandBuffer> commandBuffers;

	VDeleter<VkSemaphore> imageAvailableSemaphore{ device, vkDestroySemaphore };
	VDeleter<VkSemaphore> renderFinishedSemaphore{ device, vkDestroySemaphore };


	VDeleter<VkBuffer> VertexBuffer{device, vkDestroyBuffer};
	uint32_t VertexNum;
	VDeleter<VkDeviceMemory> VertexBufferMemory{ device, vkFreeMemory };

	VDeleter<VkBuffer> IndexBuffer{ device, vkDestroyBuffer };
	VDeleter<VkDeviceMemory> IndexBufferMemory{device, vkFreeMemory};
};