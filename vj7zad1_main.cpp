#include "vj7zad1.hpp"
int main()
{
    VirtualPet ljubimac1("Lux ", "Pas ");
    VirtualPet ljubimac2("Zivotinja2 ", "Grizli ");
    VirtualPet ljubimac3("Zivotinja3 ", "Kokos ");
    VirtualPet ljubimac4("Zivotinja3 ", "Kokos ");

    vector<VirtualPet> ljubimci_prvog = { ljubimac1, ljubimac2 };
    vector<VirtualPet> ljubimci_drugog = { ljubimac3, ljubimac4 };
    vlasnik prvi_vlasnik("Luka ", ljubimci_prvog);
    vlasnik drugi_vlasnik("Matej ", ljubimci_drugog);

    prvi_vlasnik.hrana_igra();
    drugi_vlasnik.hrana_igra();

    VirtualPet& najsretniji_1 = prvi_vlasnik.najsretniji_ljubimac();
    VirtualPet& najsretniji_2 = drugi_vlasnik.najsretniji_ljubimac();

    if (najsretniji_1.sreca_bodovi > najsretniji_2.sreca_bodovi) {
        cout << prvi_vlasnik.ime << " ima najsretnijeg ljubimca " << endl;
    }
    else {
        cout << drugi_vlasnik.ime << "ima najsretnijeg ljubimca " << endl;
    }





    vlasnik kopirani_vlasnik = prvi_vlasnik;
    cout << "ljubimci prvog vlasnika su: ";
    for (auto& ljubimac : prvi_vlasnik.ljubimac) {
        cout << ljubimac.ime << ", ";
    }
    cout << endl;

    cout << "test kopiranja ljubimaca vlasnika 1 u 2 : ";
    for (const auto& ljubimac : prvi_vlasnik.ljubimac) {
        cout << ljubimac.ime << ", ";
    }
    cout << endl;

   
    Hrana hrana(5);
        Hrana::ispis_counter();
        Hrana::promjeni_counter(5);
        Hrana::ispis_counter();

       


        if (ljubimac1 == ljubimac2) {
            cout << "isti su" << endl;
        }
        else
            cout << "nisu isti" << endl;

        if (ljubimac1 != ljubimac2) {
            cout << "razliciti su" << endl;

        }
        else
            cout << "nisu razliciti" << endl;

        if (ljubimac1 > ljubimac2) {
            cout << "prvi ljubimac je sretniji" << endl;
        }
        else
            cout << "drugi ljubimac je sretniji" << endl;

        if (ljubimac1 < ljubimac2) {
            cout << "prvi ljubimac je gladniji" << endl;
        }
        else
            cout << "drugi ljubimac je gladniji" << endl;


        if (ljubimac1 >= ljubimac2) {
            cout << "prvi ljubimac je sretniji ili su jednako sretni" << endl;
        }
        else
            cout << "drugi ljubimac je sretniji ili su jednako sretni" << endl;

        if (ljubimac1 <= ljubimac2) {
            cout << "prvi ljubimac je gladniji ili su jednako gladni" << endl;
        }
        else
            cout << "drugi ljubimac je gladniji ili su jednako gladni" << endl;

        ljubimac3 = ljubimac4;

        cout << ljubimac2 << endl;

       

        return 0;



    }





