#pragma once
#include <iostream>
#include <sstream>
#include "IList.h"
using namespace std;

template<class T>
class ArrayList : public IList<T>
{
private:
	T datos;
	int capacidadActual;
	int cantidad;
	void asegurarCapacidad();

public:
	ArrayList(int = 0);
	void insertarAlFinal(T  elemento) override;
	void insertarEnPosicion(T elemento, int posicion) override;
	void borrarEnPosicion(int posicion, bool liberarMemoria = false) override;
	T consultarPorPosicion(int posicion) override;
	bool contiene(T elemento) override;
	int getCantidad() override;
	void liberarDatosInternos() override;
	IIterador<T>* obtenerIterador() override;
	string toString();
	~ArrayList();
};