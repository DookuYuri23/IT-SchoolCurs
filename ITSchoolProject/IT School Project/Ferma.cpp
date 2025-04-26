#include "Ferma.h"

using namespace std;

Ferma::Ferma(std::string nume)
    : nume(nume), cheltuieliTotale(0), venituriTotale(0) {}

Ferma::~Ferma() {
    for (auto& animal : animale) {
        delete animal;
    }
    for (auto& cultura : culturi) {
        delete cultura;
    }
}

void Ferma::adaugaAnimal(Animal* animal) {
    animale.push_back(animal);
}

void Ferma::adaugaCultura(Cultura* cultura) {
    culturi.push_back(cultura);
}

void Ferma::adaugaPlanVanzareAnimal(const PlanVanzare& plan) {
    planuriVanzareAnimale.push_back(plan);
}

void Ferma::adaugaPlanVanzareCultura(const PlanVanzareCultura& plan) {
    planuriVanzareCulturi.push_back(plan);
}

void Ferma::adaugaCheltuieli(double suma) {
    cheltuieliTotale += suma;
}

void Ferma::adaugaVenituri(double suma) {
    venituriTotale += suma;
}

void Ferma::afisareInventarAnimale() const {
    cout << "\n--- INVENTAR ANIMALE ---\n";
    for (const auto& animal : animale) {
        animal->afisareInfo();
    }
}

void Ferma::afisareInventarCulturi() const {
    cout << "\n--- INVENTAR CULTURI ---\n";
    for (const auto& cultura : culturi) {
        cultura->afisareInfo();
       cout << "  Productie totala estimata: " << cultura->calculProductieTotala() << " tone\n";
    }
}

void Ferma::planificareFinDeAn() {
    cout << "\n--- PLANIFICARE VANZARI FINAL DE AN ---\n";

    // Afisare plan vanzari animale
    cout << "ANIMALE:\n";
    double venitAnimale = 0;
    for (const auto& plan : planuriVanzareAnimale) {
        Animal* animal = getAnimal(plan.getNume());
        if (animal) {
            double venit = animal->calculVenitEstimat(plan.getCantitateVanzare());
            venitAnimale += venit;

            cout << animal->getTip() << ": " << animal->getNumar() << " capete disponibile, "
                << plan.getCantitateVanzare() << " capete de vandut, "
                << plan.getCantitatePastrare() << " capete de pastrat, "
                << "venit estimat: " << venit << " RON\n";
        }
    }

    // Afiaare plan vanzari culturi
    cout << "\nCULTURI:\n";
    double venitCulturi = 0;
    for (const auto& plan : planuriVanzareCulturi) {
        Cultura* cultura = getCultura(plan.getNume());
        if (cultura) {
            double productieTotal = cultura->calculProductieTotala();
            double venit = cultura->calculVenitEstimat(plan.getCantitateVanzare());
            venitCulturi += venit;

            cout << cultura->getTip() << ": " << productieTotal << " tone produse, "
                << plan.getCantitateVanzare() << " tone de vandut, "
                << plan.getCantitatePastrare() << " tone de pastrat, "
                << "venit estimat: " << venit << " RON\n";
        }
    }

    // Adaugare la bilant
    adaugaVenituri(venitAnimale + venitCulturi);
}

void Ferma::calculeazaBilant() const {
    cout << "\n--- BILANT ANUAL ---\n";
    cout << "Venituri totale: " << venituriTotale << " RON\n";
    cout << "Cheltuieli totale: " << cheltuieliTotale << " RON\n";
    double profit = venituriTotale - cheltuieliTotale;
    cout << "Profit/Pierdere: " << profit << " RON\n";
    cout << "Rentabilitate: " << (venituriTotale > 0 ? (profit / venituriTotale) * 100 : 0) << "%\n";
}

Animal* Ferma::getAnimal(const string& numeAnimal) const {
    for (auto& animal : animale) {
        if (animal->getTip() == numeAnimal) {
            return animal;
        }
    }
    return nullptr;
}

Cultura* Ferma::getCultura(const string& numeCultura) const {
    for (auto& cultura : culturi) {
        if (cultura->getTip() == numeCultura) {
            return cultura;
        }
    }
    return nullptr;
}

PlanVanzare* Ferma::getPlanVanzareAnimal(const string& numeAnimal) {
    for (auto& plan : planuriVanzareAnimale) {
        if (plan.getNume() == numeAnimal) {
            return &plan;
        }
    }
    return nullptr;
}

PlanVanzareCultura* Ferma::getPlanVanzareCultura(const string& numeCultura) {
    for (auto& plan : planuriVanzareCulturi) {
        if (plan.getNume() == numeCultura) {
            return &plan;
        }
    }
    return nullptr;
}
