#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

class Produs {
private:
    string nume;
    double pret;
    int stoc;

public:
    Produs(string n, double p, int s) : nume(n), pret(p), stoc(s) {}

    string getNume() { return nume; }
    double getPret() { return pret; }
    int getStoc() { return stoc; }
    void scadeStoc(int cantitate) { stoc -= cantitate; }
};

class Magazin {
private:
    vector<Produs> produse;

public:
    Magazin() {
        cout << "Bun venit la magazin!\n\n";
        produse.push_back(Produs("paine", 5, 20));
        produse.push_back(Produs("lapte", 8, 15));
        produse.push_back(Produs("oua", 12, 30));
        produse.push_back(Produs("apa", 4, 25));
        produse.push_back(Produs("cafea", 15, 10));
        produse.push_back(Produs("mere", 3, 50));
        produse.push_back(Produs("banane", 7, 40));
        produse.push_back(Produs("rosii", 6, 30));
        produse.push_back(Produs("castraveti", 4, 25));
        produse.push_back(Produs("cartofi", 3, 100));
        produse.push_back(Produs("carne_Pui", 20, 15));
        produse.push_back(Produs("carne_Porc", 25, 10));
        produse.push_back(Produs("branza", 15, 20));
        produse.push_back(Produs("iaurt", 5, 30));
        produse.push_back(Produs("smantana", 8, 20));
        produse.push_back(Produs("suc", 7, 40));
        produse.push_back(Produs("bere", 5, 50));
        produse.push_back(Produs("vin", 30, 15));
        produse.push_back(Produs("cola", 8, 45));
        produse.push_back(Produs("ceai", 10, 25));
        produse.push_back(Produs("ciocolata", 6, 40));
        produse.push_back(Produs("biscuiti", 4, 35));
        produse.push_back(Produs("inghetata", 8, 20));
        produse.push_back(Produs("bomboane", 3, 50));
        produse.push_back(Produs("napolitane", 5, 30));
        produse.push_back(Produs("sapun", 7, 30));
        produse.push_back(Produs("detergent", 18, 20));
        produse.push_back(Produs("sampon", 15, 25));
        produse.push_back(Produs("hartie", 12, 40));
        produse.push_back(Produs("dezinfectant", 10, 15));

        afisareProduse();
    }
    void afisareProduse() {
        cout << "Produse disponibile:\n";
        cout << fixed << setprecision(2); 

        for (auto& p : produse) {
            cout << left << setw(15) << p.getNume()
                << "- " << right << setw(6) << p.getPret()
                << " RON - " << setw(3) << p.getStoc() << " bucati\n";
        }
        cout << endl;
    }
    void vindeProdus() {
        string nume;
        int cantitate;
        double total = 0;

        while (true) {
            cout << "Produs (sau 'gata' pentru iesire): ";
            cin >> nume;
            if (nume == "gata") break;

            cout << "Cantitate: ";
            cin >> cantitate;
            bool gasit = false;
            for (auto& p : produse) {
                if (p.getNume() == nume) {
                    if (p.getStoc() >= cantitate) {
                        total += p.getPret() * cantitate;
                        p.scadeStoc(cantitate);
                        cout << "Adaugat in cos: " << nume << " x" << cantitate << "\n";
                        gasit = true;
                    }
                    else {
                        cout << "Stoc insuficient! Disponibil: " << p.getStoc() << " bucati\n";
                    }
                    break;
                }
            }
            if (!gasit) cout << "Produsul nu exista!\n";
        }
        if (total > 0) {
            cout << "\nTotal de plata: " << fixed << setprecision(2) << total << " RON\n";
            double plata;
            do {
                cout << "Introduceti suma: ";
                cin >> plata;
                if (plata < total) {
                    cout << "Suma insuficienta!\n";
                }
            } while (plata < total);
            cout << "Rest: " << plata - total << " RON\n";
            cout << "Multumim pentru cumparaturi!\n";
        }
    }
};

int main() {
    Magazin profi;
    profi.vindeProdus();
    return 0;
}