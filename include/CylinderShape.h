#pragma once
#include "Shape.h"
class CylinderShape :
    public IShape
{

protected:
	double raduis,height, res;

	vtkSmartPointer<vtkCylinderSource> data_src;
public:
	CylinderShape();
	CylinderShape(size_t id);
	CylinderShape(size_t id, double raduis, double height, double res);
	CylinderShape(size_t id, double raduis, double height, double res, vtkSmartPointer<vtkCylinderSource> ptr);
	CylinderShape(size_t id, vtkSmartPointer<vtkCylinderSource> ptr);

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



	~CylinderShape() {}
};

