#include "Tarjeta.hpp"

Tarjeta::Tarjeta() {}

Tarjeta::Tarjeta(string elNumeroDePlastico,  string elNumeroDeSeguridad, string elNumeroDeCuenta, Vigencia laVigencia)
{
	numeroDePlastico = elNumeroDePlastico;
	numeroDeSeguridad = elNumeroDeSeguridad;
	numeroDeCuenta = elNumeroDeCuenta;
	vigencia = laVigencia;
}


string Tarjeta::getNumDePlastico()
{
	return numeroDePlastico;
}


string Tarjeta::getNumDeSeguridad()
{
	return numeroDeSeguridad;
}	


string Tarjeta::getNumDeCuenta()
{
	return numeroDeCuenta;
}

Vigencia Tarjeta::getVigencia()
{
	return vigencia;
}


