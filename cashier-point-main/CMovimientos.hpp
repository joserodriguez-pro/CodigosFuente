#ifndef CMOVIMIENTOS_HPP
#define CMOVIMIENTOS_HPP
#include "DepRet.hpp"
#include "DRelevantes.hpp"


#include<string>


using namespace std;
class CMovimientos 
{
	private: 
		string deposito;
        string retiro;

	public:
		CMovimientos();
		CMovimientos(string elDeposito, string elRetiro,DepRet Importe,DRelevantes fecha);
		string getelDeposito();
        string getelRetiro();
     
		
};
#endif