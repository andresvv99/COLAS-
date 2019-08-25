#pragma once
#include <iostream>
#include <string>
#include "Cola.h"
#include "Persona.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace std;
using namespace System::Windows::Forms;
 class Aplicacion:public Cola
{
public:

	Aplicacion(void)
	{
		Cola();
	}

	void Tamano(DataGridView^ grilla, TextBox^ tam)
	{
		grilla -> ColumnCount= System::Convert::ToInt32( tam->Text);
		grilla -> RowCount = 2;
	}

	void Guardar (DataGridView^ grilla, TextBox^ tam)
	{
		int i=0; 
		Naturales y1;
		Cadena y2;
		Persona p;
		while (i< System::Convert::ToInt32( tam->Text))
		{
			y1.Set_entero(System::Convert::ToInt32(grilla -> Rows[1] -> Cells[i] -> Value));
			y2.Set_cadena(marshal_as<std::string>(System::Convert::ToString(grilla -> Rows[0] -> Cells[i] ->Value)));
			p.Set_nombre(y2);
			p.Set_edad(y1);
			Insertar(p);
			i++;
		}
	}

	void Mostrar(DataGridView^ grilla)
	{
		int i=0;
		int tam= Get_final() - Get_frente();
		Cola aux;
		Persona x;
		aux=Apuntador();
		

		grilla->ColumnCount=tam;
		grilla->RowCount=2;
		while (i<tam)
		{
			aux.Eliminar(x);
			grilla->Rows[1] -> Cells[i] ->	Value=System::Convert::ToInt32(x.Get_edad().Get_entero());
			grilla -> Rows[0] -> Cells[i] -> Value=marshal_as<System::String^>(x.Get_nombre().Get_cadena());
			i++;
		}
	}

	void OrdenarCola(Cola q) {
		// vaciar cola
		this->Set_frente(-1);
		this->Set_final(-1);
		
		while(q.Cola_vacia() == false) {
			Persona men = Get_menor(q);
			this->Insertar(men);

			int tam, i;
			Persona aux;
			tam = q.Get_final() - q.Get_frente();
			i = 0;

			// eliminando la persona menor
			while(i < tam) {
				q.Eliminar(aux);
				if(aux.Get_edad().Get_entero() != men.Get_edad().Get_entero() ||
					aux.Get_nombre().Get_cadena() != men.Get_nombre().Get_cadena()) {
						q.Insertar(aux);
				}
				i = i + 1;
			}
		}
	}

	Persona Get_menor(Cola q) {
		Persona men, aux; // la persona menor
		Naturales n;
		n.Set_entero(99999999);
		
		men.Set_edad(n);

		int tam = q.Get_final() - q.Get_frente();
		int i = 0;

		// ciclo= para encontrar la persona menor
		while(i < tam) {
			q.Eliminar(aux);
			if(aux.Get_edad().Get_entero() < men.Get_edad().Get_entero()) {
				men.Set_edad(aux.Get_edad());
				men.Set_nombre(aux.Get_nombre());
			}
			i = i + 1;
		}
		return men;
	}

	void EliminarNombresDeLongitudImpar(Cola q) {

		this->Set_frente(-1);
		this->Set_final(-1);

		Persona aux;
		int tam = q.Get_final() - q.Get_frente();
		int i = 0;

		while(i < tam) {
			q.Eliminar(aux);
			if(aux.Get_nombre().Get_cadena().size() % 2 == 0) {
				this->Insertar(aux);
			}
			i = i + 1;
			q.Insertar(aux);
		}
	}
};

