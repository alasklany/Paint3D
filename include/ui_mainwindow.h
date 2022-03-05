/********************************************************************************
** Form generated from reading UI file 'mainwindowXPHggn.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWXPHGGN_H
#define MAINWINDOWXPHGGN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qvtkopenglnativewidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_cube;
    QPushButton *btn_sphere;
    QPushButton *btn_cone;
    QPushButton *btn_cylinder;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *btn_trans;
    QPushButton *btn_scale;
    QPushButton *btn_rotat;
    QComboBox *cmbo_camera;
    QComboBox *cmbo_grid;
    QGridLayout *gridLayout_2;
    QVTKOpenGLNativeWidget *scene;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_translation;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QDoubleSpinBox *trans_x_input;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QDoubleSpinBox *trans_y_input;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QDoubleSpinBox *trans_z_input;
    QGroupBox *groupBox_rotation;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QDoubleSpinBox *rotat_x_input;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QDoubleSpinBox *rotat_y_input;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QDoubleSpinBox *rotat_z_input;
    QStackedWidget *stackedWidget;
    QWidget *cube_page;
    QGroupBox *groupBox_cube_properties;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QDoubleSpinBox *cube_lx_input;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QDoubleSpinBox *cube_ly_input;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QDoubleSpinBox *cube_lz_input;
    QWidget *sphere_page;
    QGroupBox *groupBox_cube_properties_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QDoubleSpinBox *sphere_r_input;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QSpinBox *sphere_res_input;
    QWidget *cylinder_page;
    QGroupBox *groupBox_cube_properties_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QDoubleSpinBox *cylinder_r_input;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QDoubleSpinBox *cylinder_h_input;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_17;
    QSpinBox *cylinder_res_input;
    QWidget *cone_page;
    QGroupBox *groupBox_cube_properties_4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_16;
    QDoubleSpinBox *cone_r_input;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_18;
    QDoubleSpinBox *cone_h_input;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_19;
    QSpinBox *cone_res_input;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_shapeDelete;
    QPushButton *btn_shapeColor;
    QFrame *line;
    QTableWidget *ws_table;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 768);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/img/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"QMainWindow {\n"
"    background-color:#ececec;\n"
"\n"
"}\n"
"QPushButton, QToolButton, QCommandLinkButton{\n"
"    padding: 0 5px 0 5px;\n"
"    border-style: solid;\n"
"    border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-right-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-left-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    color: #616161;\n"
"    font-weight: bold;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #fbfdfd, stop:0.5 #ffffff, stop:1 #fbfdfd);\n"
"}\n"
"QPushButton::default, QToolButton::default, QCommandLinkButton::default{\n"
"    border: 2px solid transparent;\n"
"    color: #FFFFFF;\n"
"    backgroun"
                        "d-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QPushButton:hover, QToolButton:hover, QCommandLinkButton:hover{\n"
"    color: #3d3d3d;\n"
"}\n"
"QPushButton:pressed, QToolButton:pressed, QCommandLinkButton:pressed{\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}\n"
"QPushButton:disabled, QToolButton:disabled, QCommandLinkButton:disabled{\n"
"    color: #616161;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #dce7eb, stop:0.5 #e0e8eb, stop:1 #dee7ec);\n"
"}\n"
"QLineEdit, QTextEdit, QPlainTextEdit, QSpinBox, QDoubleSpinBox, QTimeEdit, QDateEdit, QDateTimeEdit {\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-right-color: qlineargradie"
                        "nt(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-left-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    background-color: #f4f4f4;\n"
"    color: #3d3d3d;\n"
"}\n"
"QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus, QSpinBox:focus, QDoubleSpinBox:focus, QTimeEdit:focus, QDateEdit:focus, QDateTimeEdit:focus {\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 #85b7e3, stop:1 #9ec1db);\n"
"    border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #85b7e3, stop:1 #9ec1db);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #85b7e3, stop:1 #9ec1db);\n"
"    border-left-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y"
                        "2:0, stop:0 #85b7e3, stop:1 #9ec1db);\n"
"    background-color: #f4f4f4;\n"
"    color: #3d3d3d;\n"
"}\n"
"QLineEdit:disabled, QTextEdit:disabled, QPlainTextEdit:disabled, QSpinBox:disabled, QDoubleSpinBox:disabled, QTimeEdit:disabled, QDateEdit:disabled, QDateTimeEdit:disabled {\n"
"    color: #b9b9b9;\n"
"}\n"
"QSpinBox::up-button, QDoubleSpinBox::up-button, QTimeEdit::up-button, QDateEdit::up-button, QDateTimeEdit::up-button {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"    color: #272727;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 3px;\n"
"    padding: 3px;\n"
"}\n"
"QSpinBox::down-button, QDoubleSpinBox::down-button, QTimeEdit::down-button, QDateEdit::down-button, QDateTimeEdit::down-button {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: bottom right;\n"
"    width: 15px;\n"
"    color: #272727;\n"
"    border-left-width: 1px;\n"
"    bord"
                        "er-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"    border-bottom-right-radius: 3px;\n"
"    padding: 3px;\n"
"}\n"
"QSpinBox::up-button:pressed, QDoubleSpinBox::up-button:pressed, QTimeEdit::up-button:pressed, QDateEdit::up-button:pressed, QDateTimeEdit::up-button:pressed {\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}\n"
"QSpinBox::down-button:pressed, QDoubleSpinBox::down-button:pressed, QTimeEdit::down-button:pressed, QDateEdit::down-button:pressed, QDateTimeEdit::down-button:pressed {\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}\n"
"QSpinBox::up-button:hover, QDoubleSpinBox::up-button:hover, QTimeEdit::up-button:hover, QDateEdit::up-button:hover, QDateTimeEdit::up-button:hover {\n"
"    color: #FFFFFF;\n"
"    border-top-right-radius: 5px;\n"
"    background-c"
                        "olor: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"    \n"
"}\n"
"QSpinBox::down-button:hover, QDoubleSpinBox::down-button:hover, QTimeEdit::down-button:hover, QDateEdit::down-button:hover, QDateTimeEdit::down-button:hover {\n"
"    color: #FFFFFF;\n"
"    border-bottom-right-radius: 5px;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QSpinBox::up-arrow, QDoubleSpinBox::up-arrow, QTimeEdit::up-arrow, QDateEdit::up-arrow, QDateTimeEdit::up-arrow {\n"
"    image: url(/usr/share/icons/Adwaita/16x16/actions/go-up-symbolic.symbolic.png);\n"
"}\n"
"QSpinBox::down-arrow, QDoubleSpinBox::down-arrow, QTimeEdit::down-arrow, QDateEdit::down-arrow, QDateTimeEdit::down-arrow {\n"
"    image: url(/usr/share/icons/Adwaita/16x16/actions/go-down-symbolic.symbolic.png);\n"
"}\n"
"QProgressBar {\n"
"    max-height: 8px;\n"
"    text-align: center;\n"
"    font: italic bold 11px;\n"
"    color: #3d3d3d;\n"
""
                        "    border: 1px solid transparent;\n"
"    border-radius:4px;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #ddd5d5, stop:0.5 #dad3d3, stop:1 #ddd5d5);\n"
"}\n"
"QProgressBar::chunk {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd1);\n"
"    border-radius: 4px;\n"
"}\n"
"QProgressBar:disabled {\n"
"    color: #616161;\n"
"}\n"
"QProgressBar::chunk:disabled {\n"
"    background-color: #aeaeae;\n"
"}\n"
"QSlider::groove {\n"
"    border: 1px solid #bbbbbb;\n"
"    background-color: #52595d;\n"
"    border-radius: 4px;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"    height: 6px;\n"
"}\n"
"QSlider::groove:vertical {\n"
"    width: 6px;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"    background: #ffffff;\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"    border-color: rgb(207,207,207);\n"
"    width: 12px;\n"
"    margin: -5px 0;\n"
"    border-radius: 7px;\n"
"}\n"
"QSlider::handle:verti"
                        "cal {\n"
"    background: #ffffff;\n"
"    border-style: solid;\n"
"    border-width: 1px;\n"
"    border-color: rgb(207,207,207);\n"
"    height: 12px;\n"
"    margin: 0 -5px;\n"
"    border-radius: 7px;\n"
"}\n"
"QSlider::add-page, QSlider::sub-page {\n"
"    border: 1px transparent;\n"
"    background-color: #52595d;\n"
"    border-radius: 4px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #ddd5d5, stop:0.5 #dad3d3, stop:1 #ddd5d5);\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd1);\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd1);\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #ddd5d5, stop:0.5 #dad3d3, stop:1 #ddd5d5);\n"
"}\n"
"Q"
                        "Slider::add-page:horizontal:disabled, QSlider::sub-page:horizontal:disabled, QSlider::add-page:vertical:disabled, QSlider::sub-page:vertical:disabled {\n"
"    background: #b9b9b9;\n"
"}\n"
"QComboBox, QFontComboBox {\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    border-style: solid;\n"
"    border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    border-left-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:0, stop:0 #c1c9cf, stop:1 #d2d8dd);\n"
"    background-color: #f4f4f4;\n"
"    color: #272727;\n"
"    padding-left: 5px;\n"
"}\n"
"QComboBox:editable, QComboBox:!editable, QComboBox::drop-down:editable, QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: #ffffff;\n"
"}\n"
""
                        "QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"    color: #272727;\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 3px;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"QComboBox::down-arrow {\n"
"    image: url(/usr/share/icons/Adwaita/16x16/actions/go-down-symbolic.symbolic.png); /*Adawaita icon thene*/\n"
"}\n"
"\n"
"QComboBox::down-arrow:on {\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid darkgray;\n"
"    border-radius: 8px;\n"
"    selection-background-color: #dadada;\n"
"    selection-color: #272727;\n"
"    color: #272727;\n"
"    background: white;\n"
"}\n"
"QLabel, QCheckBox, QRadioButton {\n"
"    color: #272727;\n"
"}\n"
"QCheckBox {\n"
"    padding: 2px;\n"
"}\n"
"QCheckBox:disabled, QRadioButton:disabled {\n"
"    color: #808086;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QCheckBox:h"
                        "over {\n"
