

#include <iostream>
#include <string>
using namespace std;

struct biblioteca {
	string carte;
	int rand;
	string categorie;


};
int main()
{
	biblioteca Bibicescu;
	Bibicescu.categorie = "fictiune";
	Bibicescu.carte = "starcraft";
	Bibicescu.rand = 12;

	struct  {

		int an;
		string model;
		string brand;
	}myCar,myCar1,myCar3;


	myCar.an = 2003;
	myCar.brand = "BMW";
	myCar.model = "SERIA2";
	myCar1.an = 2004;
	myCar1.brand = "Renault";
	myCar1.model = "Megane";
	cout << myCar.an <<endl<< myCar.brand <<endl<< myCar.model<<endl;
	cout << myCar1.an << endl << myCar1.brand << endl << myCar1.model;

}

