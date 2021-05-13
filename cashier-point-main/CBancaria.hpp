#ifndef CBANCARIA_HPP
#define CBANCARIA_HPP

#include<string>


using namespace std;
class CBancaria 
{
	private: 
		string tipoCuenta;
		string numeroCuenta;
		string clienteAsociado;
        string historialMovimientos;

	public:
		CBancaria();
		CBancaria(string elTipoCuenta, string elNumeroCuenta, string elClienteAsociado, string elHistorialMovimientos);
		string getelTipoCuenta();
		string getelNumeroCuenta();
		string getelClienteAsociado();
        string getelHistorialMovimientos();
};
#endif