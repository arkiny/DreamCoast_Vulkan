#pragma once

class SystemSetting
{
public:
	static const int WIDTH = 800;
	static const int HEIGHT = 600;
	static std::vector<const char*> validationLayers;
	static std::vector<const char*> deviceExtensions;

#ifdef NDEBUG
	static const bool enableValidationLayers = false;
#else
	static const bool enableValidationLayers = true;
#endif
};