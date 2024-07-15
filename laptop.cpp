#include "laptop.h"

Laptop::Laptop(QObject *parent, QString name) : QObject{parent} {
    this->name = name;
    qInfo() << this << "Construntor" << name;
}

Laptop::~Laptop() {
    qInfo() << this << "Deconstruntor" << name;
}

double Laptop::asKg()
{
    return weight * 0.453592;
}

void Laptop::test()
{
    qInfo() << this << "Test" << name << "Kilogram:" << asKg();
}
