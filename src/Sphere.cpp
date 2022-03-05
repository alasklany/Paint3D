#include "Sphere.h"

SphereShape::SphereShape() :
	raduis(1), res(12), data_src(vtkSmartPointer<vtkSphereSource>::New())
{
	
	name = "Sphere" + std::to_string(ID);
}

SphereShape::SphereShape(size_t id):
	raduis(1), res(12), data_src(vtkSmartPointer<vtkSphereSource>::New())
{
	ID = id;
	type = 1;
	name = "Sphere" + std::to_string(ID);
	update();
}

SphereShape::SphereShape(size_t id, double raduis, double res):
raduis(id), res(raduis), data_src(vtkSmartPointer<vtkSphereSource>::New())
{
	ID = id;
	type = 1;
	name = "Sphere" + std::to_string(ID);
	update();
}

SphereShape::SphereShape(size_t id, double raduis, double res, vtkSmartPointer<vtkSphereSource> ptr):
	raduis(id), res(raduis), data_src(ptr)
{
	ID = id;
	type = 1;
	name = "Sphere" + std::to_string(ID);
	update();
}

SphereShape::SphereShape(size_t id, vtkSmartPointer<vtkSphereSource> ptr):
raduis(1), res(12), data_src(ptr)
{
	ID = id;
	type = 1;
	name = "Sphere" + std::to_string(ID);
	update();
}
void SphereShape::update()
{
	data_src->SetRadius(raduis);
	data_src->SetThetaResolution(res);
	data_src->SetPhiResolution(res);

	data_src->SetCenter(tx, ty, tz);
	data_src->Update();
	data_actor->SetOrigin(data_src->GetCenter());
	transform->Translate(
		data_actor->GetCenter()[0] - transform->GetPosition()[0],
		data_actor->GetCenter()[1] - transform->GetPosition()[1],
		data_actor->GetCenter()[2] - transform->GetPosition()[2]
	);
	axes->SetUserTransform(transform);
	axes->AxisLabelsOff();
	axes->SetTotalLength(2*raduis, 2*raduis, 2*raduis);
}
vtkSmartPointer<vtkPolyDataMapper> SphereShape::to_graphics() {
	this->data_src->Update();
	this->ptr->SetInputData(this->data_src->GetOutput());
	return this->ptr;
}
vtkSmartPointer<vtkActor>SphereShape::getActor() {
	data_actor->SetMapper(to_graphics());
	return this->data_actor;
}