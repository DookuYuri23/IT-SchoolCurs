#ifndef FERMA_H
#define FERMA_H

#include <string>
#include <vector>
#include "Animal.h"
#include "Cultura.h"
#include "PlanVanzare.h"
#include "PlanVanzareCultura.h"

class Ferma {
private:
    std::string nume;
    std::vector<Animal*> animale;
    std::vector<Cultura*> culturi;
    std::vector<PlanVanzare> planuriVanzareAnimale;
    std::vector<PlanVanzareCultura> planuriVanzareCulturi;

    // Pentru bilant
    double cheltuieliTotale;
    double venituriTotale;

public: 
    Ferma(std::string nume);
    ~Ferma();

    void adaugaAnimal(Animal* animal);
    void adaugaCultura(Cultura* cultura);
    void adaugaPlanVanzareAnimal(const PlanVanzare& plan);
    void adaugaPlanVanzareCultura(const PlanVanzareCultura& plan);

    void adaugaCheltuieli(double suma);
    void adaugaVenituri(double suma);

    void afisareInventarAnimale() const;
    void afisareInventarCulturi() const;

    void planificareFinDeAn();
    void calculeazaBilant() const;

    Animal* getAnimal(const std::string& numeAnimal) const;
    Cultura* getCultura(const std::string& numeCultura) const;
    PlanVanzare* getPlanVanzareAnimal(const std::string& numeAnimal);
    PlanVanzareCultura* getPlanVanzareCultura(const std::string& numeCultura);
};

#endif