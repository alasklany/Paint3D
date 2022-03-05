#pragma once
#include "Shape.h"
class TubeShape :
    public IShape
{
protected:
	double x[2], y[2], z[2];

	vtkSmartPointer<vtkLineSource> data_src;
public:
	TubeShape();
	TubeShape(size_t id);
	TubeShape(size_t id, double x1, double x2, double y1, double y2, double z1, double z2);
	TubeShape(size_t id, double x1, double x2, double y1, double y2, double z1, double z2, vtkSmartPointer<vtkLineSource> ptr);
	TubeShape(size_t id, vtkSmartPointer<vtkLineSource> ptr);

	void setName(std::string s) { this->name = s; }

	inline const double& X1() const { return x[0]; }
	inline double& X1() { return x[0]; }
	inline const double& X2() const { return x[1]; }
	inline double& X2() { return x[1]; }

	inline const double& Y1() const { return y[0]; }
	inline double& Y1() { return y[0]; }
	inline const double& Y2() const { return y[1]; }
	inline double& Y2() { return y[1]; }

	inline const double& Z1() const { return z[0]; }
	inline double& Z1() { return z[0]; }
	inline const double& Z2() const { return z[1]; }
	inline double& Z2() { return z[1]; }


	void update();
	vtkSmartPointer<vtkPolyDataMapper> to_graphics();
	vtkSmartPointer<vtkActor> getActor();



	~TubeShape() {}
};

