#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Coordinates.h"



MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    SelShape(-1)
{
    ui->setupUi(this);
    
    
    this->setWindowTitle("Mini Project 3D Paint");

    if (SelShape == -1)uiSelction(false);
    factory = new ShapeFactory();
    WS_genrator = 0;
    render_window->SetSize(ui->scene->width(),ui->scene->height());
    
    ui->scene->setRenderWindow(this->render_window);

    CubeShape* base = new CubeShape(WS_genrator++, 30, 0, 30);
    vtkSmartPointer<vtkActor> base_actor=vtkSmartPointer<vtkActor>::New();
    base_actor->SetMapper(base->to_graphics());
    vtkNew<vtkNamedColors> colors;
    vtkSmartPointer<vtkProperty> prop= base_actor->GetProperty();

    prop->SetColor(.9,.9,.9);
    prop->SetOpacity(0.2);

    renderer->AddActor(base_actor);
    
    renderer->SetBackground(.4,.1,.4);
    render_window->AddRenderer(renderer);
    renderer->ResetCamera();
    renderer->GetActiveCamera()->Elevation(45);

    /// <summary>
    
    /// </summary>
    /// <param name="parent"></param>

    connect(ui->btn_cube, &QPushButton::clicked, this, &MainWindow::onclicked_draw_cube);
    connect(ui->btn_sphere, &QPushButton::clicked, this, &MainWindow::onclicked_draw_sphere);
    connect(ui->btn_cylinder, &QPushButton::clicked, this, &MainWindow::onclicked_draw_Cylinder);
    connect(ui->btn_cone, &QPushButton::clicked, this, &MainWindow::onclicked_draw_Cone);
    connect(ui->btn_shapeColor, &QPushButton::clicked, this, &MainWindow::onShapeColorChange);
    connect(ui->btn_shapeDelete, &QPushButton::clicked, this, &MainWindow::onShapeDelete);

    /* Start of  coordinate properties connection*/
    connect(ui->trans_x_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageTX);
    connect(ui->trans_y_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageTY);
    connect(ui->trans_z_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageTZ);

    connect(ui->rotat_x_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageRX);
    connect(ui->rotat_y_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageRY);
    connect(ui->rotat_z_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageRZ);


    /* End of  coordinate properties connection*/

    
    /* Start of  Cube properties connection*/
    connect(ui->cube_lx_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageCubeLX);
    connect(ui->cube_ly_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageCubeLY);
    connect(ui->cube_lz_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageCubeLZ);
    /* End of  Cube properties connection*/

    /* Start of  sphere properties connection*/
    connect(ui->sphere_r_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageSphereR);
    connect(ui->sphere_res_input, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::onChageSphereS);
    /* End of  sphere properties connection*/

    /* Start of  Cylinder properties connection*/
    connect(ui->cylinder_r_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageCylinderR);
    connect(ui->cylinder_h_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageCylinderH);
    connect(ui->cylinder_res_input, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::onChageCylinderS);
    /* End of  Cylinder properties connection*/

    /* Start of  Cone properties connection*/
    connect(ui->cone_r_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageConeR);
    connect(ui->cone_h_input, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::onChageConeH);
    connect(ui->cone_res_input, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::onChageConeS);
    /* End of  Cone properties connection*/


    connect(ui->ws_table, &QTableWidget::itemClicked, this, &MainWindow::onShapeSelect);
    ui->ws_table->setColumnCount(3);
    ui->ws_table->setColumnWidth(0,10);
   


    vtkNew<customMouseInteractorStyle> style;
    render_window->GetInteractor()->SetInteractorStyle(style);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::storeShape(IShape* cube) {
    WS.push_back(cube);
    renderer->AddActor(WS.back()->getActor());
    renderer->AddActor(WS.back()->getaxes());
    render_window->Render();
    if (SelShape != -1)
        renderer->RemoveActor(WS[SelShape]->getaxes());
    SelShape = WS.size() - 1;
    renderer->AddActor(WS[SelShape]->getaxes());
    uiSelction(true);
}

void MainWindow::updateTable() {
    ui->ws_table->clearContents();
    ui->ws_table->setRowCount(0);
    for (int i = 0; i < WS.size(); i++)
    {
        ui->ws_table->insertRow(i);
        QTableWidgetItem* item = new QTableWidgetItem();
        item->setText(QString::number(WS[i]->getID()));
        item->setTextAlignment(Qt::AlignCenter);
        item->setFlags(Qt::ItemIsEnabled);
        ui->ws_table->setItem(i, 0, item);
        QTableWidgetItem* item2 = new QTableWidgetItem();
        item2->setText(QString::fromStdString(WS[i]->getName()));
        item2->setTextAlignment(Qt::AlignCenter);
        ui->ws_table->setItem(i, 1, item2);
        QTableWidgetItem* item3 = new QTableWidgetItem();
        item3->setText(QString::fromStdString(WS[i]->getType()));
        item3->setTextAlignment(Qt::AlignCenter);
        item3->setFlags(Qt::ItemIsEnabled);
        ui->ws_table->setItem(i, 2, item3);
    }
}


void MainWindow::restorShape(size_t index) {
    int shape = WS[index]->getTypeN();
    renderer->Render();
    if(shape != -1)
        uiSelction(true);
    switch (shape)
    {
    case 0: {
        CubeShape* ptr = static_cast<CubeShape*>(WS[index]); 
        Cube_reload(ptr->LX(), ptr->LY(), ptr->LZ());
        TranslationReload(ptr->TX(), ptr->TY(), ptr->TZ());
        RotationReload(ptr->RZ(), ptr->RY(), ptr->RZ());
        break; }
    case 1: {
        SphereShape* ptr = static_cast<SphereShape*>(WS[index]);
        sphere_reload(ptr->Raduis(), ptr->Resolution());
        TranslationReload(ptr->TX(), ptr->TY(), ptr->TZ());
        RotationReload(ptr->RZ(), ptr->RY(), ptr->RZ());
        break; }
    case 2: {
        CylinderShape* ptr = static_cast<CylinderShape*>(WS[index]);
        cylinder_reload(ptr->Raduis(), ptr->Height(), ptr->Resolution());
        TranslationReload(ptr->TX(), ptr->TY(), ptr->TZ());
        RotationReload(ptr->RZ(), ptr->RY(), ptr->RZ());
        break; }
    case 3: {
        ConeShape* ptr = static_cast<ConeShape*>(WS[index]);
        cylinder_reload(ptr->Raduis(), ptr->Height(), ptr->Resolution());
        TranslationReload(ptr->TX(), ptr->TY(), ptr->TZ());
        RotationReload(ptr->RZ(), ptr->RY(), ptr->RZ());

        break; }
    case 4:
        break;
    default:
        break;
    }
    
}



void MainWindow::TranslationReload(double x, double y, double z) {
    ui->trans_x_input->setValue(x);
    ui->trans_y_input->setValue(y);
    ui->trans_z_input->setValue(z);
    
}
void MainWindow::RotationReload(double x, double y, double z) {
    
    ui->rotat_x_input->setValue(x);
    ui->rotat_y_input->setValue(y);
    ui->rotat_z_input->setValue(z);
}

void MainWindow::Cube_reload(double x, double y, double z)
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->cube_lx_input->setValue(x);
    ui->cube_ly_input->setValue(y);
    ui->cube_lz_input->setValue(z);
}

