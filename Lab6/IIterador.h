#pragma once
#include<iostream>
#include<sstream>
using namespace std;

template<class T>
class IIterador
{
public:
	virtual bool haySiguiente() = 0;
	virtual IIterador<T>* actual() = 0;
	IIterador() = default;
};