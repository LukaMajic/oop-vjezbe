#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <ctime>

bool samoglasnik_provjera(char slovo) {
    char smanji = tolower(slovo);
    return (smanji == 'a' || smanji == 'e' || smanji == 'i' || smanji == 'o' || smanji == 'u');
}

std::string prijevod(const std::string& rijec) {
    if (samoglasnik_provjera(rijec[0])) {
        return rijec + "hay";
    }
    else {
        size_t prvi_suglasnik = 0;
        while (prvi_suglasnik < rijec.length() && !samoglasnik_provjera(rijec[prvi_suglasnik])) {
            prvi_suglasnik++;
        }
        return rijec.substr(prvi_suglasnik) + rijec.substr(0, prvi_suglasnik) + "ay";
    }
}

int main() {
    std::vector<std::string> recenice = {
        "what time is it",
        "how to build a car",
        "ante went to school"
    };

    std::srand(std::time(0)); 

    int indeks = std::rand() % recenice.size();
    std::string odabrana_recenica = recenice[indeks];

    std::cout << "recenica je : " << odabrana_recenica << std::endl;
    std::string rezultat = "";
    std::string trenutna_rijec = "";

    

    for (size_t i = 0; i < odabrana_recenica.size(); ++i) {
        if (std::isalpha(odabrana_recenica[i])) {
            trenutna_rijec += odabrana_recenica[i];
        }
        else {
            if (!trenutna_rijec.empty()) {
                rezultat += prijevod(trenutna_rijec);
                trenutna_rijec = "";
            }
            rezultat += odabrana_recenica[i];
        }
    }

    if (!trenutna_rijec.empty()) {
        rezultat += prijevod(trenutna_rijec);
    }

    std::cout << "nova recenica je : " << rezultat << std::endl;

    return 0;
}
