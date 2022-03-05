#pragma once
#include <vtkActor.h>
#include <vtkCamera.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkNamedColors.h>
#include <vtkNew.h>
#include <vtkPointPicker.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSphereSource.h>
class Coordinates
{

};

namespace {

    // Define interaction style
    class customMouseInteractorStyle : public vtkInteractorStyleTrackballCamera
    {
    public:
        static customMouseInteractorStyle* New();
        vtkTypeMacro(customMouseInteractorStyle, vtkInteractorStyleTrackballCamera);

        virtual void OnLeftButtonDown() override
        {
            std::cout << "Pressed left mouse button." << std::endl;
            // Forward events
            vtkInteractorStyleTrackballCamera::OnLeftButtonDown();
        }

        virtual void OnMiddleButtonDown() override
        {
            std::cout << "Pressed middle mouse button." << std::endl;
            // Forward events
            vtkInteractorStyleTrackballCamera::OnMiddleButtonDown();
        }

        virtual void OnRightButtonDown() override
        {
            std::cout << "Pressed right mouse button." << std::endl;
            // Forward events
            vtkInteractorStyleTrackballCamera::OnRightButtonDown();
        }
        virtual void On
        
    };

    vtkStandardNewMacro(customMouseInteractorStyle);

} // namespace