#include"Nodo.h"

template<class T>
Nodo<T>::Nodo(T dat, Nodo<T>* sig) {
	this->dato = dat;
	this->siguiente = sig;
}

template<class T>
Nodo<T>::~Nodo() {
	delete dato;  // revisar, porque puede ser un dato primitivo
}

template<class T>
T Nodo<T>::obtenerDato() {
	return dato;
}

template<class T>
Nodo<T>* Nodo<T>::obtenerSiguiente() {
	return siguiente;
}

template<class T>
void Nodo<T>::fijarDato(T dato) {
	this->dato = dato;
}
