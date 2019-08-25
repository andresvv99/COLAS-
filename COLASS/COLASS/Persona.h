#pragma once
#include <iostream>
#include "Cadena.h"
#include "Naturales.h"
#include <string>
using namespace std;
class Persona
{
private:
	Cadena nombre;
	Naturales edad;
public:

	Persona(void)
	{	}

	Cadena Get_nombre()
	{	return nombre;	}
	void Set_nombre( Cadena s)
	{	nombre=s;	}

	Naturales Get_edad()
	{	return edad;	}
	void Set_edad(Naturales n)
	{	edad=n;	}

	bool igual (Cadena nom )
	{
		if (nombre.Get_cadena()==nom.Get_cadena())
			return true;
		else return false;
	}

	bool Igual (Naturales ed) //es el mismo nombre, pero funciona por el tipo de dato
	{
		if (edad.Get_entero()== ed.Get_entero())
			return true;
		else return false;
	}
};

