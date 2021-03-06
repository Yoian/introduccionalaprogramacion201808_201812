// PriorityQueue.cpp: define el tipo de dato abstracto Priority Queue
// Los elementos de la cola son enteros, el elemento de mayor prioridad 
// es entero m\'inimo contenido en el arreglo --que la funci\'on Put(int) 
// se asegura de que siempre est\'e en la posici\'on 0 del arreglo 
// Data[SIZE], por lo que el m\'inimo (cuando la cola no est\'a vacia) 
// siempre est\'a en Data[0].

#include "stdafx.h"
#include <stdlib.h>
#include "..\ComFiles\PriorityQueue.h"

int Size = SIZE;
int Free = 0;
int Data[SIZE+1];

/*Devuelve 1 si la cola est\'a vacia, y
devuelve 0 en caso contrario*/
int Empty() {
	//TODO Escriba su c\'odigo aqu\'i
	//Aprox 4 l\'ineas de c\'odigo
}

/*Coloca I en la cola de prioridad*/
void Put(int I) {
	int Index = 0,i;
	if (Free == Size)
		exit(OVERFLOW);
	Data[Free] = I;
	while (Data[Index] < I) Index++;
	if (Index < Free) {
		//TODO Escriba su c\'odigo aqu\'i
		//Aprox 4 l\'ineas de c\'odigo
	}
	Free = Free + 1;
}

/*Obtiene el entero de mayor prioridad
(el m\'inimo de los enteros en la cola)*/
int Get() {
	int i,I;
	if (0 == Free)
		exit(UNDERFLOW);
	I = Data[0];
	Free = Free - 1;
	//TODO Escriba su c\'odigo aqu\'i
	//Aprox 2 l\'ineas de c\'odigo
	return I;
}

