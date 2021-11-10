#include "Cadena.h"
#include <iostream>
#include <string>
Cadena::Cadena(void)
{
	valor = new char[1];
	valor[0] = '\0';
}

Cadena::Cadena(const char* _valor)
{
	valor = new char[strlen(_valor)+1];
	strcpy_s(valor, strlen(_valor) + 1, _valor);
}

void Cadena::swap(Cadena _c1)
{
	Cadena temp = *this;
	*this = _c1;
	_c1 = temp;
}

int Cadena::find(const char* _find)
{
	Cadena temp = *this;
	for (int i = 0; i < strlen(temp.valor)-1; i++)
	{
		if (temp.at(i) == (char)_find)
		{
			return i;
		}
	}
	return -1;
}

bool Cadena::compare(const char* _c1)
{
	//return *this==_c1;
}

Cadena& operator+(const Cadena& _c1, const Cadena& _c2)
{
	// TODO: insert return statement here
	Cadena resultado;
	delete resultado.valor;
	resultado.valor= new char[strlen(_c1.valor) + strlen(_c2.valor) + 1];
	strcpy_s(resultado.valor, strlen(_c1.valor) + 1,_c1.valor);
	strcat_s(resultado.valor, strlen(_c1.valor) + strlen(_c2.valor) + 1, _c2.valor);
	return resultado;
}

Cadena& operator+=(const Cadena& _c1, const Cadena&_c2)
{
	// TODO: insert return statement here
	Cadena resultado;
	delete resultado.valor;
	resultado.valor = new char[strlen(_c1.valor) + strlen(_c2.valor) + 1];
	strcpy_s(resultado.valor, strlen(_c1.valor) + 1, _c1.valor);
	strcat_s(resultado.valor, strlen(_c1.valor) + strlen(_c2.valor) + 1, _c2.valor);
	return resultado;
}
