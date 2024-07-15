#include "lion.h"

Lion::Lion(QObject *parent)
    : Feline{parent}
{
    qInfo() << this << "Constracted";
}

void Lion::meow() { qInfo() << this << "ROAR!!!!";
    Feline::meow();
}
