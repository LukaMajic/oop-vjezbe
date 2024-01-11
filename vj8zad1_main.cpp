#include "vj8zad1.hpp" 

int main() {
    vector<Enemy*> neprijatelji;

    try {

        neprijatelji.push_back(new Boss("prvi sef ", 100, 20, "oruzje1"));
        neprijatelji.push_back(new Monster("prvo cudoviste ", 80, 15, "sposobnost1"));
        neprijatelji.push_back(new Boss("drugi sef ", 120, 25, "oruzje3"));
        neprijatelji.push_back(new Monster("drugo cudoviste", 90, 18, "sposobnost2"));
    }
    catch (const invalid_argument& e) {
        cerr << "greška prilikom stvaranja neprijatelja: " << e.what() << std::endl;


        return 1;
    }


    for (auto neprijatelj : neprijatelji) {
        neprijatelj->attack();
        neprijatelj->displayInfo();
    }


    return 0;
}

