#include "IteradorArrayList.h"
template<class T>
IteradorArrayList<T>::IteradorArrayList(T arreglo, int cantidad)
{
	this->arreglo = arreglo;
	this->cantidad = cantidad;
	this->posicionActual = 0;
}

template<class T>
bool IteradorArrayList<T>::haySiguiente()
{
	if (this->posicionActual >= this->cantidad)
	{
		return false;
	}
	else
	{
		return true;
	}
}

template<class T>
IIterador<T>* IteradorArrayList<T>:: actual()
{
	if (this->haySiguiente()) {
		T dato = this->arreglo[this->posicionActual];
		this->posicionActual++;
		return dato;
	}
	return nullptr;
}
