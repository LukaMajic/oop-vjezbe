#include <iostream>

void funk(int& najveci, int& najmanji,int niz[],int velicina) {

	najmanji = niz[0];
	najveci = niz[0];

	int temp;
	

	for (int i = 0; i < velicina; i++) {
		temp = niz[i];
		if (temp < najmanji || najmanji==0) {
			najmanji = temp;
		}
		else if (temp > najveci || najveci==0) {
			najveci = temp;
		}
	}


}


int main() {
	int n;
	std::cin >> n;
	int* niz = new int [n] {0};

	for (int b = 0; b < n; b++) {
		std::cin >> niz[b];
	}

	int najveci;
	int najmanji;
	

	funk(najveci, najmanji,niz,n);

	std::cout << najmanji << std::endl;
	std::cout << najveci << std::endl;




}