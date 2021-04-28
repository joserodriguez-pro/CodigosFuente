#include "DRelevantes.hpp"
#include "Fecha.hpp"


DRelevantes::DRelevantes() {}

DRelevantes::DRelevantes(string NombreDelCliente, string NumeroDeCuenta, Fecha LaFecha)
{
	nombreDelCliente = NombreDelCliente;
	numeroDeCuenta = NumeroDeCuenta;
	fecha = LaFecha;
}

string DRelevantes::getNombreDelCliente()
{
	return nombreDelCliente;
}

string DRelevantes::getNumeroDeCuenta()
{
	return numeroDeCuenta;
}	

Fecha DRelevantes::getLaFecha()
{
	return fecha;
}
