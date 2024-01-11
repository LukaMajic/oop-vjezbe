#include <iostream>
#include <algorithm>

using namespace std;

template <size_t N>
void sortiraj(char(&niz)[N]) {
    sort(niz, niz + N, [](char a, char b) {
        return tolower(a) < tolower(b);
});
}


int main() {
    char niz[] = { 'D', 'A', 'z', 'p', 'c' };
    size_t size = sizeof(niz) / sizeof(niz[0]);

    sortiraj(niz);

    cout << "sortiran niz je: ";
    for (char i : niz) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
