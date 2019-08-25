#pragma once
#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string>
using namespace std;
class Cadena
{
private: 
	string cadena;
public:
	Cadena (void){}
	string Get_cadena()
	{
		return cadena;
	}

	void Set_cadena(string s)
	{	cadena=s;	}
		
};

