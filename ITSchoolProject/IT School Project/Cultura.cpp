#include "Cultura.h"

using namespace std;

Cultura::Cultura(string tip, double hectare, double randament, double pret)
    : tip(tip), hectare(hectare), randamentTonePerHa(randament), pretPerTona(pret) {}

Cultura::~Cultura() {}

string Cultura::getTip() const {
    return tip;
}

double Cultura::getHectare() const {
    return hectare;
}

double Cultura::getRandament() const {
    return randamentTonePerHa;
}

double Cultura::getPretPerTona() const {
    return pretPerTona;
}

double Cultura::calculProductieTotala() const {
    return hectare * randamentTonePerHa;
}

double Cultura::calculVenitEstimat(double toneVanzare) const {
    return toneVanzare * pretPerTona;
}

void Cultura::afisareInfo() const {
    cout << "Cultura: " << tip << ", Hectare: " << hectare
        << ", Randament: " << randamentTonePerHa << " tone/ha"
        << ", Pret per tona: " << pretPerTona << " RON" << endl;
}
