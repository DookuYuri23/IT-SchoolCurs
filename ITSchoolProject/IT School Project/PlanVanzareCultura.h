#ifndef PLAN_VANZARE_CULTURA_H
#define PLAN_VANZARE_CULTURA_H

#include <string>

class PlanVanzareCultura {
private:
    std::string nume;
    double cantitateVanzare;
    double cantitatePastrare;

public:
    PlanVanzareCultura(std::string nume, double vanzare, double pastrare);

    std::string getNume() const;
    double getCantitateVanzare() const;
    double getCantitatePastrare() const;

    void setVanzare(double vanzare);
    void setPastrare(double pastrare);
};

#endif
