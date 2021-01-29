#include "stdafx.h"
#include "string"
#include "windows.h"
#include "conio.h"
#include "iostream"

using namespace System;
/****************************************************
Creador: Mauricio Lopez
Fecha: 15/10/2019
Descrippcion: Estructura colas al estilo de Mauricio
****************************************************/
struct Nodo {
	int dato;
	Nodo *Siguiente;
};

void insertar(int, Nodo *&, Nodo *&);
void Borrar(Nodo *&, Nodo *&);
void listar();

Nodo *Inicio = NULL;
Nodo *Fin = NULL;

int main(array<System::String ^> ^args)
{

	insertar(5, Inicio, Fin);
	insertar(8, Inicio, Fin);
	insertar(9, Inicio, Fin);
	insertar(5, Inicio, Fin);
	Borrar(Inicio, Fin);
    return 0;
}
void insertar(int dato,Nodo *& Inicio, Nodo *& Fin){
	Nodo *Auxiliar1 = new Nodo;
	Auxiliar1->dato = dato;
	Auxiliar1->Siguiente = NULL;
	if (Inicio == NULL) {
		Inicio = Auxiliar1;
	}
	else
	{
		Fin->Siguiente = Auxiliar1;
	}
	Fin = Auxiliar1;
}
void Borrar(Nodo *& Cabeza, Nodo *& Cola){
	Nodo *Auxiliar1 = new Nodo();
	Auxiliar1 = Cabeza;
	if (Cabeza != Cola)
	{
		Cabeza = Auxiliar1->Siguiente;
	}
	else
	{
		Cabeza = NULL;
	}
	
}
