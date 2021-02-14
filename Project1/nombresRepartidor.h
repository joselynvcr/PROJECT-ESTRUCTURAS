#pragma once
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace System;
using namespace std;

String^ generarNombre() {

	
	int opc;
	String^ nombre;
	opc = rand() % (7 - 1 + 1) + 1;
	switch (opc)
	{
	case 1:
		nombre = "Maria";
		break;
	case 2:
		nombre = "Carlos";
		break;
	case 3:
		nombre = "Marcos";
		break;
	case 4:
		nombre = "Valentine";
		break;
	case 5:
		nombre = "Jenifer";
		break;
	case 6:
		nombre = "Gerardo";
		break;
	case 7:
		nombre = "Daniela";
		break;
	}
	return nombre;
}

String^ generarApellido() {

	srand(time(NULL));
	int opc;
	String^ apellido;
	opc = rand() % (7 - 1 + 1) + 1;
	switch (opc)
	{
	case 1:
		apellido = "Quispe";
		break;
	case 2:
		apellido = "Mamani";
		break;
	case 3:
		apellido = "Yupanqui";
		break;
	case 4:
		apellido = "Acuña";
		break;
	case 5:
		apellido = "Jimenez";
		break;
	case 6:
		apellido = "García";
		break;
	case 7:
		apellido = "Campos";
		break;
	}
	return apellido;
}
String^ generarProducto() {

	srand(time(NULL));
	int opc;
	String^ producto;
	opc = rand() % (7 - 1 + 1) + 1;
	switch (opc)
	{
	case 1:
		producto = "Pollito a la brasa";
		break;
	case 2:
		producto = "Mostrito";
		break;
	case 3:
		producto = "Kentucky";
		break;
	case 4:
		producto = "Popeyes";
		break;
	case 5:
		producto = "Lomo saltado";
		break;
	case 6:
		producto = "Aeropuerto";
		break;
	case 7:
		producto = "Tallarines Verdes";
		break;
	}
	return producto;
}