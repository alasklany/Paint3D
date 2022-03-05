#include "Shape.h"
CubeShape::CubeShape() 
	:lx(1), ly(1), lz(1), data_src(vtkSmartPointer<vtkCubeSource>::New()) {
	name = "Cube" + std::to_string(ID);
}
CubeShape::CubeShape(size_t id) 
	:lx(1), ly(1), lz(1), data_src(vtkSmartPointer<vtkCubeSource>::New()) {
	ID = id;
	type = 0;
	name = "Cube" + std::to_string(ID);
	update();
}
CubeShape::CubeShape(size_t id, double x, double y, double z)
	:lx(x), ly(y), lz(z), data_src(vtkSmartPointer<vtkCubeSource>::New()) {
	ID = id;
	type = 0;
	name = "Cube" + std::to_string(ID);
	update();
}
CubeShape::CubeShape(size_t id, double x, double y, double z, vtkSmartPointer<vtkCubeSource> ptr)
	:lx(x), ly(y), lz(z), data_src(ptr) {
	ID = id;
	type = 0;
	name = "Cube" + std::to_string(ID);
	update();
}
CubeShape::CubeShape(size_t id, vtkSmartPointer<vtkCubeSource> ptr)
	:lx(1), ly(1), lz(1), data_src(ptr) {
	ID = id;
	type = 0;
	name = "Cube" + std::to_string(ID);
	update();
}
void CubeShape::update()
{
	data_src->SetXLength(lx);
	data_src->SetYLength(ly);
	data_src->SetZLength(lz);
	data_src->SetCenter(tx, ty, tz);
	data_src->Update();
	data_actor->SetOrigin(data_src->GetCenter());
	
 	transform->Translate(
		data_actor->GetCenter()[0] -  transform->GetPosition()[0],
		data_actor->GetCenter()[1] -  transform->GetPosition()[1],
		data_actor->GetCenter()[2] - transform->GetPosition()[2]
	);
	
	transform->RotateWXYZ(0, 1, 0, 0);
	transform->RotateWXYZ(0, 0, 1, 0);
	transform->RotateWXYZ(0, 0, 0, 1);
	transform->Update();
	axes->SetUserTransform(transform);
	axes->SetShaftTypeToLine();
	axes->SetTotalLength(lx, ly, lz);
	//axes->SetNormalizedShaftLength(1.0, 1.0, 1.0);
	//axes->SetNormalizedTipLength(0.05, 0.05, 0.05);
	axes->AxisLabelsOff();
}
vtkSmartPointer<vtkPolyDataMapper> CubeShape::to_graphics() {
	this->data_src->Update();
	this->ptr->SetInputData(this->data_src->GetOutput());
	return this->ptr;
}
vtkSmartPointer<vtkActor>CubeShape::getActor() {
	data_actor->SetMapper(to_graphics());
		return this->data_actor;
}