#include "vj3zad1.hpp"

void funk1(std::vector<int> v, int brojele) {
    std::cout << "Unesite " << brojele << " elemenata vektora:" << std::endl;
    for (int i = 0; i < brojele; ++i) {
        int element;
        std::cin >> element;
        v.push_back(element);
    }
    for (int i = 0; i < brojele; i++) {
        std::cout << v[i]<<" ";
    }
    std::cout << std::endl;
}

void funk2(std::vector<int> v, int min, int max) {
    std::cout << "max je: " << max << " min je: " << min << std::endl;
    int n;
    while (true) {
        std::cin >> n;
        
        if (n < min || n > max) {
            break;
        }
        v.push_back(n);
    }
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}


