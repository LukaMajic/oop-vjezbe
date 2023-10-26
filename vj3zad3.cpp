#include <iostream>
#include <vector>
#include <algorithm>

void funk(std::vector<int>& vec) {

	int suma = 0;
	int najmanji = vec[0];
	int najveci = vec[0];

	for (int i : vec) {
		suma += i;
	}

	for (int j  : vec) {
		if (j < najmanji || najmanji == 0) {
			najmanji = j;
		}
		else if (j > najveci || najveci == 0) {
			najveci = j;
		}
	}

	std::sort(vec.begin(), vec.end());

	vec.insert(vec.begin(), 0);
	vec.insert(vec.end(), suma);

}




int main() {

	int br;

	std::cout << "unesi broj elemenata: ";
	std::cin >> br;
	std::vector<int> vec;


	for (int i = 0; i < br; i++) {
		int n;
		std::cout << "unesi neki broj: " <<  ": ";
		std::cin >> n;
		vec.push_back(n);
	}

	
	funk(vec);

	std::cout << "novi vektor je: ";
	for (int br : vec) {
		std::cout << br << " ";
	}
	std::cout << std::endl;

	return 0;

}