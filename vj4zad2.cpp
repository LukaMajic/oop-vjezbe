#include <iostream>
#include <string>
#include <cctype>

bool znak(char c) {
    return std::string(".,;:!?").find(c) != -1; 
}

std::string nova_rec(const std::string& str1) {
    std::string nova;
    bool razmak = false;

    for (char c : str1) {
        if (znak(c)) { 
            if (nova.back() == ' ') {
                nova.pop_back();
            }
            nova += c;
            razmak = true;
        }
        else if (std::isspace(c) && razmak) { 
            continue;
        }
        else {
            if (razmak && !nova.empty()) {
                nova += ' ';
            }
            nova += c;
            razmak = false;
        }
    }

    return nova;
}

int main() {
    std::string str1 = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .";
    std::string str_novi = nova_rec(str1);
    std::cout << str_novi << std::endl; 

    return 0;
}
