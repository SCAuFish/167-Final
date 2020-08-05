#pragma once
#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_
#include "Node.h"
#include <vector>

class Transform :
	public Node
{
public:
	Transform();
	~Transform();
	glm::mat4 M;
	glm::mat4(*updateFunc)(int, glm::mat4&);
	bool hasUpdateFunc;
	unsigned int textureId;
	std::vector<Node*> children;
	glm::mat4 prevAccumulatedM; // record the accumulated model for collision detection, update when draw

	void addChild(Node* child);
	bool removeChild(Node* child);
	void changeModel(glm::mat4 C);
	void draw(glm::mat4 C);
	void setModelLoc(GLuint modelLoc);
	void update();
	void Transform::setUpdateFunc(glm::mat4(*func_ptr)(int, glm::mat4&));
	void setTextureId(unsigned int textureId);
};

#endif