#include "PlanVanzare.h"

PlanVanzare::PlanVanzare(std::string nume, int vanzare, int pastrare)
    : nume(nume), cantitateVanzare(vanzare), cantitatePastrare(pastrare) {}

std::string PlanVanzare::getNume() const {
    return nume;
}

int PlanVanzare::getCantitateVanzare() const {
    return cantitateVanzare;
}

int PlanVanzare::getCantitatePastrare() const {
    return cantitatePastrare;
}

void PlanVanzare::setVanzare(int vanzare) {
    cantitateVanzare = vanzare;
}

void PlanVanzare::setPastrare(int pastrare) {
    cantitatePastrare = pastrare;
}