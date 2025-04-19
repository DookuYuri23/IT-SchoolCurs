

#include <iostream>
using namespace std;

class ClasaMatematica {

private:
    int nr1;
    int nr2;


public:
    void setNr(int a, int b) {
        nr1 = a;
        nr2 = b;
    }

    int adunare() {
        return nr1 + nr2;
    }

    int scadere() {
        return nr1 - nr2;
    }
    int inmultire() {

        return nr1 * nr2;
    }
};
int main() {
    ClasaMatematica mate
        ;
    mate.setNr(10, 5);

    cout <<  mate.adunare() << endl;
    cout <<  mate.scadere () << endl;
    cout << mate.inmultire() << endl;
    return 0;
}

