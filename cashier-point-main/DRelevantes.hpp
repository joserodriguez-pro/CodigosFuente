#ifndef DRELEVANTES_HPP
#define DRELEVANTES_HPP
#include <string>
#include "Fecha.hpp"


using namespace std;
class DRelevantes
{
	private:
		string nombreDelCliente;
		string numeroDeCuenta;
		Fecha fecha;
	public:

	       DRelevantes();
               DRelevantes(string NombreDelCliente, string NumeroDeCuenta, Fecha LaFecha);
		string getNombreDelCliente();
		string getNumeroDeCuenta();
		Fecha getLaFecha();
};





#endif