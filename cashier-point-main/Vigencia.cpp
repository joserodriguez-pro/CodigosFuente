#include "Vigencia.hpp"

Vigencia::Vigencia(){}

Vigencia::Vigencia(string elMes, string elAnio)
{
	mes = elMes;
	anio = elAnio;
}

string Vigencia::getMes()
{
	return mes;
}

string Vigencia::getAnio()
{
	return anio;
}


