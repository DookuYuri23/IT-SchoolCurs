#ifndef BOVINE_LAPTE_H
#define BOVINE_LAPTE_H

#include "Animal.h"

using namespace std;

class BovineLapte : public Animal {
private:
    double productieZilnicaLapte; // litri per zi

public:
    BovineLapte(int numar, double pret, double productieZilnica);

    double calculProductieAnualaLapte() const;
    void afisareInfo() const override;
};

#endif 