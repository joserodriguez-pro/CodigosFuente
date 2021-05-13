#ifndef TMOVIMIENTOS_HPP
#define TMOVIMIENTOS_HPP

#include<string>


using namespace std;
class TMovimientos 
{
	private: 
		string validarAlcliente;
		string consultarSaldo;
		string depositarEnEfectivo;
        string retirarDeEfectivo;
		string almacenarMovimientos;
		string consultarMovimientos;

	public:
		TMovimientos ();
		TMovimientos (string ValidarAlcliente, string ConsultarSaldo, string DepositarEnEfectivo, string RetirarDeEfectivo, string AlmacenarMovimientos, string ConsultarMovimientos);
		string getValidarAlcliente();
		string getConsultarSaldo();
		string getDepositarEnEfectivo();
        string getRetirarDeEfectivo();
		string getAlmacenarMovimientos();
		string getConsultarMovimientos();
		void setValidarAlcliente(string cValidarAlcliente);
        void setConsultarSaldo(string cConsultarSaldo);
        void setDepositarEnEfectivo(string cDepositarEnEfectivo);
        void setRetirarDeEfectivo(string cRetirarDeEfectivo);
        void setAlmacenarMovimientos(string cAlmacenarMovimientos);
        void setConsultarMovimientos(string cConsultarMovimientos);
};
#endif