void MainWindow::sphere_reload(double raduis, double resol)
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->sphere_r_input->setValue(raduis);
    ui->sphere_res_input->setValue(resol);
    
}

void MainWindow::cylinder_reload(double raduis, double height, double res)
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->cylinder_r_input->setValue(raduis);
    ui->cylinder_h_input->setValue(height);
    ui->cylinder_res_input->setValue(res);

}

void MainWindow::cone_reload(double raduis, double height, double res)
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->cone_r_input->setValue(raduis);
    ui->cone_h_input->setValue(height);
    ui->cone_res_input->setValue(res);

}

void MainWindow::uiSelction(bool z) {
    ui->groupBox_translation->setEnabled(z);
    ui->groupBox_rotation->setEnabled(z);
    ui->btn_shapeColor->setEnabled(z);
    ui->btn_shapeDelete->setEnabled(z);
    if (z)
    {
        ui->stackedWidget->show();
        ui->stackedWidget->setCurrentIndex(WS[SelShape]->getTypeN());
    }
    else 
        ui->stackedWidget->hide();
    
}


//slots
void MainWindow::onclicked_draw_cube() {
   
    IShape* cube = factory->create_cube(
        WS_genrator++
    );
    this->storeShape(cube);
    cube->getActor()->GetProperty()
        ->SetColor(0,1, 1);
    this->updateTable();
    restorShape(WS.size() - 1);
   
}
void MainWindow::onclicked_draw_sphere() {

    IShape* sphere = factory->create_sphere(
        WS_genrator++
    );
    this->storeShape(sphere);
    sphere->getActor()->GetProperty()
        ->SetColor(0, 1, 1);
    this->updateTable();
    restorShape(WS.size() - 1);

}
void MainWindow::onclicked_draw_Cylinder() {

    IShape* sphere = factory->create_cylinder(
        WS_genrator++
    );
    this->storeShape(sphere);
    sphere->getActor()->GetProperty()
        ->SetColor(0, 1, 1);
    this->updateTable();
    restorShape(WS.size() - 1);

}

