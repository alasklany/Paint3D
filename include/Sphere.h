#pragma once
#include "Shape.h"
class SphereShape :
    public IShape
{
protected:
	double raduis, res;

	vtkSmartPointer<vtkSphereSource> data_src;
public:
	SphereShape();
	SphereShape(size_t id);
	SphereShape(size_t id, double raduis, double res);
	SphereShape(size_t id, double raduis, double res, vtkSmartPointer<vtkSphereSource> ptr);
	SphereShape(size_t id, vtkSmartPointer<vtkSphereSource> ptr);

	void setName(std::string s) { this->name = s; }

	inline const double& Raduis() const { return raduis; }
	inline double& Raduis() { return raduis; }
	inline const double& Resolution() const { return res; }
	inline double& Resolution() { return res; }
	
	void update();
	vtkSmartPointer<vtkPolyDataMapper> to_graphics();
	vtkSmartPointer<vtkActor> getActor();



	~SphereShape() {}
};

