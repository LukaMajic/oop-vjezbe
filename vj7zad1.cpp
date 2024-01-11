#include "vj7zad1.hpp"

int Hrana::counter = 0;

VirtualPet::VirtualPet(const string& ljubimac_ime, const string& ljubimac_vrsta)
	: ime(ljubimac_ime), vrsta(ljubimac_vrsta), glad_bodovi(50), sreca_bodovi(50), budan(true),kolicina(0) {


}

vlasnik::vlasnik(const vlasnik& kopirani_vlasnik)
	: ime(kopirani_vlasnik.ime), ljubimac(kopirani_vlasnik.ljubimac) {
}

void VirtualPet::jedi() {
	glad_bodovi -= 10;
	sreca_bodovi += 5;

	cout << "tvoj ljubimac " << ime << "je jeo. Sada je sretniji i manje gladan." << endl;
}

void VirtualPet::spavaj() {
	if (glad_bodovi < 25) {
		budan = false;
		glad_bodovi += 10;
		sreca_bodovi += 5;
		cout << "tvoj ljubimac " << ime << "je sit pa sada ide spavati." << endl;

	}
	else {
		cout << "tvoj ljubimac " << ime << "je gladan. nahrani ga prije nego što ode spavati." << endl;
	}
}

void VirtualPet::igraj() {
	glad_bodovi += 10;
	sreca_bodovi += 15;

	cout << "tvoj ljubimac " << ime << "se igrao. Sada je sretniji, ali je malo gladan." << endl;
}



vlasnik::vlasnik(const string& ime_vlasnika, const vector<VirtualPet>& koji_ljubimac)
	:ime(ime_vlasnika), ljubimac(koji_ljubimac) {

}

void vlasnik::hrana_igra()
{
	std::srand(time(0));
	for (size_t i = 0; i < ljubimac.size(); ++i) {
		size_t index = rand() % ljubimac.size();
		size_t uradi = rand() % 3;

		if (uradi == 0) {
			ljubimac[index].jedi();
		}
		else if (uradi == 1) {
			ljubimac[index].spavaj();
		}
		else if (uradi == 2) {
			ljubimac[index].igraj();
		}

	}
}

std::ostream& operator<<(ostream& os, const VirtualPet& pet) {
	os << "Ime ljubimca: " << pet.ime << endl;
	os << "Vrsta ljubimca: " << pet.vrsta << endl;
	os << "Glad bodovi: " << pet.glad_bodovi << endl;
	os << "Sreca bodovi: " << pet.sreca_bodovi << endl;
	os << "Budan: " << (pet.budan ? "Da" : "Ne") << endl;
	os << "Broj porcija pojeo: " << pet.kolicina << endl;
	return os;
}

VirtualPet& vlasnik::najsretniji_ljubimac() {

	VirtualPet* najsretniji = &ljubimac[0];

	for (size_t i = 0; i < ljubimac.size(); i++) {
		if (ljubimac[i].sreca_bodovi > najsretniji->sreca_bodovi) {
			najsretniji = &ljubimac[i];

		}
	}
	return *najsretniji;
}

