#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

class VirtualPet {
public:
	string ime;
	string vrsta;
	int glad_bodovi;
	int sreca_bodovi;
	bool budan;

	VirtualPet(const string&ljubimac_ime, const string&ljubimac_vrsta);
	void jedi();
	void spavaj();
	void igraj();
};

class vlasnik {
public:
	string ime;
	vector<VirtualPet> ljubimac;

	vlasnik(const string& ime_vlasnika, const vector<VirtualPet>& koji_ljubimac);
	void hrana_igra();
	VirtualPet &najsretniji_ljubimac();
	vlasnik(const vlasnik& kopirani_vlasnik);

};