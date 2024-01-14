#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

void povecaj(string& rijec) {
    transform(rijec.begin(), rijec.end(), rijec.begin(),toupper);
}

int main() {
    ifstream izlazna("words.txt");

    string rijec;

    while (izlazna >> rijec) {
        povecaj(rijec);
        cout << rijec << " ";
    }

    izlazna.close();

    return 0;
}
