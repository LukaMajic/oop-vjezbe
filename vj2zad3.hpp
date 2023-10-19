#include <iostream>


struct Vektor {
	
	int *elementi;
	int fiz_velicina;
	int log_velicina;

	void vector_new(int duz) {
		elementi = new int [duz] {};
		fiz_velicina = 0;
		log_velicina = duz;

	}

	void vector_delete() {
		delete[] elementi;
		elementi = nullptr;
		fiz_velicina = 0;
		log_velicina = 0;

	}

	void vector_push_back(int broj) {
		if (fiz_velicina >= log_velicina) {
			int nova_fizvel = log_velicina * 2;
			int* novi_elementi = new int[nova_fizvel];

			for (int i = 0; i < fiz_velicina; i++) {
				novi_elementi[i] = elementi[i];
			}

			delete[] elementi;
			elementi = novi_elementi;
			

		}
		elementi[fiz_velicina] = broj;
		fiz_velicina++;
	}

	void vector_pop_back(){
		if (log_velicina > 0) {
			fiz_velicina--;
	}
	}

	int vector_front() {
		if (log_velicina > 0) {
			return elementi[0];
		}
	}
	
	int vector_back() {
		if (log_velicina > 0) {
			return elementi[log_velicina - 1];
		}
	}

	int vector_size() {
		return log_velicina;
	}


};