"    border-radius:4px;\n"
"    border-style:solid;\n"
"    padding-left: 1px;\n"
"    padding-right: 1px;\n"
"    padding-bottom: 1px;\n"
"    padding-top: 1px;\n"
"    border-width:1px;\n"
"    border-color: transparent;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"    image: url(/usr/share/icons/Adwaita/16x16/actions/object-select-symbolic.symbolic.png);\n"
"    height: 15px;\n"
"    width: 15px;\n"
"    border-style:solid;\n"
"    border-width: 1px;\n"
"    border-color: #48a5fd;\n"
"    color: #ffffff;\n"
"    border-radius: 3px;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #48a5fd, stop:0.5 #329cfb, stop:1 #48a5fd);\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"    \n"
"    height: 15px;\n"
"    width: 15px;\n"
"    border-style:solid;\n"
"    border-width: 1px;\n"
"    border-color: #48a5fd;\n"
"    border-radius: 3px;\n"
"    background-color: #fbfdfa;\n"
"}\n"
"QLCDNumber {\n"
"    color: #616161;;\n"
"}\n"
"QMenuBar {\n"
"    background-color: #ecece"
                        "c;\n"
"}\n"
"QMenuBar::item {\n"
"    color: #616161;\n"
"    spacing: 3px;\n"
"    padding: 1px 4px;\n"
"    background-color: #ececec;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"    background-color: #dadada;\n"
"    color: #3d3d3d;\n"
"}\n"
"QMenu {\n"
"    background-color: #ececec;\n"
"}\n"
"QMenu::item:selected {\n"
"    background-color: #dadada;\n"
"    color: #3d3d3d;\n"
"}\n"
"QMenu::item {\n"
"    color: #616161;;\n"
"    background-color: #e0e0e0;\n"
"}\n"
"QTabWidget {\n"
"    color:rgb(0,0,0);\n"
"    background-color:#000000;\n"
"}\n"
"QTabWidget::pane {\n"
"    border-color: #050a0e;\n"
"    background-color: #e0e0e0;\n"
"    border-width: 1px;\n"
"    border-radius: 4px;\n"
"    position: absolute;\n"
"    top: -0.5em;\n"
"    padding-top: 0.5em;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    border-bottom: 1px solid #c0c0c0;\n"
"    padding: 3px;\n"
"    color: #272727;\n"
"    background-color: #fefefc;\n"
"    margin-left:0px;\n"
"}\n"
""
                        "QTabBar::tab:!last {\n"
