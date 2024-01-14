#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;


bool sadrzi_rijec(const string& rijec, const string& substring) {
    return rijec.find(substring) != rijec.size();
}

int main() {
    
    ifstream ulazna("words.txt");
    
    ofstream izlazna("nove_rijeci.txt");
   

  
    string izbrisi = "Povijest";

   
    string rijec;
    while (ulazna >> rijec)
        if (sadrzi_rijec(rijec, izbrisi))
            izlazna << rijec << " ";

   
    ulazna.close();
    izlazna.close();

    

    return 0;
}