void MainWindow::onclicked_draw_Cone() {

    IShape* sphere = factory->create_cone(
        WS_genrator++
    );
    this->storeShape(sphere);
    sphere->getActor()->GetProperty()
        ->SetColor(0, 1, 1);
    this->updateTable();
    restorShape(WS.size() - 1);

}

/*start of coordinate slots*/
void MainWindow::onChageTX() {
    static_cast<CubeShape*>(WS[SelShape])->TX() = ui->trans_x_input->value();
    static_cast<CubeShape*>(WS[SelShape])->update();
    ui->statusbar->showMessage(
        "x:" + QString::number(static_cast<CubeShape*>(WS[SelShape])->getaxes()->GetPosition()[0]) +
        " x:" + QString::number(static_cast<CubeShape*>(WS[SelShape])->getaxes()->GetScale()[0]) +
        " x:" + QString::number(static_cast<CubeShape*>(WS[SelShape])->getaxes()->GetOrientation()[0]), 2000);
    
    render_window->Render();  
}
void MainWindow::onChageTY() {
    static_cast<CubeShape*>(WS[SelShape])->TY() = ui->trans_y_input->value();
    static_cast<CubeShape*>(WS[SelShape])->update();
    render_window->Render();
}
void MainWindow::onChageTZ() {
    static_cast<CubeShape*>(WS[SelShape])->TZ() = ui->trans_z_input->value();
    static_cast<CubeShape*>(WS[SelShape])->update();
    render_window->Render();
}
void MainWindow::onChageRX() {
    static_cast<CubeShape*>(WS[SelShape])->RX() = ui->rotat_x_input->value();
    static_cast<CubeShape*>(WS[SelShape])->rotate();
    render_window->Render();
}
void MainWindow::onChageRY() {
    static_cast<CubeShape*>(WS[SelShape])->RY() = ui->rotat_y_input->value();
    static_cast<CubeShape*>(WS[SelShape])->rotate();
    render_window->Render();
}
void MainWindow::onChageRZ() {
    static_cast<CubeShape*>(WS[SelShape])->RZ() = ui->rotat_z_input->value();
    static_cast<CubeShape*>(WS[SelShape])->rotate();
    render_window->Render();
}
/*end of coordinate slots*/

/*start of cube slots*/ 

void MainWindow::onChageCubeLX()
{
    static_cast<CubeShape*>(WS[SelShape])->LX() = ui->cube_lx_input->value();
    static_cast<CubeShape*>(WS[SelShape])->update();
    render_window->Render();
}

void MainWindow::onChageCubeLY()
{
    static_cast<CubeShape*>(WS[SelShape])->LY() = ui->cube_ly_input->value();
    static_cast<CubeShape*>(WS[SelShape])->update();
    render_window->Render();
}

void MainWindow::onChageCubeLZ()
{
    static_cast<CubeShape*>(WS[SelShape])->LZ() = ui->cube_lz_input->value();
    static_cast<CubeShape*>(WS[SelShape])->update();
    render_window->Render();
}
/*end of cube slots*/

