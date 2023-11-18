#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


string okreni( string& str) {
    string preokrenut = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        preokrenut += str[i];
    }
    return preokrenut;
}


void okreni_sort(vector<string>& vektor_str) {
    int br_str;
    cout << "unesi broj stringova: ";
    cin >> br_str;

    for (int i = 0; i < br_str; ++i) {
        string unos;
        cout << "unesi string : " << i + 1 << " ";
        cin >> unos;
        vektor_str.push_back(okreni(unos));
    }

    
    sort(vektor_str.begin(), vektor_str.end(), []( string& a, string& b) {
        return a < b;
        });
}

int main() {
    vector<string> vektor_str;

    okreni_sort(vektor_str);

   
    cout << "novi sortirani stringovi su:\n";
    for (string& str : vektor_str) {
        cout << str << endl;
    }

    return 0;
}
