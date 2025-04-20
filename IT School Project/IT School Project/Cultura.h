#ifndef CULTURA_H
#define CULTURA_H

#include <iostream>
#include <string>
using namespace std;

class Cultura {
protected:
    std::string tip;
    double hectare;
    double randamentTonePerHa;
    double pretPerTona;

public:
    Cultura(std::string tip, double hectare, double randament, double pret);
    virtual ~Cultura();

    std::string getTip() const;
    double getHectare() const;
    double getRandament() const;
    double getPretPerTona() const;

    double calculProductieTotala() const;
    double calculVenitEstimat(double toneVanzare) const;
    virtual void afisareInfo() const;
};

#endif 
