#ifndef LAPTOP_H
#define LAPTOP_H

#include <QDebug>
#include <QObject>

class Laptop : public QObject
{
    Q_OBJECT
public:
    // Constructor
    explicit Laptop(QObject *parent = nullptr, QString name = "");

    // Deconstructor
    ~Laptop();

    // variables
    int weight;
    QString name;

    // functions
    double asKg();
    void test();

signals:
};

#endif // LAPTOP_H