/*start of sphere slots*/
void MainWindow::onChageSphereR() {
    static_cast<SphereShape*>(WS[SelShape])->Raduis() = ui->sphere_r_input->value();
    static_cast<SphereShape*>(WS[SelShape])->update();
    render_window->Render();
}
void MainWindow::onChageSphereS() {
    static_cast<SphereShape*>(WS[SelShape])->Resolution() = ui->sphere_res_input->value();
    static_cast<SphereShape*>(WS[SelShape])->update();
    render_window->Render();
}
/*end of sphere slots*/

/*start of cylinder slots*/

void MainWindow::onChageCylinderR()
{
    static_cast<CylinderShape*>(WS[SelShape])->Raduis() = ui->cylinder_r_input->value();
    static_cast<CylinderShape*>(WS[SelShape])->update();
    render_window->Render();
}

void MainWindow::onChageCylinderH()
{
    static_cast<CylinderShape*>(WS[SelShape])->Height() = ui->cylinder_h_input->value();
    static_cast<CylinderShape*>(WS[SelShape])->update();
    render_window->Render();
}

void MainWindow::onChageCylinderS()
{
    static_cast<CylinderShape*>(WS[SelShape])->Resolution() = ui->cylinder_res_input->value();
    static_cast<CylinderShape*>(WS[SelShape])->update();
    render_window->Render();
}
/*end of cylinder slots*/

/*start of cone slots*/

void MainWindow::onChageConeR()
{
    static_cast<ConeShape*>(WS[SelShape])->Raduis() = ui->cone_r_input->value();
    static_cast<ConeShape*>(WS[SelShape])->update();
    render_window->Render();
}

void MainWindow::onChageConeH()
{
    static_cast<ConeShape*>(WS[SelShape])->Height() = ui->cone_h_input->value();
    static_cast<ConeShape*>(WS[SelShape])->update();
    render_window->Render();
}

void MainWindow::onChageConeS()
{
    static_cast<ConeShape*>(WS[SelShape])->Resolution() = ui->cone_res_input->value();
    static_cast<ConeShape*>(WS[SelShape])->update();
    render_window->Render();
}
/*end of cone slots*/




void MainWindow::onShapeSelect()
{
   
    if (WS.size() == 0 ) return;
    if (SelShape != -1 && SelShape == ui->ws_table->currentRow()) return;
    size_t target = ui->ws_table->item(ui->ws_table->currentRow(),0)->text().toInt();
    std::vector<IShape*>::iterator it = std::find_if(WS.begin(), WS.end(), [&target](IShape* i) { return i->getID() == target;});
   if(SelShape != -1)
    renderer->RemoveActor(WS[SelShape]->getaxes());
    SelShape = it - WS.begin();
    renderer->AddActor(WS[SelShape]->getaxes());
    restorShape(SelShape);
    renderer->Render();
}

void MainWindow::onShapeNameChange() {
    size_t target = ui->ws_table->item(ui->ws_table->currentRow(), 0)->text().toInt();
    std::string name = ui->ws_table->item(ui->ws_table->currentRow(), 1)->text().toStdString();
    if (target < 0 || target>WS.size()) return;
    std::vector<IShape*>::iterator it = std::find_if(WS.begin(), WS.end(), [&target](IShape* i) { return i->getID() == target; });
    WS[it - WS.begin()]->setName(name);
    QMessageBox::information(this, "", QString::fromStdString(name));
}

void MainWindow::onShapeColorChange()
{
    bool ok = false;
   
    QColor c = QColorDialog::getColor(Qt::cyan, this);
    if (&ok) {
        static_cast<IShape*>(WS[SelShape])->getActor()->GetProperty()
            ->SetColor(c.redF(), c.greenF(), c.blueF());
        render_window->Render();
    }  
}


void MainWindow::onShapeDelete() {

    if (SelShape == -1) return;
    WS[SelShape]->getActor()->GetMapper()->Delete();
    WS[SelShape]->getActor()->Delete();
    renderer->RemoveActor(WS[SelShape]->getActor());
    renderer->GetActiveCamera()->SetClippingRange(.1,1000);
    renderer->RemoveActor(WS[SelShape]->getaxes());
  
    WS.erase(WS.begin()+SelShape);
    if(WS.size()!=0)
    WS.resize(WS.size());
    SelShape = -1;
    uiSelction(false);
    updateTable();
    renderer->Render();
    render_window->Render();
   
}
