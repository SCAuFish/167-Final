#ifndef _CUBE_H_
#define _CUBE_H_

#ifdef __APPLE__
#include <OpenGL/gl3.h>
#else
#include <GL/glew.h>
#endif

#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <vector>

#include "Object.h"

class Cube : public Object
{
protected:
	GLuint vao;
	GLuint vbos[2];
public:
	Cube();
	Cube(float size);
	~Cube();

	virtual void draw();
	void update();

	void spin(float deg);
};

#endif
