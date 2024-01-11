#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

class VirtualPet {
	friend std::ostream& operator<<(ostream& os, const VirtualPet& pet);
public:
	string ime;
	string vrsta;
	int glad_bodovi;
	int sreca_bodovi;
	int kolicina;
	bool budan;

	VirtualPet(const string& ljubimac_ime, const string& ljubimac_vrsta);
	void jedi();
	void spavaj();
	void igraj();



	bool operator==(const VirtualPet& drugi) {
		return (ime == drugi.ime && vrsta == drugi.vrsta &&
			glad_bodovi == drugi.glad_bodovi && sreca_bodovi == drugi.sreca_bodovi &&
			budan == drugi.budan);
	}

	bool operator!=(const VirtualPet& drugi)  {
		return (ime != drugi.ime || vrsta != drugi.vrsta ||
			glad_bodovi != drugi.glad_bodovi || sreca_bodovi != drugi.sreca_bodovi ||
			budan != drugi.budan);
	}

	void operator=(const VirtualPet& drugi) {
		
		if (ime != drugi.ime || vrsta != drugi.vrsta ||
			glad_bodovi != drugi.glad_bodovi || sreca_bodovi != drugi.sreca_bodovi ||
			budan != drugi.budan) {

			ime = drugi.ime;
			vrsta = drugi.vrsta;
			glad_bodovi = drugi.glad_bodovi;
			sreca_bodovi = drugi.sreca_bodovi;
			budan = drugi.budan;

			
			cout << "ime:" << ime << endl;
			cout << "vrsta:" << vrsta << endl;
			cout << "glad_bodovi:" << glad_bodovi << endl;
			cout << "sreca_bodovi:" << sreca_bodovi << endl;
			cout << "budan:" << budan << endl;
		}
	}

	

	bool operator<(const VirtualPet& drugi) {
		return glad_bodovi < drugi.glad_bodovi;
	}
	bool operator>(const VirtualPet& drugi) {
		return sreca_bodovi > drugi.sreca_bodovi;
	}
	bool operator<=(const VirtualPet& drugi) {
		return glad_bodovi <= drugi.glad_bodovi;
	}
	bool operator>=(const VirtualPet& drugi) {
		return sreca_bodovi < drugi.sreca_bodovi;
	}

	


};



class vlasnik {
public:
	string ime;
	vector<VirtualPet> ljubimac;

	vlasnik(const string& ime_vlasnika, const vector<VirtualPet>& koji_ljubimac);
	void hrana_igra();
	VirtualPet& najsretniji_ljubimac();
	vlasnik(const vlasnik& kopirani_vlasnik);

};

class Hrana {
private:
	static int counter;

public:
	Hrana(int org) {
		counter = org;
	}

	static void promjeni_counter(int n) {
		counter += n;
	}

	static void ispis_counter() {
		cout << "broj porcija: " << counter << endl;
	}



};





