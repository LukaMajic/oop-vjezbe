
#include <iostream>

using namespace std;

int vrati(int niz[], int br) {
	return niz[br];
}

int plusjedan(int& n) {
	n++;
	return n;
}

int main() {

	int niz[] = { 321,2212,332,432,532 };
	int br;

	std::cout << "Unesite broj: " << std::endl;
	cin >> br;
	cout << "broj je: " << br << std::endl;

	int brindeks = vrati(niz, br);
	std::cout << "broj na indeksu " << br << " je: " << brindeks << std::endl;
	brindeks = plusjedan(brindeks);
	
	std::cout << "uvecan broj je: " << brindeks << std::endl;

	return 0;


}