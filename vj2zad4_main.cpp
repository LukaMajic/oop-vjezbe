#include <iostream>
#include <ctime>
#include <cstdlib>
#include "vj2zad4.hpp"


int main() {
    Matrica matrica1;
    Matrica matrica2;
    Matrica rezultat;

    

    matrica1.unos_matrice(); 
    matrica2.gener_matrica(3, 3, 1.0, 5.0); 

   
    std::cout << "prva matrica:\n";
    matrica1.ispis_matrice();

    std::cout << "druga matrica:\n";
    matrica2.ispis_matrice();

    std::cout << "zbroj matrica:\n";
    rezultat.zbroji_matrice(matrica1,matrica2);
    rezultat.ispis_matrice();

    std::cout << "reazlika matrica:\n";
    rezultat.oduzmi_matrice(matrica1,matrica2);
    rezultat.ispis_matrice();

    std::cout << "umnozak matrica:\n";
    rezultat.mnozi_matrice(matrica1, matrica2);
    rezultat.ispis_matrice();

    std::cout << "Transponirana matrica:\n";
    rezultat.transponiraj_matricu();
    rezultat.ispis_matrice();


   
    return 0;
}