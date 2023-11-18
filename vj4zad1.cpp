#include <iostream>
#include <vector>
#include <string>

using namespace std;

void nadi_podstring(vector<string>& str1, const string& trazi) {
    int broj_poj = 0;

    for (string& str : str1) {
        cout << str << endl;

        int trazen = str.find(trazi);
        while (trazen != -1) { 
            broj_poj++;
            trazen = str.find(trazi, trazen + 1);
        }
    }

    cout << "Broj pojavljivanja podstringa " << trazi << " je: " << broj_poj << endl;
}

int main() {
    vector<string> str1 = { "auto motor auto avion" };
    cout << "Unesite podstring za pretragu: ";
    string trazi;
    cin >> trazi;

    nadi_podstring(str1, trazi);

    return 0;
}


