#include "CAutomatico.hpp"

CAutomatico::CAutomatico() {}

CAutomatico::CAutomatico(string elCodigoUnico, string elNumSucursal, string elNomBanco)
{
	codigoUnico = elCodigoUnico;
	numSucursal = elNumSucursal;
	nomBanco = elNomBanco;
}

string CAutomatico::getelCodigoUnico()
{
	return codigoUnico; 
}

string CAutomatico::getelNumSucursal()
{
	return numSucursal;
}

string CAutomatico::getelNomBanco()
{
	return nomBanco;

}