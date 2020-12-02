
#include <iostream>							
#include "ListaDoblementeEnlazada.h"
using namespace std;

int main()
{
	ListaDoblementeEnlazada lde;
	lde.agregar(5);
	lde.agregar(8);
	lde.agregar(10);
	lde.agregar(3);
	lde.mostrarInicioFin();
	cout << endl;
	lde.mostrarFinInicio();
	cout << endl;
	lde.mostrarInicio();
	lde.mostrarFin();

	cout << endl;
	lde.borrarValor(8);
	lde.mostrarInicioFin();
}
