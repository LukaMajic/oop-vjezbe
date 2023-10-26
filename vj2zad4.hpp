#include <iostream>
#include <ctime>
#include <cstdlib>

struct Matrica {
    int redovi;
    int stupci;
    float** elementi;



    void unos_matrice() {
        std::cout << "unesi broj redova i stupaca matrice: ";
        std::cin >> redovi >> stupci;

        elementi = new float* [redovi];
        for (int i = 0; i < redovi; i++) {
            elementi[i] = new float[stupci];
            for (int j = 0; j < stupci; j++) {
                std::cout << "unesi element matrice [" << i << "][" << j << "]: ";
                std::cin >> elementi[i][j];
            }
        }
    }

    void gener_matrica(int m, int n, float a, float b) {
        redovi = m;
        stupci = n;

        elementi = new float* [m];
        for (int i = 0; i < m; i++) {
            elementi[i] = new float[n];
            for (int j = 0; j < n; j++) {
                elementi[i][j] = a + (rand() / (float)RAND_MAX)* (b - a);
            }
        }
    }

    void zbroji_matrice(const Matrica& mat1, const Matrica& mat2) {
        if (mat1.redovi != mat2.redovi || mat1.stupci != mat2.stupci) {
            std::cout << "trebaju biti iste velicine" << std::endl;
            return;
        }

        redovi = mat1.redovi;
        stupci = mat1.stupci;

        elementi = new float* [redovi];
        for (int i = 0; i < redovi; i++) {
            elementi[i] = new float[stupci];
            for (int j = 0; j < stupci; j++) {
                elementi[i][j] = mat1.elementi[i][j] + mat2.elementi[i][j];
            }
        }
    }

    void oduzmi_matrice(const Matrica& mat1, const Matrica& mat2) {
        if (mat1.redovi != mat2.redovi || mat1.stupci != mat2.stupci) {
            std::cout << "trebaju biti iste velicine" << std::endl;
            return;
        }

        redovi = mat1.redovi;
        stupci = mat1.stupci;

        elementi = new float* [redovi];
        for (int i = 0; i < redovi; i++) {
            elementi[i] = new float[stupci];
            for (int j = 0; j < stupci; j++) {
                elementi[i][j] = mat1.elementi[i][j] - mat2.elementi[i][j];
            }
        }
    }

    void mnozi_matrice(const Matrica& mat1, const Matrica& mat2) {
        if (mat1.redovi != mat2.redovi || mat1.stupci != mat2.stupci) {
            std::cout << "trebaju biti iste velicine" << std::endl;
            return;
        }

        redovi = mat1.redovi;
        stupci = mat1.stupci;

        elementi = new float* [redovi];
        for (int i = 0; i < redovi; i++) {
            elementi[i] = new float[stupci];
            for (int j = 0; j < stupci; j++) {
                elementi[i][j] = mat1.elementi[i][j] * mat2.elementi[i][j];
            }
        }
    }

    void transponiraj_matricu() {
       
        float** nova_matrica = new float* [stupci];
        for (int i = 0; i < stupci; i++) {
            nova_matrica[i] = new float[redovi];
        }

      
        for (int i = 0; i < redovi; i++) {
            for (int j = 0; j < stupci; j++) {
                nova_matrica[j][i] = elementi[i][j];
            }
        }

      
        for (int i = 0; i < redovi; i++) {
            delete[] elementi[i];
        }
        delete[] elementi;

       
        int temp = redovi;
        redovi = stupci;
        stupci = temp;
        elementi = nova_matrica;
    }
    void ispis_matrice() {
        for (int i = 0; i < redovi; i++) {
            for (int j = 0; j < stupci; j++) {
                std::cout << elementi[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

   
};