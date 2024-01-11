#include "vj8zad1.hpp"

Enemy::Enemy(const string& ime, int zdravlje, int steta)
    : ime(ime), zdravlje((zdravlje < 0) ? 0 : zdravlje), steta((steta < 0) ? 0 : steta) {
}

Boss::Boss(const std::string& name, int health, int damage, const std::string& oruzje)
    : Enemy(name, health, damage), oruzje(oruzje) {
    if (oruzje.empty()) {
        throw std::invalid_argument("ne moze ne imati oruzije");
    }
}

void Boss::attack()  {
    cout << "sef " << ime << " napada sa oruzjem: " << oruzje << " i nanosi " << steta << " stete." << endl;
}

void Boss::displayInfo()  {
    cout << "sef: " << ime << ", zdravlje: " << zdravlje << ", oruzje: " << oruzje << endl;
}

Monster::Monster(const string& ime, int zdravlje, int steta, const string& sposobnosti)
    : Enemy(ime, zdravlje, steta), sposobnosti(sposobnosti) {
    if (sposobnosti.empty()) {
        throw invalid_argument("ne moze ne imati oruzije");
    }
}

void Monster::attack()  {
    cout << "cudoviste " << ime << " koristi sposobnost: " << sposobnosti << " i nanosi " << steta << " stete." << endl;
}

void Monster::displayInfo()  {
    cout << "cudoviste: " << ime << ", zdravlje: " << zdravlje << ", sposobnosti: " << sposobnosti << endl;

}