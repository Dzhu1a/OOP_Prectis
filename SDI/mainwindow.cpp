#include "mainwindow.h"
#include <QString>
#include "product.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   bool productId = ui->leId->text().isEmpty();
   QString name = ui->lineEdit->text().isEmpty();
   QString manufacturer = ui->lineEdit_2->text().isEmpty();
    QString price = ui->lineEdit_3->text().isEmpty();
     bool shelfLife = ui->lineEdit_4->text().isEmpty();
      bool quantity = ui->lineEdit_5->text().isEmpty();
       QString storage = ui->lineEdit_6->text().isEmpty();
        bool caloriesPer100g = ui->lineEdit_7->text().isEmpty();
         QString labl = ui->lineEdit_8->text().isEmpty();
          QString labl = ui->lineEdit_9->text().isEmpty();
           QString labl = ui->lineEdit_10->text().isEmpty();



}

MainWindow::~MainWindow()
{
    delete ui;
}

