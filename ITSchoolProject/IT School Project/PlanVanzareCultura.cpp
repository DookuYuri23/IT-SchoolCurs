#include "PlanVanzareCultura.h"
using namespace std;

PlanVanzareCultura::PlanVanzareCultura(string nume, double vanzare, double pastrare)
    : nume(nume), cantitateVanzare(vanzare), cantitatePastrare(pastrare) {}

string PlanVanzareCultura::getNume() const {
    return nume;
}

double PlanVanzareCultura::getCantitateVanzare() const {
    return cantitateVanzare;
}

double PlanVanzareCultura::getCantitatePastrare() const {
    return cantitatePastrare;
}

void PlanVanzareCultura::setVanzare(double vanzare) {
    cantitateVanzare = vanzare;
}

void PlanVanzareCultura::setPastrare(double pastrare) {
    cantitatePastrare = pastrare;
}