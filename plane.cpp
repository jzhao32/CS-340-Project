#include "plane.h"
#include "ui_plane.h"

plane::plane(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::plane)
{
    ui->setupUi(this);
}

plane::~plane()
{
    delete ui;
}
