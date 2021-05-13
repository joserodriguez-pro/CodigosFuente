#include "TCredito.hpp"

TCredito::TCredito(float elBalanceAlCorte, string elNumEnPlastico, string elNumeroDeSeguridad, 
		   string elNumeroDeCuenta, Vigencia laVigencia): Tarjeta(elNumEnPlastico, 
			   						  elNumeroDeSeguridad,
									  elNumeroDeCuenta,
									  laVigencia)
{
	balanceAlCorte = elBalanceAlCorte;
}


float TCredito::getBalanceAlCorte()
{
	return balanceAlCorte;
}


