#pragma once

#include"IIterador.h"
template<class T>
class IteradorArrayList : public IIterador<T>
{
private:
	T punteroActual;
	int cantidad;
	int posicionActual;

public:
	IteradorArrayList(T arreglo, int cantidad);
	virtual bool haySiguiente() override;
	virtual IIterador<T>* actual() override;
};