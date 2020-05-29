#include "addnew.h"
#include "ui_addnew.h"

AddNew::AddNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNew)
{
    ui->setupUi(this);
}

AddNew::~AddNew()
{
    delete ui;
}


QString AddNew::returnLineEdit() {
      QLineEdit *name = AddNew::findChild<QLineEdit *>("name");
    return name->text();
}
