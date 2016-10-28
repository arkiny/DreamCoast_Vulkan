//Common Header For DreamCoast Vulkan Rendering Learning Example

// OpenGL과 Vulkan에서 사용하는 멀티플랫폼 윈도우 핸들러, GLFW_INCLUDE_VULKAN을 활성화 할시 vulkan.h도 인클루드 처리됩니다.
#define GLFW_INCLUDE_VULKAN
#include <GLFW\glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
// Vulkan은 더이상 내부에서 매트릭스등의 수학함수를 가지고 있지 않으므로 사용합니다.
#include <glm\vec4.hpp>
#include <glm\mat4x4.hpp>

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