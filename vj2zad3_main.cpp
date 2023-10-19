#include "vj2zad3.hpp"


int main() {
    Vektor v;
    v.vector_new(10);
    std::cout << v.vector_size() << std::endl;
    for (int i = 1; i <= 10; i++) {
        v.vector_push_back(i);
    }
    std::cout << v.vector_size() << std::endl;
    std::cout << "Prvi element je: " << v.vector_front() << std::endl;
    std::cout << "Zadnji element je: " << v.vector_back() << std::endl;
    v.vector_delete();
    std::cout << v.vector_size() << std::endl;
    return 0;
}