#include <iostream>
#include <set>
using namespace std;

template <typename T>

class skup {
private:
    set<T> elementi;

public:
    void dodaj_element(const T& n);
    void izbaci_element(const T& n);
    bool jeli_element(const T& n) const;
    void ispisi_skup() const;
};




