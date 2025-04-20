#include "Animal.h"

using namespace std;

Animal::Animal(string tip, int numar, double pret)
    : tip(tip), numar(numar), pretPerUnit(pret) {}

Animal::~Animal() {}

string Animal::getTip() const {
    return tip;
}

int Animal::getNumar() const {
    return numar;
}

double Animal::getPretPerUnit() const {
    return pretPerUnit;
}

void Animal::setNumar(int nr) {
    numar = nr;
}

double Animal::calculVenitEstimat(int numarVanzare) const {
    return numarVanzare * pretPerUnit;
}

void Animal::afisareInfo() const {
    cout << "Tip animal: " << tip << " Numar: " << numar<< ", Pret unitar: " << pretPerUnit << " RON" << std::endl;
}
