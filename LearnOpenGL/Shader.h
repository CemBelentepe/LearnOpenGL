#pragma once

#include <glad/glad.h>
#include <string>

class Shader
{
public:
	unsigned int id; // the program id

	Shader(const char* vertexPath, const char* fragmentPath);

	void use();

	void setBool(const std::string& name, bool value);
	void setInt(const std::string& name, int value);
	void setFlaot(const std::string& name, float value);
	void setVec4f(const std::string& name, float v0, float v1, float v2, float v3);
};

