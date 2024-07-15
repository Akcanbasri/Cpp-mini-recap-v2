#ifndef MAMMAL_H
#define MAMMAL_H

#include "animal.h"
#include <QDebug>
#include <QObject>

class Mammal : public Animal
{
    Q_OBJECT
public:
    explicit Mammal(QObject *parent = nullptr);

    bool hasBackBone() { return true; }

signals:
};

#endif // MAMMAL_H
