#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {
	string word_datoteka = "word.txt";

	ifstream file(word_datoteka);

	vector<string> rijeci;

	istream_iterator<string>zadatakkopija(file);
	istream_iterator<string> end; 

	copy(zadatakkopija,end,back_inserter(rijeci));
	file.close();

	cout << "kopirane rijeci: " << endl;
	for (const auto& n : rijeci) {
		cout << n << endl;
	}

}
