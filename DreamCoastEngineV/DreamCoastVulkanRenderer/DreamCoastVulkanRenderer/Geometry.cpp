#include "DcCommonHeader.h"
#include "Geometry.h"
#include "Renderer.h"

void Geometry::SetVertexBuffer()
{
	 VulkanRenderer::CreateVertexBuffer(GRenderer, vertices);
}
