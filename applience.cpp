#include "applience.h"

Applience::Applience(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Constructed";
}

bool Applience::cook() { return true; }

bool Applience::grill() { return true; }

bool Applience::freez() { return true; }
