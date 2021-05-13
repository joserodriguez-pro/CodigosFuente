#include "DRSaldo.hpp"



DRSaldo::DRSaldo() {}

DRSaldo::DRSaldo(string elSaldoActual)
{
	SaldoActual = elSaldoActual;
	
}

string DRSaldo::getelSaldoActual()
{
	return SaldoActual;
}
