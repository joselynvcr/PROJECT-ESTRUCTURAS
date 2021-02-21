#pragma once
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace System;
using namespace std;

int generarCodigoOrden() {
	srand(time(NULL));
	int cod = rand() % (99999 - 1000 + 1) + 1000;
	return cod;
}
int generarCodigoProducto() {
	srand(time(NULL));
	int opc;
	int codigo;
	opc = rand() % (7 - 1 + 1) + 1;
	switch (opc)
	{
	case 1:
		codigo = 00256;
		break;
	case 2:
		codigo = 00214;
		break;
	case 3:
		codigo = 00356;
		break;
	case 4:
		codigo = 00401;
		break;
	case 5:
		codigo = 00654;
		break;
	case 6:
		codigo = 00762;
		break;
	case 7:
		codigo = 00217;
		break;
	}
	return codigo;
}

String^ generarProducto() {
	String^ producto;
	
	switch (generarCodigoProducto())
	{
	case 00256:
		producto = "Pollo frito";
		break;
	case 00214:
		producto = "Lomo Saltado";
		break;
	case 00356:
		producto = "Arroz Chaufa";
		break;
	case 00401:
		producto = "Pollo con Papas";
		break;
	case 00654:
		producto = "Limonada Frozen";
		break;
	case 00762:
		producto = "Aeropuerto";
		break;
	case 00217:
		producto = "Hamburguesa de Carne";
		break;
	}
	return producto;
}
double generarPrecio() {
	double precio;
	switch (generarCodigoProducto())
	{
	case 00256:
		precio = 45.50;
		break;
	case 00214:
		precio = 30.00;
		break;
	case 00356:
		precio = 35.00;
		break;
	case 00401:
		precio = 60.00;
		break;
	case 00654:
		precio = 15.00;
		break;
	case 00762:
		precio = 25.00;
		break;
	case 00217:
		precio = 12.50;
		break;
	}
	return precio;
}

