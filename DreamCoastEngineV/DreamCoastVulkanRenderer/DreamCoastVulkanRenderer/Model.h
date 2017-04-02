#pragma once
class Model
{
public:
	Model();
	~Model();

	void LoadModel();
	const std::string& GetTexturePath() const { return TEXTURE_PATH; }
	std::vector<Vertex>& GetVertices() { return vertices; }
	std::vector<uint32_t> GetIndices() { return indices; }

private:
	std::vector<Vertex> vertices;
	std::vector<uint32_t> indices;
	std::string MODEL_PATH = "../../../Resource/ObjModel/chalet.obj";
	std::string TEXTURE_PATH = "../../../Resource/ObjModel/chalet.jpg";
};