"    border-right: 1px solid;\n"
"    border-right-color: #c0c0c0;\n"
"    border-bottom-color: #c0c0c0;\n"
"}\n"
"QTabBar::tab:first {\n"
"    border-top-left-radius: 4px;\n"
"    border-bottom-left-radius: 4px;\n"
"}\n"
"QTabBar::tab:last {\n"
"    border-top-right-radius: 4px;\n"
"    border-bottom-right-radius: 4px;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QRadioButton::indicator {\n"
"    height: 14px;\n"
"    width: 14px;\n"
"    border-style:solid;\n"
"    border-radius:7px;\n"
"    border-width: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"    border-color: #48a5fd;\n"
"    background-color: qradialgradient(cx:0.5, cy:0.5, radius:0.4,fx:0.5, fy:0.5, stop:0 #ffffff, stop:0.5 #ffffff, stop:0.6 #48a5fd, stop:1 #48a5fd);\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
"    border-color: #"
                        "a9b7c6;\n"
"    background-color: #fbfdfa;\n"
"}\n"
"QStatusBar {\n"
"    color:#027f7f;\n"
"}\n"
"\n"
"QDial {\n"
"    background: #16a085;\n"
"}\n"
"\n"
"QToolBox {\n"
"    color: #a9b7c6;\n"
"    background-color: #222b2e;\n"
"}\n"
"QToolBox::tab {\n"
"    color: #a9b7c6;\n"
"    background-color:#222b2e;\n"
"}\n"
"QToolBox::tab:selected {\n"
"    color: #FFFFFF;\n"
"    background-color:#222b2e;\n"
"}\n"
"QScrollArea {\n"
"    color: #FFFFFF;\n"
"    background-color:#222b2e;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"	max-height: 10px;\n"
"	border: 1px transparent grey;\n"
"	margin: 0px 20px 0px 20px;\n"
"	background: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"	max-width: 10px;\n"
"	border: 1px transparent grey;\n"
"	margin: 20px 0px 20px 0px;\n"
"	background: transparent;\n"
"}\n"
"QScrollBar::handle:vertical, QScrollBar::handle:horizontal {\n"
"	background: #52595d;\n"
"	border-style: transparent;\n"
"	border-radius: 4px;\n"
"	min-height: 25px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover, QScrol"
                        "lBar::handle:vertical:hover {\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd1);\n"
"}\n"
"QScrollBar::add-line, QScrollBar::sub-line {\n"
"    border: 2px transparent grey;\n"
"    border-radius: 4px;\n"
"    subcontrol-origin: margin;\n"
"    background: #b9b9b9;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"    width: 20px;\n"
"    subcontrol-position: right;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    height: 20px;\n"
"    subcontrol-position: bottom;\n"
"}\n"
"QScrollBar::sub-line:horizontal {\n"
"    width: 20px;\n"
"    subcontrol-position: left;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"    height: 20px;\n"
"    subcontrol-position: top;\n"
"}\n"
"QScrollBar::add-line:vertical:pressed, QScrollBar::add-line:horizontal:pressed, QScrollBar::sub-line:horizontal:pressed, QScrollBar::sub-line:vertical:pressed {\n"
"    background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #467dd1, stop:0.5 #3b88fc, stop:1 #467dd"
                        "1);\n"
