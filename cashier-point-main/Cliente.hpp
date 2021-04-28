#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include<string>


using namespace std;
class Cliente 
{
	private: 
		string nombre;
		string RFC;
		string domicilio;

	public:
		Cliente();
		Cliente(string elNombre, string elRFC, string elDomicilio);
		string getNombre();
		string getRFC();
		string getDomicilio();
		void setDomicilio(string elDomicilio);
};
#endif

