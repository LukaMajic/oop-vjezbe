#include <iostream>
#include <vector>
#include "vj3zad2.hpp"



int main() {
    std::vector<int> v1;
    std::vector<int> v2;
    funk1(v1, 10);
    funk2(v2, 3, 14);

    std::vector<int> rez = bez_dupli(v1, v2);

    std::cout << "novi vektor bez duplih brojeva je: " << std::endl;
    for (int& i : rez) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    

    return 0;
}
