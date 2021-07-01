#include "Info.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
            this->setWindowTitle("Info");
}

Dialog::~Dialog()
{
    delete ui;
}
