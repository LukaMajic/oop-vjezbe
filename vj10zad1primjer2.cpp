#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;



 vector<int> nadi_poziciju(const string& datoteka, const string& rijec) {

    vector<int> pozicije;

    ifstream file(datoteka);

    string linija;
    int linija_poz = 0;

    while (getline(file, linija)) {
        linija_poz++;

        size_t pozicija = linija.find(rijec);

        
        while (pozicija < linija.size()) {
            pozicije.push_back(pozicija);

            
            pozicija = linija.find(rijec, pozicija + 1);
        }
    }

    
    file.close();

    
    cout << "Pozicije rijeci " << rijec << " u datoteci '" << datoteka << ":" << endl;
    for (size_t i = 0; i < pozicije.size(); i++) {
        cout << "Linija " << (i + 1) << ", Pozicija: " << pozicije[i] << endl;
    }

    return pozicije;
}

int main() {
   
    vector<int> pozicije = nadi_poziciju("words.txt", "Povijest");

   
    return 0;
}
