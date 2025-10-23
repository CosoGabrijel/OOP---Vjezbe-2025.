#include <iostream>
#include "Zadatak2.h"

void vector_new(vektor& v, int velicina) {
	v.niz = new int[velicina];
	v.logickaVelicina = 0;
	v.fizickaVelicina = velicina;
}

void vector_delete(vektor& v) {
	delete[] v.niz;
	v.niz = nullptr;
	v.logickaVelicina = 0;
	v.fizickaVelicina = 0;
}

void vector_push_back(vektor& v, int Vrijednost) {
	if (v.logickaVelicina == v.fizickaVelicina) {
		int novaFizickaVelicina = v.fizickaVelicina * 2;

		if (novaFizickaVelicina == 0) {
			novaFizickaVelicina = 1;
		}
		int* noviNiz = new int[novaFizickaVelicina];
		for (int i = 0; i < v.logickaVelicina; i++) {
			noviNiz[i] = v.niz[i];
		}

		delete[] v.niz;
		v.niz = noviNiz;
		v.fizickaVelicina = novaFizickaVelicina;
	}
	v.niz[v.logickaVelicina] = Vrijednost;
	v.logickaVelicina = v.logickaVelicina + 1;
}

void vector_pop_back(vektor& v) {
	v.logickaVelicina--;
}

int vector_front(vektor& v) {
	return v.niz[0];
}

int vector_back(vektor& v) {
	return v.niz[v.logickaVelicina - 1];
}

int vector_size(vektor& v) {
	return v.logickaVelicina;
}


int main() {

	vektor v;
	vector_new(v, 2);
	vector_push_back(v, 10);
	vector_push_back(v, 20);
	vector_push_back(v, 30);

	std::cout << "Prvi element: " << vector_front(v) << std::endl;
	std::cout << "Zadnji element: " << vector_back(v) << std::endl;
	std::cout << "Velicina vektora: " << vector_size(v) << std::endl;

	vector_pop_back(v);
	std::cout << "Velicina nakon pop_back: " << vector_size(v) << std::endl;
	std::cout << "Zadnji element: " << vector_back(v) << std::endl;
	vector_delete(v);

	return 0;
}

