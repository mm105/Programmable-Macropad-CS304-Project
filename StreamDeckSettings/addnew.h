#ifndef ADDNEW_H
#define ADDNEW_H

#include <QDialog>

namespace Ui {
class AddNew;
}

class AddNew : public QDialog
{
    Q_OBJECT

public:
    explicit AddNew(QWidget *parent = nullptr);
    ~AddNew();
    QString returnLineEdit();

private:
    Ui::AddNew *ui;
};

#endif // ADDNEW_H
