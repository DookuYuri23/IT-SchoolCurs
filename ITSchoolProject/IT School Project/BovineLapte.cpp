#include "BovineLapte.h"

using namespace std;

BovineLapte::BovineLapte(int numar, double pret, double productieZilnica)
    : Animal("Bovine lapte", numar, pret), productieZilnicaLapte(productieZilnica) {}

double BovineLapte::calculProductieAnualaLapte() const {
	return numar * productieZilnicaLapte * 360; // sa zicem 360 zile de productie
}

void BovineLapte::afisareInfo() const {
    Animal::afisareInfo();
    cout << "  Productie zilnica lapte: " << productieZilnicaLapte << " litri/zi/cap\n";
    cout << "  Productie anuala lapte estimata: " << calculProductieAnualaLapte() << " litri\n";
}