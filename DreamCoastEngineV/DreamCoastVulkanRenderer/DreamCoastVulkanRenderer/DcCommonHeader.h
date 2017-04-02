//Common Header For DreamCoast Vulkan Rendering Learning Example

// OpenGL�� Vulkan���� ����ϴ� ��Ƽ�÷��� ������ �ڵ鷯, GLFW_INCLUDE_VULKAN�� Ȱ��ȭ �ҽ� vulkan.h�� ��Ŭ��� ó���˴ϴ�.
#define GLFW_INCLUDE_VULKAN
#include <GLFW\glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
// Vulkan�� ���̻� ���ο��� ��Ʈ�������� �����Լ��� ������ ���� �����Ƿ� ����մϴ�.
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtx\hash.hpp>

//#include <glm\vec4.hpp>
//#include <glm\mat4x4.hpp>

// std c, c++
#include <iostream>
#include <stdexcept>
#include <functional>
#include <vector>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>
#include <array>
#include <chrono>
#include <unordered_map>


// ������ ������, ���� ������ ���� �����Ѵ�.
template <typename T>
class VDeleter {
public:
	VDeleter() : VDeleter([](T, VkAllocationCallbacks*) {}) {}

	VDeleter(std::function<void(T, VkAllocationCallbacks*)> deletef)
	{
		this->deleter = [=](T obj) { deletef(obj, nullptr); };
	}

	VDeleter(const VDeleter<VkInstance>& instance, std::function<void(VkInstance, T, VkAllocationCallbacks*)> deletef)
	{
		this->deleter = [&instance, deletef](T obj) { deletef(instance, obj, nullptr); };
	}

	VDeleter(const VDeleter<VkDevice>& device, std::function<void(VkDevice, T, VkAllocationCallbacks*)> deletef)
	{
		this->deleter = [&device, deletef](T obj) { deletef(device, obj, nullptr); };
	}

	~VDeleter()
	{
		cleanup();
	}

	const T* operator &() const
	{
		return &object;
	}

	T* replace()
	{
		cleanup();
		return &object;
	}

	operator T() const
	{
		return object;
	}

	void operator=(T rhs)
	{
		if (rhs != object) {
			cleanup();
			object = rhs;
		}
	}

	template<typename V>
	bool operator==(V rhs)
	{
		return object == T(rhs);
	}

private:
	T object{ VK_NULL_HANDLE };
	std::function<void(T)> deleter;

	void cleanup() {
		if (object != VK_NULL_HANDLE) {
			deleter(object);
		}
		object = VK_NULL_HANDLE;
	}
};

//
#include "VertexElements.h"
#include "UniformBuffer.h"

extern class VulkanRenderer* GRenderer;