#ifndef CACCESO_HPP
#define CACCESO_HPP
#include <string>
#include "Vigencia.hpp"

using namespace std;
class CAcceso 
{
	private:
		string password;
	
	public:
        string Password;
	       CAcceso ();
            CAcceso (string Password);
		string getPassword();
		
};
#endif