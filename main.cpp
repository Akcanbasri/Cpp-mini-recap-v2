#include "animal.h"
#include "applience.h"
#include "canine.h"
#include "feline.h"
#include "laptop.h"
#include "lion.h"
#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"

void test(Laptop &machine) { machine.test(); }

void makeLaptops() {
    // The stack
    Laptop mine(nullptr, "my laptop");
    Laptop your(nullptr, "your laptop");

    mine.weight = 3;
    your.weight = 5;

    test(mine);
    test(your);

    // Will be deleted from stack automaticly
}

void printAges(AgeCalc &cal){
    qInfo() << cal.name() << "is " << cal.age() << "yers old as human age";
    qInfo() << cal.name() << "is " << cal.catYears() << "yers old as cat age";
    qInfo() << cal.name() << "is " << cal.dogYears() << "yers old as dog age";
}
int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    // makeLaptops();

    // Animal animal;

    // Canine dog;
    // dog.bark();
    // Feline cat;
    // cat.meow();

    // Applience machine2000;
    // qInfo() << "Cook:" << machine2000.cook();
    // qInfo() << "Freeze:" << machine2000.freez();
    // qInfo() << "Grill:" << machine2000.grill();

    // Lion leo;
    // leo.meow();


    AgeCalc basri;
    AgeCalc yunus;

    basri.setName("Basri");
    basri.setAge(24);
    yunus.setName("Yunus");
    yunus.setAge(20);
    printAges(basri);
    qInfo() << "******************************************";
    printAges(yunus);


    return a.exec();
}
