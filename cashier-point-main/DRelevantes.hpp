#ifndef DRELEVANTES_HPP
#define DRELEVANTES_HPP
#include <string>


using namespace std;
class DRelevantes
{
	private:
		string nombreDelCliente;
		string numeroDeCuenta;
		string fecha;
		string depositos;
		string retiros;
		
	public:

	    DRelevantes();
        DRelevantes(string elNombreDelCliente, string elNumeroDeCuenta, string laFecha, string losDepositos, string losRetiros);
		string getNombreDelCliente();
		string getNumeroDeCuenta();
		string getFecha();
		string getDepositos();
		string getRetiros();
		
};





#endif