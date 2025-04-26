#include "Ferma.h"
#include "BovineLapte.h"
#include "BovineCarne.h"
#include <iostream>

int main() {
    // Creare ferma
    Ferma ferma("Ferma Model");

    // Adaugare animale
    ferma.adaugaAnimal(new BovineLapte(50, 5000, 25));
    ferma.adaugaAnimal(new BovineCarne(30, 7500, 500));
    ferma.adaugaAnimal(new Animal("Porcine", 100, 1200));
    ferma.adaugaAnimal(new Animal("Ovine", 150, 600));
    ferma.adaugaAnimal(new Animal("Pasari", 500, 30));

    // Adaugare culturi
    ferma.adaugaCultura(new Cultura("Porumb", 25, 8.0, 800));
    ferma.adaugaCultura(new Cultura("Grau", 20, 5.0, 950));
    ferma.adaugaCultura(new Cultura("Floarea-soarelui", 15, 3.0, 1800));
    ferma.adaugaCultura(new Cultura("Lucerna", 10, 10.0, 400));
    ferma.adaugaCultura(new Cultura("Orz", 10, 4.5, 750));
    ferma.adaugaCultura(new Cultura("Soia", 5, 2.8, 1600));

    // Adaugare planuri de vanzare animale
    ferma.adaugaPlanVanzareAnimal(PlanVanzare("Bovine lapte", 10, 40));
    ferma.adaugaPlanVanzareAnimal(PlanVanzare("Bovine carne", 20, 10));
    ferma.adaugaPlanVanzareAnimal(PlanVanzare("Porcine", 80, 20));
    ferma.adaugaPlanVanzareAnimal(PlanVanzare("Ovine", 60, 90));
    ferma.adaugaPlanVanzareAnimal(PlanVanzare("Pasari", 200, 300));

    // Adaugare planuri de vanzare culturi
    ferma.adaugaPlanVanzareCultura(PlanVanzareCultura("Porumb", 150.0, 50.0));
    ferma.adaugaPlanVanzareCultura(PlanVanzareCultura("Grau", 80.0, 20.0));
    ferma.adaugaPlanVanzareCultura(PlanVanzareCultura("Floarea-soarelui", 42.0, 3.0));
    ferma.adaugaPlanVanzareCultura(PlanVanzareCultura("Lucerna", 20.0, 80.0));
    ferma.adaugaPlanVanzareCultura(PlanVanzareCultura("Orz", 36.0, 9.0));
    ferma.adaugaPlanVanzareCultura(PlanVanzareCultura("Soia", 12.0, 2.0));

    // Adaugare cheltuieli (exemplu)
    ferma.adaugaCheltuieli(250000); // 250.000 RON pentru cheltuieli anuale

    // Afisare inventar
    ferma.afisareInventarAnimale();
    ferma.afisareInventarCulturi();

    // Planificare final de an
    ferma.planificareFinDeAn();

    // Calcul bilant
    ferma.calculeazaBilant();

    return 0;
}