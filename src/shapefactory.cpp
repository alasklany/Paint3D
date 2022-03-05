#include "shapefactory.h"

ShapeFactory::ShapeFactory() {

}
IShape* ShapeFactory::create_cube(size_t id) {
	
	CubeShape* ptr = new CubeShape(id);
	ptr->update();
	return ptr;
}
IShape* ShapeFactory::create_sphere(size_t id) {

	SphereShape* ptr = new SphereShape(id);
	ptr->update();
	return ptr;
}
IShape* ShapeFactory::create_cylinder(size_t id) {

	CylinderShape* ptr = new CylinderShape(id);
	ptr->update();
	return ptr;
}

IShape* ShapeFactory::create_cone(size_t id) {

	ConeShape* ptr = new ConeShape(id);
	ptr->update();
	return ptr;
}

