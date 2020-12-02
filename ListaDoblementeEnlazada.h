#pragma once
#include <iostream>							
#include "Nodo.h"
using namespace std;
class ListaDoblementeEnlazada
{
private:
	Nodo* inicio;
	Nodo* fin;
public:
	ListaDoblementeEnlazada();
	void agregar(int valor);
	void mostrarInicioFin();
	void mostrarFinInicio();
	void mostrarInicio();
	void mostrarFin();
	void borrarValor(int valor);
};

