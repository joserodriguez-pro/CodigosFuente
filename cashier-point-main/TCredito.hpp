#ifndef TCREDITO_HPP
#define TCREDITO_HPP

#include "Vigencia.hpp"
#include "Tarjeta.hpp"

class TCredito : public Tarjeta 
{
	private:
		float balanceAlCorte;

	public:
		TCredito(float elBalanceAlCorte, string elNumEnPlastico, 
		    string elNumeroDeSeguridad,string elNumeroDeCuenta, 
			Vigencia laVigencia);

		float getBalanceAlCorte();
}; 
#endif















