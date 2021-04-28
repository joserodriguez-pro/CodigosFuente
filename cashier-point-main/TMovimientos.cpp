#include "TMovimientos.hpp"

TMovimientos::TMovimientos() {}

TMovimientos::TMovimientos(string ValidarAlcliente, string ConsultarSaldo, string DepositarEnEfectivo, string RetirarDeEfectivo, string AlmacenarMovimientos, string ConsultarMovimientos)
{
	validarAlcliente = ValidarAlcliente;
	consultarSaldo = ConsultarSaldo;
	depositarEnEfectivo = DepositarEnEfectivo;
    retirarDeEfectivo = RetirarDeEfectivo;
	almacenarMovimientos = AlmacenarMovimientos;
	consultarMovimientos = ConsultarMovimientos;
}

string TMovimientos::getValidarAlcliente()
{
	return validarAlcliente; 
}

string TMovimientos::getConsultarSaldo()
{
	return consultarSaldo;
}

string TMovimientos::getDepositarEnEfectivo()
{
	return depositarEnEfectivo;

}
string TMovimientos::getRetirarDeEfectivo()
{
	return retirarDeEfectivo; 
}

string TMovimientos::getAlmacenarMovimientos()
{
	return almacenarMovimientos;
}

string TMovimientos::getConsultarMovimientos()
{
	return consultarMovimientos;

}

void TMovimientos::setValidarAlcliente(string cValidarAlcliente)
{
	validarAlcliente = cValidarAlcliente;

}
void TMovimientos::setConsultarSaldo(string cConsultarSaldo)
{
	consultarSaldo = cConsultarSaldo;

}
void TMovimientos::setDepositarEnEfectivo(string cDepositarEnEfectivo)
{
	depositarEnEfectivo = cDepositarEnEfectivo;

}
void TMovimientos::setRetirarDeEfectivo(string cRetirarDeEfectivo)
{
	retirarDeEfectivo = cRetirarDeEfectivo;

}
void TMovimientos::setAlmacenarMovimientos(string cAlmacenarMovimientos)
{
	almacenarMovimientos = cAlmacenarMovimientos;

}
void TMovimientos::setConsultarMovimientos(string cConsultarMovimientos)
{
	consultarMovimientos = cConsultarMovimientos;

}