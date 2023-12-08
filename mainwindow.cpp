#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include "visitwebsitedialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/a/resources/logo1.jpeg");
//    int w = ui->label_pic_1->width();
//    int h = ui->label_pic_1->height();
    ui->label_pic_1->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
//    VisitWebsiteDialog visitWebsiteDialog;
//    visitWebsiteDialog.setModal(true);
//    visitWebsiteDialog.exec();
    VisitWebsiteDialog* visitWebsiteDialog = new VisitWebsiteDialog(this);
    visitWebsiteDialog->show();

}

