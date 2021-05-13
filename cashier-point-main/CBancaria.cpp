#include "CBancaria.hpp"

CBancaria::CBancaria() {}

CBancaria::CBancaria(string elTipoCuenta, string elNumeroCuenta, string elClienteAsociado, string elHistorialMovimientos)
{
	tipoCuenta = elTipoCuenta;
	numeroCuenta = elNumeroCuenta;
	clienteAsociado = elClienteAsociado;
    historialMovimientos = elHistorialMovimientos;
}

string CBancaria::getelTipoCuenta()
{
	return tipoCuenta; 
}

string CBancaria::getelNumeroCuenta()
{
	return numeroCuenta;
}

string CBancaria::getelClienteAsociado()
{
	return clienteAsociado;

}
string CBancaria::getelHistorialMovimientos()
{
	return historialMovimientos;

}