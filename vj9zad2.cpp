#include "vj9zad2.hpp"


template <typename T>
void skup<T>::dodaj_element(const T& n) {
    elementi.insert(n);
}

template <typename T>
void skup<T>::izbaci_element(const T& n) {
    elementi.erase(n);
}

template <typename T>
bool skup<T>::jeli_element(const T& n) const {
    return elementi.find(n) != elementi.end();
}

template <typename T>
void skup<T>::ispisi_skup() const {
    cout << "Elementi u skupu su: ";
    for (const auto& el : elementi) {
        cout << el << " ";
    }
    cout << endl;
}

template class skup<int>;