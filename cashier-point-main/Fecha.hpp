#ifndef FECHA_HPP
#define FECHA_HPP
#include <string>
#include "DRelevantes.hpp"

using namespace std;
class Fecha
{
	private:
        string hora;
		string dia;
		string mes;
		string anio;
	public:
		Fecha();
		Fecha(string Hora, string Dia, string Mes, string Anio);
		string getHora();
		string getDia();
        string getMes();
		string getAnio();
};
#endif