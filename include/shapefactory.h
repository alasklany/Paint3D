#pragma once
#include <vtkPolyDataMapper.h>
#include "Shape.h"
#include "Sphere.h"
#include "CylinderShape.h"
#include "ConeShape.h"
class ShapeFactory
{
private:
	
public:
	ShapeFactory();
	~ShapeFactory()
	{}
	IShape* create_cube(size_t id );
	IShape* create_sphere(size_t id);
	IShape* create_cylinder(size_t id);
	IShape* create_cone(size_t id);
};


