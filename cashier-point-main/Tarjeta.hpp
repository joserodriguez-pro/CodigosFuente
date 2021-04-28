#ifndef TARJETA_HPP
#define TARJETA_HPP
#include <string>
#include "Vigencia.hpp"

using namespace std;
class Tarjeta 
{
	private:
		string numeroDePlastico;
		string numeroDeSeguridad;
		string numeroDeCuenta;
		Vigencia vigencia;
	public:

	       Tarjeta();
               Tarjeta(string numeroDePlastico, string numeroDeSeguridad,
		        string numeroDeCuenta, Vigencia laVigencia);
		string getNumDePlastico();
		string getNumDeSeguridad();
		string getNumDeCuenta();
		Vigencia getVigencia();
};


#endif
