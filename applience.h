#ifndef APPLIENCE_H
#define APPLIENCE_H

#include "Freezer.h"
#include "Microwave.h"
#include "Toaster.h"
#include <QDebug>
#include <QObject>

class Applience : public QObject, public Freezer, Toaster, Microwave {
    Q_OBJECT
public:
    explicit Applience(QObject *parent = nullptr);
    // Microwave interface

    bool cook();

    // Toaster interface

    bool grill();

    // Freezer interface

    bool freez();

signals:


};

#endif // APPLIENCE_H
