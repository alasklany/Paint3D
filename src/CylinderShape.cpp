#include "CylinderShape.h"
CylinderShape::CylinderShape()
	:raduis(1), height(1), res(12), data_src(vtkSmartPointer<vtkCylinderSource>::New()) {
	name = "Cylinder" + std::to_string(ID);
}
CylinderShape::CylinderShape(size_t id)
	: raduis(1), height(1), res(12), data_src(vtkSmartPointer<vtkCylinderSource>::New()) {
	ID = id;
	type = 2;
	name = "Cylinder" + std::to_string(ID);
	update();
}
CylinderShape::CylinderShape(size_t id, double x, double y, double z)
	:raduis(x), height(y), res(z), data_src(vtkSmartPointer<vtkCylinderSource>::New()) {
	ID = id;
	type = 2;
	name = "Cylinder" + std::to_string(ID);
	update();
}
CylinderShape::CylinderShape(size_t id, double x, double y, double z, vtkSmartPointer<vtkCylinderSource> ptr)
	:raduis(x), height(y), res(z), data_src(ptr) {
	ID = id;
	type = 2;
	name = "Cylinder" + std::to_string(ID);
	update();
}
CylinderShape::CylinderShape(size_t id, vtkSmartPointer<vtkCylinderSource> ptr)
	:raduis(1), height(1), res(12), data_src(ptr) {
	ID = id;
	type = 2;
	name = "Cylinder" + std::to_string(ID);
	update();
}
void CylinderShape::update()
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
	axes->SetTotalLength(2*raduis, height, 2*raduis);
}
vtkSmartPointer<vtkPolyDataMapper> CylinderShape::to_graphics() {
	this->data_src->Update();
	this->ptr->SetInputData(this->data_src->GetOutput());
	return this->ptr;
}
vtkSmartPointer<vtkActor>CylinderShape::getActor() {
	data_actor->SetMapper(to_graphics());
	return this->data_actor;
}