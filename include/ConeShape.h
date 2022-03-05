#pragma once
#include "Shape.h"
class ConeShape :
	public IShape
{

protected:
	double raduis, height, res;

	vtkSmartPointer<vtkConeSource> data_src;
public:
	ConeShape();
	ConeShape(size_t id);
	ConeShape(size_t id, double raduis, double height, double res);
	ConeShape(size_t id, double raduis, double height, double res, vtkSmartPointer<vtkConeSource> ptr);
	ConeShape(size_t id, vtkSmartPointer<vtkConeSource> ptr);

	void setName(std::string s) { this->name = s; }

	inline const double& Raduis() const { return raduis; }
	inline double& Raduis() { return raduis; }

	inline const double& Height() const { return height; }
	inline double& Height() { return height; }

	inline const double& Resolution() const { return res; }
	inline double& Resolution() { return res; }

	void update();
	vtkSmartPointer<vtkPolyDataMapper> to_graphics();
	vtkSmartPointer<vtkActor> getActor();



	~ConeShape() {}
};

