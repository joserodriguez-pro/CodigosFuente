#ifndef VIGENCIA_HPP
#define VIGENCIA_HPP
#include <string>

using namespace std;
class Vigencia 
{
	private:
		string mes;
		string anio;
	public:
		Vigencia();
		Vigencia(string elMes, string elAnio);
		string getMes();
		string getAnio();
};
#endif
