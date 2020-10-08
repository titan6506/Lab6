#pragma once

#include"IIterable.h"

template<class T>
class IReadOnlyCollection : public IIterable<T>
{
public:
	virtual T consultarPorPosicion(int posicion) = 0; // revisar
	virtual bool contiene(T elemento) = 0; // revisar
	virtual int getCantidad() = 0;
	virtual ~IReadOnlyCollection() = default;
};