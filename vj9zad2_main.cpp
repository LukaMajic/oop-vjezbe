#include "vj9zad2.hpp"

int main() {
    
    skup<int> skup1;

    skup1.dodaj_element(3);
    skup1.dodaj_element(5);
    skup1.dodaj_element(7);

    skup1.ispisi_skup();

    cout << "Je li broj 5 u skupu? " << boolalpha << skup1.jeli_element(5) << endl;

    skup1.izbaci_element(3);

    skup1.ispisi_skup();

    return 0;
}
