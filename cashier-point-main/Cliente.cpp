#include "Cliente.hpp"

Cliente::Cliente() {}

Cliente::Cliente(string elNombre, string elRFC, string elDomicilio)
{
	nombre = elNombre;
	RFC = elRFC;
	domicilio = elDomicilio;
}

string Cliente::getNombre()
{
	return nombre; 
}

string Cliente::getRFC()
{
	return RFC;
}

string Cliente::getDomicilio()
{
	return domicilio;

}

void Cliente::setDomicilio(string elDomicilio)
{
	domicilio = elDomicilio;

}




