#pragma once

struct Geometry
{
	//const std::vector<Vertex> trianglevertices =
	//{
	//	{ { 0.0f, -0.5f },{ 1.0f, 0.0f, 0.0f } },
	//	{ { 0.5f, 0.5f },{ 0.0f, 1.0f, 0.0f } },
	//	{ { -0.5f, 0.5f },{ 0.0f, 0.0f, 1.0f } }
	//};

	//const std::vector<Vertex> QuadVertices =
	//{
	//	{ { -0.5f, -0.5f },{ 1.0f, 0.0f, 0.0f } },
	//	{ { 0.5f, -0.5f },{ 0.0f, 1.0f, 0.0f } },
	//	{ { 0.5f, 0.5f },{ 0.0f, 0.0f, 1.0f } },
	//	{ { -0.5f, 0.5f },{ 1.0f, 1.0f, 1.0f } }
	//};

	//const std::vector<Vertex> QuadVerticesWithUV = {
	//	{ { -0.5f, -0.5f },{ 1.0f, 0.0f, 0.0f },{ 0.0f, 0.0f } },
	//	{ { 0.5f, -0.5f },{ 0.0f, 1.0f, 0.0f },{ 1.0f, 0.0f } },
	//	{ { 0.5f, 0.5f },{ 0.0f, 0.0f, 1.0f },{ 1.0f, 1.0f } },
	//	{ { -0.5f, 0.5f },{ 1.0f, 1.0f, 1.0f },{ 0.0f, 1.0f } }
	//};



	//const std::vector<uint16_t> QuadIndices =
	//{
	//	0, 1, 2, 2, 3, 0
	//};


	//3D Double Vertex
	const std::vector<Vertex> ThreeDDoubleVerticesWithUV = {
		{ { -0.5f, -0.5f, 0.0f },{ 1.0f, 0.0f, 0.0f },{ 0.0f, 0.0f } },
		{ { 0.5f, -0.5f, 0.0f },{ 0.0f, 1.0f, 0.0f },{ 1.0f, 0.0f } },
		{ { 0.5f, 0.5f, 0.0f },{ 0.0f, 0.0f, 1.0f },{ 1.0f, 1.0f } },
		{ { -0.5f, 0.5f, 0.0f },{ 1.0f, 1.0f, 1.0f },{ 0.0f, 1.0f } },

		{ { -0.5f, -0.5f, -0.5f },{ 1.0f, 0.0f, 0.0f },{ 0.0f, 0.0f } },
		{ { 0.5f, -0.5f, -0.5f },{ 0.0f, 1.0f, 0.0f },{ 1.0f, 0.0f } },
		{ { 0.5f, 0.5f, -0.5f },{ 0.0f, 0.0f, 1.0f },{ 1.0f, 1.0f } },
		{ { -0.5f, 0.5f, -0.5f },{ 1.0f, 1.0f, 1.0f },{ 0.0f, 1.0f } }
	};

	const std::vector<uint16_t> ThreeDDoubleIndices = {
		0, 1, 2, 2, 3, 0,
		4, 5, 6, 6, 7, 4
	};


	// ������ �Ͼ�� ������ �ﰢ��
	//{ {0.0f, -0.5f}, { 1.0f, 1.0f, 1.0f }},
	//{ { 0.5f, 0.5f },{ 0.0f, 1.0f, 0.0f } },
	//{ { -0.5f, 0.5f },{ 0.0f, 0.0f, 1.0f } }

	Geometry()
	{
	}

	void SetVertexBuffer();
	
}; 