#include "BovineCarne.h"
using namespace std;

BovineCarne::BovineCarne(int numar, double pret, double greutate)
    : Animal("Bovine carne", numar, pret), greutateMedie(greutate) {}

void BovineCarne::afisareInfo() const {
    Animal::afisareInfo();
    std::cout << "  Greutate medie: " << greutateMedie << " kilogram/capita\n";