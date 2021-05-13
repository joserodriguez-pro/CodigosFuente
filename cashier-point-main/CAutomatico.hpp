#ifndef CAUTOMATICO_HPP
#define CAUTOMATICO_HPP

#include<string>


using namespace std;
class CAutomatico 
{
	private: 
		string codigoUnico;
		string numSucursal;
		string nomBanco;

	public:
		CAutomatico();
		CAutomatico(string elCodigoUnico, string elNumSucursal, string elNomBanco);
		string getelCodigoUnico();
		string getelNumSucursal();
		string getelNomBanco();
};
#endif