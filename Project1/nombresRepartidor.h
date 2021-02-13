#pragma once
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
using namespace std;

string nombres[3] = { "Pepe", "Marcelo", "Ga" };
string generarNombre() {

	srand(time(NULL));
	int opc;
	string nombre;
	opc = rand() % (2 - 0 + 1) - 1;
	switch (opc)
	{
	case 0:
		nombre = nombres[opc];
		break;
	case 1:
		nombre = nombres[opc];
		break;
	case 2:
		nombre = nombres[opc];
		break;
	}
	return nombre;
}