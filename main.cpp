#include "animal.h"
#include "canine.h"
#include "feline.h"
#include "laptop.h"
#include <QCoreApplication>

void test(Laptop &machine) { machine.test(); }

void makeLaptops(){
    // The stack
    Laptop mine(nullptr, "my laptop");
    Laptop your(nullptr, "your laptop");

    mine.weight = 3;
    your.weight = 5;

    test(mine);
    test(your);

    // Will be deleted from stack automaticly
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // makeLaptops();

    // Animal animal;

    Canine dog;
    dog.bark();
    Feline cat;
    cat.meow();

    return a.exec();
}
