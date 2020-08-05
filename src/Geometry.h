#pragma once
#ifndef _GEOMETRY_H_
#define _GEOMETRY_H_
#include "Node.h"
#include "PointCloud.h"
#include <string>
#include "SpaceTree.h"

class Geometry :
	public Node
{
private:
	GLuint modelLoc;
public:
	Geometry();
	~Geometry();

	void sendModelToShader(glm::mat4 model);
	PointCloud* object;
	void loadObjFile(std::string filename, int mode);
	void draw(glm::mat4 C);
	void changeModel(glm::mat4 C);
	void setModelLoc(GLuint modelLoc);
	void setTextureId(unsigned int textureId);
	void update();
};

#endif