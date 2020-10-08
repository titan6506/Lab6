#pragma once


#include <iostream>
#include <sstream>
#include "IList.h"
#include "Nodo.h"
#include "IteradorLinkedList.h"

using namespace std;

template<class T>
class LinkedList :public IList<T>
{
private:
	Nodo<T>* primero;
	int cantidad;
	void eliminarPrimero();
	void eliminarNodo(bool liberarMemoria, Nodo<T>* eliminar);

public:
	LinkedList();
	void insertarAlFinal(T elemento) override;
	void insertarEnPosicion(T elemento, int posicion) override;
	void borrarEnPosicion(int posicion, bool liberarMemoria = false) override;
	T* consultarPorPosicion(int posicion) override;
	bool contiene(T elemento) override;
	int getCantidad() override;
	void liberarDatosInternos() override;
	string toString() override;
	IIterador<T>* obtenerIterador() override;
	~LinkedList();
};