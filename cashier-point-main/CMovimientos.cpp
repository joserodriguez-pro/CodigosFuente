#include "CMovimientos.hpp"

CMovimientos::CMovimientos(string elDeposito, string elRetiro,DepRet Importe,DRelevantes fecha)
{
	deposito = elDeposito;
    retiro = elRetiro;
}


string CMovimientos::getelDeposito()
{
	return deposito;
}
string CMovimientos::getelRetiro()
{
	return retiro;
}
