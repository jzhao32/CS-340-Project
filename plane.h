#ifndef PLANE_H
#define PLANE_H

#include <QMainWindow>

namespace Ui {
class plane;
}

class plane : public QMainWindow
{
    Q_OBJECT

public:
    explicit plane(QWidget *parent = 0);
    ~plane();

private:
    Ui::plane *ui;
};

#endif // PLANE_H
