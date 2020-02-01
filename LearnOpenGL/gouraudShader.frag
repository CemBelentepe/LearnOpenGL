#version 330 core
out vec4 FragColor;

uniform vec3 objectColor;
in vec3 GouraudColor;

void main()
{
	FragColor = vec4(GouraudColor*objectColor, 1.0);
}