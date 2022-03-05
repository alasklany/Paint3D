#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vtkNamedColors.h>
#include <vtkActor.h>
#include <vtkRenderer.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkProperty.h>
#include <vtkTransform.h>
#include <vtkAxesActor.h>
#include <vtkAnnotatedCubeActor.h>
#include <vtkOrientationMarkerWidget.h>
#include <vtkInteractorStyleTrackballCamera.h>
#include <vtkBoxWidget2.h>
#include <vtkWidgetRepresentation.h>
#include <vtkBoxRepresentation.h>
#include <vtkCommand.h>
#include <vtkCamera.h>
#include "shapefactory.h"
#include <vector>


#include <qmessagebox.h>
#include <qcolordialog.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void storeShape(IShape* cube);
    void updateTable();
    void restorShape(size_t index);

   

    //Group BOX 
    void TranslationReload(double x, double y, double z);
    void RotationReload(double x, double y, double z);
    // stacked pages 
    // cube page
    void Cube_reload(double x, double y, double z);
    void sphere_reload(double raduis, double resol);
    void cylinder_reload(double raduis, double height,double res);
    void cone_reload(double raduis, double height, double res);
    
    void uiSelction(bool z);

private:
    Ui::MainWindow *ui;
    vtkNew<vtkGenericOpenGLRenderWindow> render_window;
    vtkNew<vtkRenderer> renderer;
    ShapeFactory* factory;
    std::vector<IShape*> WS;
    size_t WS_genrator;
    int SelShape;

public slots:
    void onclicked_draw_cube(void);
    void onclicked_draw_sphere(void);
    void onclicked_draw_Cylinder(void);
    void onclicked_draw_Cone(void);

    void onChageTX();
    void onChageTY();
    void onChageTZ();
    void onChageRX();
    void onChageRY();
    void onChageRZ();

    void onChageCubeLX();
    void onChageCubeLY();
    void onChageCubeLZ();

    void onChageSphereR();
    void onChageSphereS();

    void onChageCylinderR();
    void onChageCylinderH();
    void onChageCylinderS();

    void onChageConeR();
    void onChageConeH();
    void onChageConeS();

    void onShapeSelect();
    void onShapeNameChange();

    void onShapeColorChange();
    void onShapeDelete();
   

};



#endif // MAINWINDOW_H
