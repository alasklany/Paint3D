#include "TubeShape.h"

TubeShape::TubeShape()
{
	x[0] = 0;x[1] = 0;
	y[0] = 0;y[1] = 0;
	z[0] = 0;z[1] = 0;
	data_src=vtkSmartPointer<vtkLineSource>::New() ;
	name = "Tube" + std::to_string(ID);
}

TubeShape::TubeShape(size_t id)
{
	ID = id;
	x[0] = 0; x[1] = 0;
	y[0] = 0; y[1] = 0;
	z[0] = 0; z[1] = 0;
	data_src = vtkSmartPointer<vtkLineSource>::New();
	name = "Tube" + std::to_string(ID);
}

TubeShape::TubeShape(size_t id, double x1,double x2 ,double y1, double y2, double z1,double z2)
{
	ID = id;
	x[0] = x1; x[1] = x2;
	y[0] = y1; y[1] = y2;
	z[0] = z1; z[1] = z2;
	data_src = vtkSmartPointer<vtkLineSource>::New();
	name = "Tube" + std::to_string(ID);
}

TubeShape::TubeShape(size_t id, double x1, double x2, double y1, double y2, double z1, double z2, vtkSmartPointer<vtkLineSource> ptr)
{
	ID = id;
	x[0] = x1; x[1] = x2;
	y[0] = y1; y[1] = y2;
	z[0] = z1; z[1] = z2;
	data_src = ptr;
	name = "Tube" + std::to_string(ID);
}

TubeShape::TubeShape(size_t id, vtkSmartPointer<vtkLineSource> ptr)
{
	ID = id;
	x[0] = 0; x[1] = 0;
	y[0] = 0; y[1] = 0;
	z[0] = 0; z[1] = 0;
	data_src = ptr;
	name = "Tube" + std::to_string(ID);
}

void TubeShape::update()
{
	data_src->SetPoint1(x[0]+tz, y[0]+ty, z[0]+tz);
	data_src->SetPoint1(x[1]+tx, y[1]+ty, z[1]+tz);
	data_src->Update();

	transform->Translate(
		data_actor->GetCenter()[0] - transform->GetPosition()[0],
		data_actor->GetCenter()[1] - transform->GetPosition()[1],
		data_actor->GetCenter()[2] - transform->GetPosition()[2]
	);

	transform->RotateWXYZ(0, 1, 0, 0);
	transform->RotateWXYZ(0, 0, 1, 0);
	transform->RotateWXYZ(0, 0, 0, 1);
	transform->Update();
	axes->SetUserTransform(transform);
	axes->SetShaftTypeToLine();
	
	//axes->SetNormalizedShaftLength(1.0, 1.0, 1.0);
	//axes->SetNormalizedTipLength(0.05, 0.05, 0.05);
	axes->AxisLabelsOff();
}
vtkSmartPointer<vtkPolyDataMapper> TubeShape::to_graphics() {
	this->data_src->Update();
	this->ptr->SetInputData(this->data_src->GetOutput());
	return this->ptr;
}
vtkSmartPointer<vtkActor>TubeShape::getActor() {
	data_actor->SetMapper(to_graphics());
	return this->data_actor;
}
