#pragma once
#include <vtkPolyDataMapper.h>
#include <vtkCubeSource.h>
#include <vtkSphereSource.h>
#include <vtkCylinderSource.h>
#include <vtkConeSource.h>
#include <vtkActor.h>
#include <vtkTransform.h>
#include <vtkAxesActor.h>
#include <vtkLineSource.h>
#include <cstring>
enum class SHAPS { CUBE = 0, SPHERE = 1, CYLINDER = 2, CONE = 3 ,GENERIC=-1};
class IShape {
public:
	IShape()
		:ID(0),type(-1),name(""),ptr(vtkSmartPointer<vtkPolyDataMapper>::New()),
		data_actor(vtkSmartPointer<vtkActor>::New()),transform(vtkSmartPointer<vtkTransform>::New()),
		axes(vtkSmartPointer<vtkAxesActor>::New()),
		tx(0), ty(0), tz(0), rx(0), ry(0), rz(0) {}
	inline size_t const getID()const {return ID;}
	std::string  getName()const { return name; }
	std::string  getType() {
	
		std::string s;
			switch (type) {
				case 0: s = "CUBE"; break;
				case 1: s = "SPHERE"; break;
				case 2: s = "CYLINDER"; break;
				case 3: s = "CONE"; break;
				default: s = "GENERIC"; break;
			}
		return s;
	};
	int getTypeN() { return type; }
	virtual void setName(std::string s) = 0;
	virtual void update() = 0;
	virtual vtkSmartPointer<vtkPolyDataMapper> to_graphics() = 0;
	virtual vtkSmartPointer<vtkActor> getActor() = 0;
	vtkSmartPointer<vtkAxesActor> getaxes() {return axes;}
	void setTranslation(double x, double y, double z) { tx = x; ty = y; tz = z; update(); }
	double& TX() { return tx; }
	double& TY() { return ty; }
	double& TZ() { return tz; }
	const double TX()const { return tx; }
	const double TY()const { return ty; }
	const double TZ()const { return tz; }
	void setRotation(double x, double y, double z) { rx = x; ry = y; rz = z; update();}
	double& RX() { return rx; }
	double& RY() { return ry; }
	double& RZ() { return rz; }
	const double RX()const { return rx; }
	const double RY()const { return ry; }
	const double RZ()const { return rz; }
	
	void rotate() { 
		data_actor->SetOrientation(rx, ry, rz);
	/*	transform->(data_actor->GetOrigin());
	transform->Translate(0, 0, 0);
	transform->RotateX(rx);
	transform->RotateY(ry);
	transform->RotateZ(rz);
	transform->Update();*/
	}

protected:

	vtkSmartPointer<vtkPolyDataMapper> ptr; 
	vtkSmartPointer<vtkActor> data_actor;
	vtkSmartPointer<vtkTransform> transform;
	vtkSmartPointer<vtkAxesActor> axes;

	size_t  ID;
	int type;
	std::string name;
	double tx, ty, tz;
	double rx, ry, rz;
};

class CubeShape:public IShape
{
protected:
	double lx, ly, lz;
	
	vtkSmartPointer<vtkCubeSource> data_src;
public:
	CubeShape();
	CubeShape(size_t id);
	CubeShape(size_t id, double x, double y, double z);
	CubeShape(size_t id, double x, double y, double z, vtkSmartPointer<vtkCubeSource> ptr);
	CubeShape(size_t id, vtkSmartPointer<vtkCubeSource> ptr);
	
	void setName(std::string s) { this->name = s; }

	inline const double&	LX() const{ return lx; }
	inline double&	LX() { return lx; }
	inline const double&	LY() const { return ly; }
	inline double&	LY() { return ly; }
	inline const double&	LZ() const { return lz; }
	inline double&	LZ() { return lz; }
	void update();
	vtkSmartPointer<vtkPolyDataMapper> to_graphics();
	vtkSmartPointer<vtkActor> getActor();

	

	~CubeShape() {}
	
};



