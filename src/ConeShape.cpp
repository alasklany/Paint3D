#include "ConeShape.h"
ConeShape::ConeShape()
	:raduis(1), height(1), res(12), data_src(vtkSmartPointer<vtkConeSource>::New()) {
	name = "Cone" + std::to_string(ID);
}
ConeShape::ConeShape(size_t id)
	: raduis(1), height(1), res(12), data_src(vtkSmartPointer<vtkConeSource>::New()) {
	ID = id;
	type = 3;
	name = "Cone" + std::to_string(ID);
	update();
}
ConeShape::ConeShape(size_t id, double x, double y, double z)
	:raduis(x), height(y), res(z), data_src(vtkSmartPointer<vtkConeSource>::New()) {
	ID = id;
	type = 3;
	name = "Cone" + std::to_string(ID);
	update();
}
ConeShape::ConeShape(size_t id, double x, double y, double z, vtkSmartPointer<vtkConeSource> ptr)
	:raduis(x), height(y), res(z), data_src(ptr) {
	ID = id;
	type = 3;
	name = "Cone" + std::to_string(ID);
	update();
}
ConeShape::ConeShape(size_t id, vtkSmartPointer<vtkConeSource> ptr)
	:raduis(1), height(1), res(12), data_src(ptr) {
	ID = id;
	type = 3;
	name = "Cone" + std::to_string(ID);
	update();
}
void ConeShape::update()
{
	data_src->SetRadius(raduis);
	data_src->SetHeight(height);
	data_src->SetResolution(res);
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
	axes->SetShaftTypeToLine();
	axes->SetTotalLength(2*raduis, 2*height, 2*raduis);
}
vtkSmartPointer<vtkPolyDataMapper> ConeShape::to_graphics() {
	this->data_src->Update();
	this->ptr->SetInputData(this->data_src->GetOutput());
	return this->ptr;
}
vtkSmartPointer<vtkActor> ConeShape::getActor() {
	data_actor->SetMapper(to_graphics());
	return this->data_actor;
}