#ifndef LION_H
#define LION_H

#include <QObject>
#include "feline.h"

class Lion : public Feline
{
    Q_OBJECT
public:
    explicit Lion(QObject *parent = nullptr);
    void meow();

signals:
};

#endif // LION_H
