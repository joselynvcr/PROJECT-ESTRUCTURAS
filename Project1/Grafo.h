#pragma once
#include<iostream>
#include<stdio.h>
#include <string>
using namespace std;
#define INFINITY 9999
#define max 10

using namespace System;
using namespace std;

int dijkstra(int G[max][max], int n, int startnode,int lugar);

int HallarDestino(String^ lugar) {
	
	if (lugar == "Plaza Grau")
		return 1;
	if (lugar == "Plaza Bolognesi")
		return 2;
	if (lugar == "Plaza San Martin")
		return 3;
	if (lugar == "Plaza Dos de Mayo")
		return 4;
	if (lugar == "Plaza de Armas")
		return 5;
	if (lugar == "Plaza Bolivar")
		return 6;
	if (lugar == "Plaza Luis Alverto Sanchez")
		return 7;
	if (lugar == "Plaza Italia")
		return 8;
	if (lugar == "Plaza Ramon Castilla")
		return 9;
}
int startnode = 0;
int GenerarCamino(String^ destino) {

	int n = 10;
	int lugar = HallarDestino(destino);

	int G[max][max] = { 
	{	0	,	4	,	5	,	6	,	0	,	0	,	0	,	0	,	0	,	0	}	,
	{	4	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	,	0	}	,
	{	5	,	0	,	0	,	0	,	10	,	0	,	0	,	0	,	0	,	0	}	,
	{	6	,	0	,	0	,	0	,	7	,	5	,	0	,	3	,	0	,	0	}	,
	{	0	,	0	,	10	,	7	,	0	,	0	,	0	,	0	,	0	,	3	}	,
	{	0	,	0	,	0	,	5	,	0	,	0	,	3	,	0	,	0	,	0	}	,
	{	0	,	0	,	0	,	0	,	3	,	0	,	0	,	4	,	3	,	0	}	,
	{	0	,	0	,	0	,	3	,	0	,	0	,	4	,	0	,	8	,	0	}	,
	{	0	,	0	,	0	,	0	,	0	,	0	,	3	,	8	,	0	,	0	}	,
	{	0	,	0	,	0	,	0	,	3	,	0	,	0	,	0	,	0	,	0	} };

	return dijkstra(G, n, startnode,lugar);
}


int pred[max];

int dijkstra(int G[max][max], int n, int startnode, int lugar)
{
	int costo[max][max], distancia[max];// pred[max];
	int visited[max], count, mindistancia, siguienteNodo, i, j;
	
	//Armar matriz 
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (G[i][j] == 0)
				costo[i][j] = INFINITY;
			else
				costo[i][j] = G[i][j];
		}
	}

	for (i = 0; i < n; i++)
	{
		distancia[i] = costo[startnode][i];
		pred[i] = startnode;
		visited[i] = 0;
	}

	distancia[startnode] = 0;
	visited[startnode] = 1;
	count = 1;

	while (count < n-1 )
	{
		mindistancia = INFINITY;
		for (i = 0; i < n; i++)
			if (distancia[i] < mindistancia && !visited[i])//distancia  < mindistancia y no visitado
			{
				mindistancia = distancia[i];
				siguienteNodo = i;
			}
		visited[siguienteNodo] = 1;
		for (i = 0; i < n; i++)
			if (!visited[i])
				if (mindistancia + costo[siguienteNodo][i] < distancia[i])
				{
					distancia[i] = mindistancia + costo[siguienteNodo][i];
					pred[i] = siguienteNodo;
				}
		count++;
	}

	return distancia[lugar];
}
//5       //0
int* AlmacenarCamino(int lugar, int startnode) {
	int *array= new int[max];

	for (int i = 0; i < max; i++) {
		array[i] = INFINITY;
	}
	int i = lugar, j = 0;
	int x = 0;	
	j = i;
	array[x]= j;

	do
	{
		x++;
		j = pred[j];//3	
		array[x] = j;//3
	} while (j != startnode);

	return array;
}

