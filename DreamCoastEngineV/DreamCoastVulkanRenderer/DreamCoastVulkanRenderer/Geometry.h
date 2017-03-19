#pragma once

struct Geometry
{
	const std::vector<Vertex> trianglevertices =
	{
		{ { 0.0f, -0.5f },{ 1.0f, 0.0f, 0.0f } },
		{ { 0.5f, 0.5f },{ 0.0f, 1.0f, 0.0f } },
		{ { -0.5f, 0.5f },{ 0.0f, 0.0f, 1.0f } }
	};

	// À­º¯ÀÌ ÇÏ¾é°Ô ³ª¿À´Â »ï°¢Çü
	//{ {0.0f, -0.5f}, { 1.0f, 1.0f, 1.0f }},
	//{ { 0.5f, 0.5f },{ 0.0f, 1.0f, 0.0f } },
	//{ { -0.5f, 0.5f },{ 0.0f, 0.0f, 1.0f } }

	Geometry()
	{
	}

	void SetVertexBuffer();
	
}; 