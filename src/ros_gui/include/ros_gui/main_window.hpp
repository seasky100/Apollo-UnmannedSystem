/**
 * @file /include/ros_gui/main_window.hpp
 *
 * @brief Qt based gui for ros_gui.
 *
 * @date November 2010
 **/
#ifndef ros_gui_MAIN_WINDOW_H
#define ros_gui_MAIN_WINDOW_H

//#include <QtGui/QMainWindow> //qt4/qt5
#include "QMainWindow"
#include "ui_main_window.h"
#include "qnode.hpp"

#include <qfiledialog.h>
#include <qfileinfo.h>
#include <qlistview.h>
#include <qstringlistmodel.h>
#include <QThread>

//rviz
//#ifndef Q_MOC_RUN //避免Qt的Moc工具对Boost的代码进行Moc
//#include <ros/ros.h>
#include <rviz/visualization_manager.h>
#include <rviz/render_panel.h>
#include <rviz/display.h>
//#endif

namespace rviz {
class Display;
class RenderPanel;
class VisualizationManager;
}

namespace ros_gui {

//class WorkerThread : public QObject
//{
//    Q_OBJECT
//
//public:
//    WorkerThread(QObject *parent = 0);
//    //~WorkerThread();
//
//public Q_SLOTS:
//    void computeSth();
//};


class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(int argc, char** argv, QWidget *parent = 0);
    ~MainWindow();

private:
    //ros_gui::MainWindow *ui;
    Ui::MainWindowDesign ui;
    QNode qnode;

    rviz::VisualizationManager *manager;
    rviz::RenderPanel *renderPanel;
    rviz::Display *displayGrid;
    /*rviz::VisualizationManager *manager_2;
    rviz::VisualizationManager *manager2_1;
    rviz::VisualizationManager *manager2_2;
    rviz::VisualizationManager *manager3_1;
    rviz::VisualizationManager *manager3_2;
    rviz::RenderPanel *renderPanel_1;
    rviz::RenderPanel *renderPanel_2;
    rviz::RenderPanel *renderPanel2_1;
    rviz::RenderPanel *renderPanel2_2;
    rviz::RenderPanel *renderPanel3_1;
    rviz::RenderPanel *renderPanel3_2;
    rviz::Display *displayGrid_1;
    rviz::Display *displayGrid_2;
    rviz::Display *displayGrid2_1;
    rviz::Display *displayGrid2_2;
    rviz::Display *displayGrid3_1;
    rviz::Display *displayGrid3_2;*/


private Q_SLOTS:
    void modeSwitch();

    void loadMap();
    void pushButton_confirmStart_pressed();
    void pushButton_cancel_pressed();
    void pushButton_confirm_pressed();
    void startALL();
    void startPercep();
    void startLocal();
    void startSensor();
    void showReference();
    void showObstacles();
    void showImage();
    void showPointcloud();


    void loadMap2();
    void pushButton_confirmStart_pressed2();
    void pushButton_cancel_pressed2();
    void pushButton_confirm_pressed2();
    void startALL2();
    void startPercep2();
    void startLocal2();
    void startSensor2();
    void showReference2();
    void showObstacles2();
    void showImage2();
    void showPointcloud2();


    void startMapping();
    void endMapping();
    void recording();
    void startALL3();
    void startPercep3();
    void startLocal3();
    void startSensor3();
    void showReference3();
    void showObstacles3();
    void showImage3();
    void showPointcloud3();
};

}  // namespace ros_gui

#endif // ros_gui_MAIN_WINDOW_H
