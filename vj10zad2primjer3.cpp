#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct Tocka {
    double x;
    double y;
};

int prebroji_tocke(const char* ime, double radijus) {
    int tocke_krug = 0;

    ifstream datoteka(ime);

    Tocka tocka;

    while (datoteka >> tocka.x)  {
        
        datoteka >> tocka.y;

        double udaljenost =sqrt(tocka.x * tocka.x + tocka.y * tocka.y);
        if (udaljenost <= radijus) {
            tocke_krug++;
        }
    }
   
    datoteka.close();
    return tocke_krug;
}

int main() {
    const char* ime = "points.txt";
    double radijusKruga = 7.0;

    int rezultat = prebroji_tocke(ime, radijusKruga);

    if (rezultat >= 0) {
        cout << "broj tocaka u krugu: " << rezultat << endl;
    }

    return 0;
}
