#include"IteradorLinkedList.h"

template<class T>
IteradorLinkedList<T>::IteradorLinkedList(Nodo<T>* inicial)
{
	punteroActual = inicial;
}

template<class T>
bool IteradorLinkedList<T>::haySiguiente()
{
	return this->punteroActual != nullptr;
}

template<class T>
IIterador<T>* IteradorLinkedList<T>::actual()
{
	if (this->haySiguiente())
	{
		T dato = this->punteroActual->getDato();
		this->punteroActual = this->punteroActual->getSiguiente();
		return dato;
	}
	return nullptr;
}
