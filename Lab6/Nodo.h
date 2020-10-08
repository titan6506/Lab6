#pragma once
#include<iostream>
#include<sstream>
using namespace std;


template<class T>
class Nodo {

private:

	T dato;
	Nodo<T>* siguiente;


public:

	Nodo(T, Nodo<T>*);
	virtual ~Nodo();
	T obtenerDato();
	void fijarDato(T);
	Nodo<T>* obtenerSiguiente();
	void fijarSiguiente(Nodo<T>*);

};