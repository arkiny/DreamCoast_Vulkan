#include "DcCommonHeader.h"
#include "SystemSetting.h"

std::vector<const char*> SystemSetting::validationLayers = 
{
	"VK_LAYER_LUNARG_standard_validation"
};

std::vector<const char*> SystemSetting::deviceExtensions = 
{
	VK_KHR_SWAPCHAIN_EXTENSION_NAME
};