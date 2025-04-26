#ifndef PLAN_VANZARE_H
#define PLAN_VANZARE_H

#include <string>

using namespace std;

class PlanVanzare {
private:
    string nume;
    int cantitateVanzare;
    int cantitatePastrare;

public:
    PlanVanzare(string nume, int vanzare, int pastrare);

    string getNume() const;
    int getCantitateVanzare() const;
    int getCantitatePastrare() const;

    void setVanzare(int vanzare);
    void setPastrare(int pastrare);
};

#endif 