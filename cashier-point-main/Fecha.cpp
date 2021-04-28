#include "Fecha.hpp"

Fecha::Fecha(){}

Fecha::Fecha(string Hora, string Dia, string Mes, string Anio)
{
    hora = Hora;
	dia = Dia;
	mes = Mes;
	anio = Anio;
}

string Fecha::getHora()
{
	return hora;
}

string Fecha::getDia()
{
	return dia;
}
string Fecha::getMes()
{
	return mes;
}

string Fecha::getAnio()
{
	return anio;
}
