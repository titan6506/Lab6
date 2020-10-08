#pragma once

#include"IIterador.h"

template<class T>
class IIterable
{
public:
	virtual IIterador<T>* obtenerIterador() = 0;
	~IIterable() = default;
};