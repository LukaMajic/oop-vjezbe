#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream datoteka("words.txt");

    vector<string> rijeci;
    string rijec;

    while (datoteka >> rijec) {
        rijeci.push_back(rijec);
    }

    datoteka.close();

    
    for (const string& rijec : rijeci) {
        string kopija_rijeci = rijec;  
        cout << kopija_rijeci << endl;
    }

    return 0;
}
