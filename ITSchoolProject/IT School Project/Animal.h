#ifndef ANiMAL_H
#define ANiMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string tip;
	int numar;
	double pretPerUnit;

public:
	Animal(string tip, int numar, double pret);
	virtual ~Animal();

	string getTip() const;
	int getNumar() const;//const  inseamna ca functia nu modifica obiectul asupra caruia este apelata.
	double getPretPerUnit() const;

	void setNumar(int nr);

	virtual double calculVenitEstimat(int nrVanzare) const;
	virtual void afisareInfo() const;




	




};
#endif

