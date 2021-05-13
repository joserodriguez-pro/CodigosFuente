#include "DRelevantes.hpp"



DRelevantes::DRelevantes() {}

DRelevantes::DRelevantes(string elNombreDelCliente, string elNumeroDeCuenta,string laFecha, string losDepositos, string losRetiros)
{
	nombreDelCliente = elNombreDelCliente;
	numeroDeCuenta = elNumeroDeCuenta;
	fecha = laFecha;
	depositos = losDepositos;
	retiros = losRetiros;
	
}

string DRelevantes::getNombreDelCliente()
{
	return nombreDelCliente;
}

string DRelevantes::getNumeroDeCuenta()
{
	return numeroDeCuenta;
}	
string DRelevantes::getFecha()
{
	return fecha;
}	
string DRelevantes::getDepositos()
{
	return depositos;
}

string DRelevantes::getRetiros()
{
	return retiros;
}	


