#pragma once
#ifndef vektor_v
#define vektor_v

struct vektor {

	int* niz;
	int logickaVelicina;
	int fizickaVelicina;

};

void vector_new(vektor& v,int Vrijednost);
void vector_delete(vektor& v);
void vector_push_back(vektor& v,int Vrijednost);
void vector_pop_back(vektor& v);
int vector_front(vektor& v);
int vector_back(vektor& v);
int vector_size(vektor& v);

#endif