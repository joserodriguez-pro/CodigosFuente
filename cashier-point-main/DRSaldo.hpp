#ifndef DRSALDO_HPP
#define DRSALDO_HPP
#include <string>


using namespace std;
class DRSaldo
{
	private:
		string SaldoActual;

	public:

	    DRSaldo();
        DRSaldo(string elSaldoActual);
		string getelSaldoActual();
		
};

#endif