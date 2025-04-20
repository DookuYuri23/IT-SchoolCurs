#ifndef BOVINE_CARNE_H
#define BOVINE_CARNE_H

#include "Animal.h"
using namespace std;

class BovineCarne : public Animal {
private:
	double greutateMedie; //sa zicem ca greutatea medie este in kg

public:
    BovineCarne(int numar, double pret, double greutate);
    void afisareInfo() const override;
};

#endif 
