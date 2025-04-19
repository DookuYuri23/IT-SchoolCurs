
#include <iostream>
#include <string>
using namespace std;


struct elev {


    string nume;
    int varsta;
    double medie_mate;
};
int main()
{
    elev Impecabil;
    cin>>Impecabil.nume  ;
    cin>>Impecabil.varsta ;
    cin>>Impecabil.medie_mate ;
    cout << Impecabil.nume << endl << Impecabil.varsta << endl << Impecabil.medie_mate << endl;
}


