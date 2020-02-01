#pragma once

#include <glad/glad.h>
#include <string>
#include <glm/glm.hpp>

class Shader
{
public:
	unsigned int id; // the program id

	Shader(const char* vertexPath, const char* fragmentPath);

	void use();

	void setBool(const std::string& name, bool value);
	void setInt(const std::string& name, int value);
	void setFloat(const std::string& name, float value);
	void setVec4f(const std::string& name, float v0, float v1, float v2, float v3);
	void setVec3f(const std::string& name, float v0, float v1, float v2);
	void setVec3f(const std::string& name, glm::vec3 value);
	void setMat4(const std::string& name, glm::mat4 value);
};