"}\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal, QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}\n"
"QScrollBar::up-arrow:vertical {\n"
"    image: url(/usr/share/icons/Adwaita/16x16/actions/go-up-symbolic.symbolic.png);\n"
"}\n"
"QScrollBar::down-arrow:vertical {\n"
"    image: url(/usr/share/icons/Adwaita/16x16/actions/go-down-symbolic.symbolic.png);\n"
"}\n"
"QScrollBar::left-arrow:horizontal {\n"
"    image: url(/usr/share/icons/Adwaita/16x16/actions/go-previous-symbolic.symbolic.png);\n"
"}\n"
"QScrollBar::right-arrow:horizontal {\n"
"    image: url(/usr/share/icons/Adwaita/16x16/actions/go-next-symbolic.symbolic.png);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_cube = new QPushButton(centralwidget);
        btn_cube->setObjectName(QString::fromUtf8("btn_cube"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        btn_cube->setFont(font1);
        btn_cube->setStyleSheet(QString::fromUtf8("QPushButton#btn_cube{\n"
"border:none;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QPushButton#btn_cube:default{\n"
"    border: 2px solid #3d3d3d;\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QPushButton#btn_cube:hover{\n"
"    color: #3d3d3d;\n"
"}\n"
"QPushButton#btn_cube:pressed{\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/img/cube.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cube->setIcon(icon1);
        btn_cube->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(btn_cube);

        btn_sphere = new QPushButton(centralwidget);
        btn_sphere->setObjectName(QString::fromUtf8("btn_sphere"));
        btn_sphere->setFont(font1);
        btn_sphere->setStyleSheet(QString::fromUtf8("QPushButton#btn_sphere{\n"
"border:none;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QPushButton#btn_sphere:default{\n"
"    border: 2px solid #3d3d3d;\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QPushButton#btn_sphere:hover{\n"
"    color: #3d3d3d;\n"
"}\n"
"QPushButton#btn_sphere:pressed{\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/img/sphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_sphere->setIcon(icon2);
        btn_sphere->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(btn_sphere);

        btn_cone = new QPushButton(centralwidget);
        btn_cone->setObjectName(QString::fromUtf8("btn_cone"));
        btn_cone->setFont(font1);
        btn_cone->setStyleSheet(QString::fromUtf8("QPushButton#btn_cone{\n"
"border:none;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QPushButton#btn_cone:default{\n"
"    border: 2px solid #3d3d3d;\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QPushButton#btn_cone:hover{\n"
"    color: #3d3d3d;\n"
"}\n"
"QPushButton#btn_cone:pressed{\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/img/cone.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cone->setIcon(icon3);
        btn_cone->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(btn_cone);

        btn_cylinder = new QPushButton(centralwidget);
        btn_cylinder->setObjectName(QString::fromUtf8("btn_cylinder"));
        btn_cylinder->setFont(font1);
        btn_cylinder->setStyleSheet(QString::fromUtf8("QPushButton#btn_cylinder{\n"
"border:none;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QPushButton#btn_cylinder:default{\n"
"    border: 2px solid #3d3d3d;\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #84afe5, stop:1 #1168e4);\n"
"}\n"
"QPushButton#btn_cylinder:hover{\n"
"    color: #3d3d3d;\n"
"}\n"
"QPushButton#btn_cylinder:pressed{\n"
"    color: #aeaeae;\n"
"    background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 #ffffff, stop:0.5 #fbfdfd, stop:1 #ffffff);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/img/cylinder.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cylinder->setIcon(icon4);
        btn_cylinder->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(btn_cylinder);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout->setContentsMargins(-1, -1, 0, -1);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btn_trans = new QPushButton(frame);
        buttonGroup_3 = new QButtonGroup(MainWindow);
        buttonGroup_3->setObjectName(QString::fromUtf8("buttonGroup_3"));
        buttonGroup_3->addButton(btn_trans);
        btn_trans->setObjectName(QString::fromUtf8("btn_trans"));
        btn_trans->setGeometry(QRect(300, 5, 50, 35));
        btn_trans->setStyleSheet(QString::fromUtf8("QPushButton#btn_trans{\n"
"border-radius : 20px;\n"
"}\n"
"\n"
"QPushButton:pressed, QToolButton:pressed, QCommandLinkButton:pressed{\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"\n"
"}\n"
"QPushButton:checked, QToolButton:pressed, QCommandLinkButton:pressed{\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"\n"
"}\n"
""));
        btn_trans->setIcon(icon3);
        btn_trans->setCheckable(true);
        btn_scale = new QPushButton(frame);
        buttonGroup_3->addButton(btn_scale);
        btn_scale->setObjectName(QString::fromUtf8("btn_scale"));
        btn_scale->setGeometry(QRect(255, 5, 50, 35));
        btn_scale->setStyleSheet(QString::fromUtf8("QPushButton:pressed, QToolButton:pressed, QCommandLinkButton:pressed{\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"\n"
"}\n"
"QPushButton:checked, QToolButton:pressed, QCommandLinkButton:pressed{\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"\n"
"}"));
        btn_scale->setIcon(icon1);
        btn_scale->setCheckable(true);
        btn_rotat = new QPushButton(frame);
        buttonGroup_3->addButton(btn_rotat);
        btn_rotat->setObjectName(QString::fromUtf8("btn_rotat"));
        btn_rotat->setGeometry(QRect(345, 5, 50, 35));
        btn_rotat->setStyleSheet(QString::fromUtf8("QPushButton:pressed, QToolButton:pressed, QCommandLinkButton:pressed{\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"\n"
"}\n"
"QPushButton:checked, QToolButton:pressed, QCommandLinkButton:pressed{\n"
"    \n"
"	background-color: rgb(255, 255, 0);\n"
"\n"
"}"));
        btn_rotat->setIcon(icon2);
        btn_rotat->setCheckable(true);
        cmbo_camera = new QComboBox(frame);
        cmbo_camera->addItem(QString());
        cmbo_camera->addItem(QString());
        cmbo_camera->addItem(QString());
        cmbo_camera->addItem(QString());
        cmbo_camera->addItem(QString());
        cmbo_camera->setObjectName(QString::fromUtf8("cmbo_camera"));
        cmbo_camera->setGeometry(QRect(5, 5, 100, 35));
        cmbo_camera->setFont(font1);
        cmbo_grid = new QComboBox(frame);
        cmbo_grid->addItem(QString());
        cmbo_grid->addItem(QString());
        cmbo_grid->addItem(QString());
        cmbo_grid->addItem(QString());
        cmbo_grid->addItem(QString());
        cmbo_grid->setObjectName(QString::fromUtf8("cmbo_grid"));
        cmbo_grid->setGeometry(QRect(110, 5, 120, 35));
        cmbo_grid->setFont(font1);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        scene = new QVTKOpenGLNativeWidget(frame);
        scene->setObjectName(QString::fromUtf8("scene"));
        QFont font2;
        scene->setFont(font2);
        scene->setStyleSheet(QString::fromUtf8("border-radius:10px;"));

        gridLayout_2->addWidget(scene, 0, 0, 1, 1);

        scene->raise();
        cmbo_camera->raise();
        cmbo_grid->raise();
        btn_trans->raise();
        btn_rotat->raise();
        btn_scale->raise();

        gridLayout->addWidget(frame, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(1, 10);

        horizontalLayout->addLayout(verticalLayout);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(5, 5, 5, 5);
        groupBox_translation = new QGroupBox(groupBox);
        groupBox_translation->setObjectName(QString::fromUtf8("groupBox_translation"));
        groupBox_translation->setFont(font);
        groupBox_translation->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(groupBox_translation);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(groupBox_translation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        trans_x_input = new QDoubleSpinBox(groupBox_translation);
        trans_x_input->setObjectName(QString::fromUtf8("trans_x_input"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        trans_x_input->setFont(font3);
        trans_x_input->setStyleSheet(QString::fromUtf8(""));
        trans_x_input->setAlignment(Qt::AlignCenter);
        trans_x_input->setMinimum(-1000.000000000000000);
        trans_x_input->setMaximum(1000.000000000000000);
        trans_x_input->setSingleStep(0.100000000000000);

        horizontalLayout_4->addWidget(trans_x_input);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(groupBox_translation);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:green;"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_3);

        trans_y_input = new QDoubleSpinBox(groupBox_translation);
        trans_y_input->setObjectName(QString::fromUtf8("trans_y_input"));
        trans_y_input->setFont(font3);
        trans_y_input->setStyleSheet(QString::fromUtf8(""));
        trans_y_input->setAlignment(Qt::AlignCenter);
        trans_y_input->setMinimum(-1000.000000000000000);
        trans_y_input->setMaximum(1000.000000000000000);
        trans_y_input->setSingleStep(0.100000000000000);

        horizontalLayout_6->addWidget(trans_y_input);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(groupBox_translation);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_4);

        trans_z_input = new QDoubleSpinBox(groupBox_translation);
        trans_z_input->setObjectName(QString::fromUtf8("trans_z_input"));
        trans_z_input->setFont(font3);
        trans_z_input->setStyleSheet(QString::fromUtf8(""));
        trans_z_input->setAlignment(Qt::AlignCenter);
        trans_z_input->setMinimum(-1000.000000000000000);
        trans_z_input->setMaximum(1000.000000000000000);
        trans_z_input->setSingleStep(0.100000000000000);

        horizontalLayout_7->addWidget(trans_z_input);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_6->addWidget(groupBox_translation);

        groupBox_rotation = new QGroupBox(groupBox);
        groupBox_rotation->setObjectName(QString::fromUtf8("groupBox_rotation"));
        groupBox_rotation->setFont(font);
        groupBox_rotation->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        verticalLayout_4 = new QVBoxLayout(groupBox_rotation);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(groupBox_rotation);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_5);

        rotat_x_input = new QDoubleSpinBox(groupBox_rotation);
        rotat_x_input->setObjectName(QString::fromUtf8("rotat_x_input"));
        rotat_x_input->setFont(font3);
        rotat_x_input->setStyleSheet(QString::fromUtf8(""));
        rotat_x_input->setAlignment(Qt::AlignCenter);
        rotat_x_input->setMinimum(-180.000000000000000);
        rotat_x_input->setMaximum(180.000000000000000);
        rotat_x_input->setSingleStep(1.000000000000000);

        horizontalLayout_8->addWidget(rotat_x_input);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 3);

        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(groupBox_rotation);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color:green;"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_6);

        rotat_y_input = new QDoubleSpinBox(groupBox_rotation);
        rotat_y_input->setObjectName(QString::fromUtf8("rotat_y_input"));
        rotat_y_input->setFont(font3);
        rotat_y_input->setStyleSheet(QString::fromUtf8(""));
        rotat_y_input->setAlignment(Qt::AlignCenter);
        rotat_y_input->setMinimum(-180.000000000000000);
        rotat_y_input->setMaximum(180.000000000000000);
        rotat_y_input->setSingleStep(1.000000000000000);

        horizontalLayout_9->addWidget(rotat_y_input);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 3);

        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_7 = new QLabel(groupBox_rotation);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_7);

        rotat_z_input = new QDoubleSpinBox(groupBox_rotation);
        rotat_z_input->setObjectName(QString::fromUtf8("rotat_z_input"));
        rotat_z_input->setFont(font3);
        rotat_z_input->setStyleSheet(QString::fromUtf8(""));
        rotat_z_input->setAlignment(Qt::AlignCenter);
        rotat_z_input->setMinimum(-180.000000000000000);
        rotat_z_input->setMaximum(180.000000000000000);
        rotat_z_input->setSingleStep(1.000000000000000);

        horizontalLayout_10->addWidget(rotat_z_input);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 3);

        verticalLayout_4->addLayout(horizontalLayout_10);


        verticalLayout_6->addWidget(groupBox_rotation);

        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(250, 150));
        stackedWidget->setMaximumSize(QSize(250, 150));
        stackedWidget->setFont(font2);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        cube_page = new QWidget();
        cube_page->setObjectName(QString::fromUtf8("cube_page"));
        cube_page->setMinimumSize(QSize(250, 150));
        groupBox_cube_properties = new QGroupBox(cube_page);
        groupBox_cube_properties->setObjectName(QString::fromUtf8("groupBox_cube_properties"));
        groupBox_cube_properties->setGeometry(QRect(0, 0, 250, 150));
        groupBox_cube_properties->setMinimumSize(QSize(140, 140));
        groupBox_cube_properties->setFont(font);
        groupBox_cube_properties->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        verticalLayout_3 = new QVBoxLayout(groupBox_cube_properties);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(groupBox_cube_properties);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_8);

        cube_lx_input = new QDoubleSpinBox(groupBox_cube_properties);
        cube_lx_input->setObjectName(QString::fromUtf8("cube_lx_input"));
        cube_lx_input->setFont(font3);
        cube_lx_input->setStyleSheet(QString::fromUtf8(""));
        cube_lx_input->setAlignment(Qt::AlignCenter);
        cube_lx_input->setMinimum(-1000.000000000000000);
        cube_lx_input->setMaximum(1000.000000000000000);
        cube_lx_input->setSingleStep(0.100000000000000);

        horizontalLayout_11->addWidget(cube_lx_input);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 3);

        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_9 = new QLabel(groupBox_cube_properties);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color:green;"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_9);

        cube_ly_input = new QDoubleSpinBox(groupBox_cube_properties);
        cube_ly_input->setObjectName(QString::fromUtf8("cube_ly_input"));
        cube_ly_input->setFont(font3);
        cube_ly_input->setStyleSheet(QString::fromUtf8(""));
        cube_ly_input->setAlignment(Qt::AlignCenter);
        cube_ly_input->setMinimum(-1000.000000000000000);
        cube_ly_input->setMaximum(1000.000000000000000);
        cube_ly_input->setSingleStep(0.100000000000000);

        horizontalLayout_12->addWidget(cube_ly_input);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 3);

        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_10 = new QLabel(groupBox_cube_properties);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_10);

        cube_lz_input = new QDoubleSpinBox(groupBox_cube_properties);
        cube_lz_input->setObjectName(QString::fromUtf8("cube_lz_input"));
        cube_lz_input->setFont(font3);
        cube_lz_input->setStyleSheet(QString::fromUtf8(""));
        cube_lz_input->setAlignment(Qt::AlignCenter);
        cube_lz_input->setMinimum(-1000.000000000000000);
        cube_lz_input->setMaximum(1000.000000000000000);
        cube_lz_input->setSingleStep(0.100000000000000);

        horizontalLayout_13->addWidget(cube_lz_input);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 3);

        verticalLayout_3->addLayout(horizontalLayout_13);

        stackedWidget->addWidget(cube_page);
        sphere_page = new QWidget();
        sphere_page->setObjectName(QString::fromUtf8("sphere_page"));
        sphere_page->setMinimumSize(QSize(250, 150));
        sphere_page->setMaximumSize(QSize(16777215, 16777215));
        groupBox_cube_properties_2 = new QGroupBox(sphere_page);
        groupBox_cube_properties_2->setObjectName(QString::fromUtf8("groupBox_cube_properties_2"));
        groupBox_cube_properties_2->setGeometry(QRect(0, 0, 250, 150));
        groupBox_cube_properties_2->setMinimumSize(QSize(240, 140));
        groupBox_cube_properties_2->setMaximumSize(QSize(16777215, 16777215));
        groupBox_cube_properties_2->setFont(font);
        groupBox_cube_properties_2->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        verticalLayout_7 = new QVBoxLayout(groupBox_cube_properties_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_12 = new QLabel(groupBox_cube_properties_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8(""));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_12);

        sphere_r_input = new QDoubleSpinBox(groupBox_cube_properties_2);
        sphere_r_input->setObjectName(QString::fromUtf8("sphere_r_input"));
        sphere_r_input->setFont(font3);
        sphere_r_input->setStyleSheet(QString::fromUtf8(""));
        sphere_r_input->setAlignment(Qt::AlignCenter);
        sphere_r_input->setMinimum(-1000.000000000000000);
        sphere_r_input->setMaximum(1000.000000000000000);
        sphere_r_input->setSingleStep(0.100000000000000);

        horizontalLayout_15->addWidget(sphere_r_input);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 3);

        verticalLayout_7->addLayout(horizontalLayout_15);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_15 = new QLabel(groupBox_cube_properties_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8(""));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label_15);

        sphere_res_input = new QSpinBox(groupBox_cube_properties_2);
        sphere_res_input->setObjectName(QString::fromUtf8("sphere_res_input"));
        sphere_res_input->setFont(font3);
        sphere_res_input->setStyleSheet(QString::fromUtf8(""));
        sphere_res_input->setAlignment(Qt::AlignCenter);
        sphere_res_input->setMinimum(1);
        sphere_res_input->setMaximum(1000);

        horizontalLayout_18->addWidget(sphere_res_input);

        horizontalLayout_18->setStretch(0, 1);
        horizontalLayout_18->setStretch(1, 3);

        verticalLayout_7->addLayout(horizontalLayout_18);

        stackedWidget->addWidget(sphere_page);
        cylinder_page = new QWidget();
        cylinder_page->setObjectName(QString::fromUtf8("cylinder_page"));
        cylinder_page->setMinimumSize(QSize(250, 150));
        groupBox_cube_properties_3 = new QGroupBox(cylinder_page);
        groupBox_cube_properties_3->setObjectName(QString::fromUtf8("groupBox_cube_properties_3"));
        groupBox_cube_properties_3->setGeometry(QRect(0, 0, 250, 150));
        groupBox_cube_properties_3->setMinimumSize(QSize(140, 140));
        groupBox_cube_properties_3->setFont(font);
        groupBox_cube_properties_3->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        verticalLayout_5 = new QVBoxLayout(groupBox_cube_properties_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_13 = new QLabel(groupBox_cube_properties_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8(""));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_13);

        cylinder_r_input = new QDoubleSpinBox(groupBox_cube_properties_3);
        cylinder_r_input->setObjectName(QString::fromUtf8("cylinder_r_input"));
        cylinder_r_input->setFont(font3);
        cylinder_r_input->setStyleSheet(QString::fromUtf8(""));
        cylinder_r_input->setAlignment(Qt::AlignCenter);
        cylinder_r_input->setMinimum(-1000.000000000000000);
        cylinder_r_input->setMaximum(1000.000000000000000);
        cylinder_r_input->setSingleStep(0.100000000000000);

        horizontalLayout_16->addWidget(cylinder_r_input);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 3);

        verticalLayout_5->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_14 = new QLabel(groupBox_cube_properties_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8(""));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(label_14);

        cylinder_h_input = new QDoubleSpinBox(groupBox_cube_properties_3);
        cylinder_h_input->setObjectName(QString::fromUtf8("cylinder_h_input"));
        cylinder_h_input->setFont(font3);
        cylinder_h_input->setStyleSheet(QString::fromUtf8(""));
        cylinder_h_input->setAlignment(Qt::AlignCenter);
        cylinder_h_input->setMinimum(-1000.000000000000000);
        cylinder_h_input->setMaximum(1000.000000000000000);
        cylinder_h_input->setSingleStep(0.100000000000000);

        horizontalLayout_17->addWidget(cylinder_h_input);

        horizontalLayout_17->setStretch(0, 1);
        horizontalLayout_17->setStretch(1, 3);

        verticalLayout_5->addLayout(horizontalLayout_17);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_17 = new QLabel(groupBox_cube_properties_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8(""));
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(label_17);

        cylinder_res_input = new QSpinBox(groupBox_cube_properties_3);
        cylinder_res_input->setObjectName(QString::fromUtf8("cylinder_res_input"));
        cylinder_res_input->setFont(font3);
        cylinder_res_input->setStyleSheet(QString::fromUtf8(""));
        cylinder_res_input->setAlignment(Qt::AlignCenter);
        cylinder_res_input->setMinimum(1);
        cylinder_res_input->setMaximum(1000);

        horizontalLayout_20->addWidget(cylinder_res_input);

        horizontalLayout_20->setStretch(0, 1);
        horizontalLayout_20->setStretch(1, 2);

        verticalLayout_5->addLayout(horizontalLayout_20);

        stackedWidget->addWidget(cylinder_page);
        cone_page = new QWidget();
        cone_page->setObjectName(QString::fromUtf8("cone_page"));
        cone_page->setMinimumSize(QSize(250, 150));
        groupBox_cube_properties_4 = new QGroupBox(cone_page);
        groupBox_cube_properties_4->setObjectName(QString::fromUtf8("groupBox_cube_properties_4"));
        groupBox_cube_properties_4->setGeometry(QRect(0, 0, 250, 150));
        groupBox_cube_properties_4->setMinimumSize(QSize(140, 140));
        groupBox_cube_properties_4->setFont(font);
        groupBox_cube_properties_4->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        verticalLayout_9 = new QVBoxLayout(groupBox_cube_properties_4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_16 = new QLabel(groupBox_cube_properties_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8(""));
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(label_16);

        cone_r_input = new QDoubleSpinBox(groupBox_cube_properties_4);
        cone_r_input->setObjectName(QString::fromUtf8("cone_r_input"));
        cone_r_input->setFont(font3);
        cone_r_input->setStyleSheet(QString::fromUtf8(""));
        cone_r_input->setAlignment(Qt::AlignCenter);
        cone_r_input->setDecimals(2);
        cone_r_input->setMinimum(-1000.000000000000000);
        cone_r_input->setMaximum(1000.000000000000000);
        cone_r_input->setSingleStep(0.100000000000000);

        horizontalLayout_19->addWidget(cone_r_input);

        horizontalLayout_19->setStretch(0, 1);
        horizontalLayout_19->setStretch(1, 3);

        verticalLayout_9->addLayout(horizontalLayout_19);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_18 = new QLabel(groupBox_cube_properties_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8(""));
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(label_18);

        cone_h_input = new QDoubleSpinBox(groupBox_cube_properties_4);
        cone_h_input->setObjectName(QString::fromUtf8("cone_h_input"));
        cone_h_input->setFont(font3);
        cone_h_input->setStyleSheet(QString::fromUtf8(""));
        cone_h_input->setAlignment(Qt::AlignCenter);
        cone_h_input->setDecimals(2);
        cone_h_input->setMinimum(-1000.000000000000000);
        cone_h_input->setMaximum(1000.000000000000000);
        cone_h_input->setSingleStep(0.100000000000000);

        horizontalLayout_21->addWidget(cone_h_input);

        horizontalLayout_21->setStretch(0, 1);
        horizontalLayout_21->setStretch(1, 3);

        verticalLayout_9->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_19 = new QLabel(groupBox_cube_properties_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8(""));
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(label_19);

        cone_res_input = new QSpinBox(groupBox_cube_properties_4);
        cone_res_input->setObjectName(QString::fromUtf8("cone_res_input"));
        cone_res_input->setFont(font3);
        cone_res_input->setStyleSheet(QString::fromUtf8(""));
        cone_res_input->setAlignment(Qt::AlignCenter);
        cone_res_input->setMinimum(1);
        cone_res_input->setMaximum(1000);

        horizontalLayout_22->addWidget(cone_res_input);

        horizontalLayout_22->setStretch(0, 1);
        horizontalLayout_22->setStretch(1, 2);

        verticalLayout_9->addLayout(horizontalLayout_22);

        stackedWidget->addWidget(cone_page);

        verticalLayout_6->addWidget(stackedWidget, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_shapeDelete = new QPushButton(groupBox);
        btn_shapeDelete->setObjectName(QString::fromUtf8("btn_shapeDelete"));
        btn_shapeDelete->setFont(font1);
        btn_shapeDelete->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(btn_shapeDelete);

        btn_shapeColor = new QPushButton(groupBox);
        btn_shapeColor->setObjectName(QString::fromUtf8("btn_shapeColor"));
        btn_shapeColor->setFont(font1);
        btn_shapeColor->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(btn_shapeColor);


        verticalLayout_6->addLayout(horizontalLayout_5);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFont(font2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        ws_table = new QTableWidget(groupBox);
        if (ws_table->columnCount() < 3)
            ws_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ws_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ws_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ws_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        ws_table->setObjectName(QString::fromUtf8("ws_table"));
        ws_table->setFont(font2);
        ws_table->setStyleSheet(QString::fromUtf8("color: rgb(53, 53, 53);"));
        ws_table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        ws_table->setAutoScrollMargin(10);
        ws_table->setSelectionMode(QAbstractItemView::SingleSelection);
        ws_table->setTextElideMode(Qt::ElideNone);
        ws_table->setWordWrap(true);
        ws_table->setCornerButtonEnabled(false);
        ws_table->horizontalHeader()->setCascadingSectionResizes(true);
        ws_table->horizontalHeader()->setHighlightSections(false);
        ws_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        ws_table->horizontalHeader()->setStretchLastSection(true);
        ws_table->verticalHeader()->setVisible(false);
        ws_table->verticalHeader()->setMinimumSectionSize(20);
        ws_table->verticalHeader()->setDefaultSectionSize(20);
        ws_table->verticalHeader()->setHighlightSections(false);
        ws_table->verticalHeader()->setStretchLastSection(false);

        verticalLayout_6->addWidget(ws_table);

        verticalLayout_6->setStretch(2, 1);
        verticalLayout_6->setStretch(5, 1);

        horizontalLayout->addWidget(groupBox);

        horizontalLayout->setStretch(0, 10);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_cube->setText(QString());
        btn_sphere->setText(QString());
        btn_cone->setText(QString());
        btn_cylinder->setText(QString());
        btn_trans->setText(QString());
        btn_scale->setText(QString());
        btn_rotat->setText(QString());
        cmbo_camera->setItemText(0, QCoreApplication::translate("MainWindow", "1 x 1", nullptr));
        cmbo_camera->setItemText(1, QCoreApplication::translate("MainWindow", "5 x 5", nullptr));
        cmbo_camera->setItemText(2, QCoreApplication::translate("MainWindow", "10 x 10", nullptr));
        cmbo_camera->setItemText(3, QCoreApplication::translate("MainWindow", "15 x 15", nullptr));
        cmbo_camera->setItemText(4, QCoreApplication::translate("MainWindow", "20 x 20", nullptr));

        cmbo_grid->setItemText(0, QCoreApplication::translate("MainWindow", "Prospective", nullptr));
        cmbo_grid->setItemText(1, QCoreApplication::translate("MainWindow", "Top", nullptr));
        cmbo_grid->setItemText(2, QCoreApplication::translate("MainWindow", "left", nullptr));
        cmbo_grid->setItemText(3, QCoreApplication::translate("MainWindow", "right", nullptr));
        cmbo_grid->setItemText(4, QCoreApplication::translate("MainWindow", "Bottom", nullptr));

        groupBox->setTitle(QString());
        groupBox_translation->setTitle(QCoreApplication::translate("MainWindow", "Translation", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        groupBox_rotation->setTitle(QCoreApplication::translate("MainWindow", "Rotation", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        groupBox_cube_properties->setTitle(QCoreApplication::translate("MainWindow", "Cube", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "LX", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "LY", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "LZ", nullptr));
        groupBox_cube_properties_2->setTitle(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Raduis", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Resolution", nullptr));
        groupBox_cube_properties_3->setTitle(QCoreApplication::translate("MainWindow", "Cylinder", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Raduis", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Resolution", nullptr));
        groupBox_cube_properties_4->setTitle(QCoreApplication::translate("MainWindow", "Cone", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Raduis", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Resolution", nullptr));
        btn_shapeDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        btn_shapeColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ws_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ws_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Shape", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ws_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWXPHGGN_H
