#include "CAcceso.hpp"

CAcceso::CAcceso() {}

CAcceso::CAcceso(string Password)
{
	password = Password;

}

string CAcceso::getPassword()
{
	return password; 
}

