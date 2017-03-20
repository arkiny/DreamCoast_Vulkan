#include "DcCommonHeader.h"
#include "VertexElements.h"

VkVertexInputBindingDescription Vertex::getBindingDescription()
{
	//VK_VERTEX_INPUT_RATE_VERTEX: Move to the next data entry after each vertex
	//VK_VERTEX_INPUT_RATE_INSTANCE : Move to the next data entry after each instance

	VkVertexInputBindingDescription bindingDescrption = {};
	bindingDescrption.binding = 0;
	bindingDescrption.stride = sizeof(Vertex);
	bindingDescrption.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
	return bindingDescrption;
}

std::array<VkVertexInputAttributeDescription, 3> Vertex::getAttributeDescription()
{
	std::array<VkVertexInputAttributeDescription, 3> attributionDescription = {};
	attributionDescription[0].binding = 0;
	attributionDescription[0].location = 0;
	attributionDescription[0].format = VK_FORMAT_R32G32_SFLOAT;
	attributionDescription[0].offset = offsetof(Vertex, pos);

	attributionDescription[1].binding = 0;
	attributionDescription[1].location = 1;
	attributionDescription[1].format = VK_FORMAT_R32G32B32_SFLOAT;
	attributionDescription[1].offset = offsetof(Vertex, color);

	attributionDescription[2].binding = 0;
	attributionDescription[2].location = 2;
	attributionDescription[2].format = VK_FORMAT_R32G32_SFLOAT;
	attributionDescription[2].offset = offsetof(Vertex, texCoord);

	return attributionDescription;
}
