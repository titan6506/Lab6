#pragma once
#include"IIterador.h"
#include"Nodo.h"

template<class T>
class IteradorLinkedList : public IIterador<T>
{
private:
	Nodo<T>* punteroActual;

public:
	IteradorLinkedList(Nodo<T>* inicial);
	virtual bool haySiguiente() override;
	virtual IIterador<T>* actual() override;
};