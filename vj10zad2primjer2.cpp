#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Tocka {
    double x;
    double y;
};

double udaljenost(const Tocka& t) {
    return sqrt(t.x * t.x + t.y * t.y);
}

bool usporedi(const Tocka& a, const Tocka& b) {
    return udaljenost(a) < udaljenost(b);
}

void ulaz_sort(const string& ime_file) {
    ifstream datoteka(ime_file);

    vector<Tocka> tocke;
    Tocka temp;

    while (datoteka >> temp.x >> temp.y) {
        tocke.push_back(temp);
    }

    datoteka.close();

   

    sort(tocke.begin(), tocke.end(), usporedi);

    for (const auto& tocka : tocke) {
        cout << "Tocka " << tocka.x << ", " << tocka.y << "  ima udaljenost: " << udaljenost(tocka) << endl;
    }
}

int main() {
    ulaz_sort("points.txt");

    return 0;
}
