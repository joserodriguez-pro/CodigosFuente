#include "Cliente.cpp"
#include "Tarjeta.cpp"
#include "TCredito.cpp"
#include "Vigencia.cpp"
#include "CAcceso.cpp"
#include "TMovimientos.cpp"
#include "Fecha.cpp"
#include "DRelevantes.cpp"
#include "DepRet.cpp"

#include <stdlib.h>
#include <iostream>


int main(void)
{
	// Creating a client object with the Empty constructor
	Cliente cliente1;
	Tarjeta tarjeta1;
	Vigencia vigencia1("12","24");
	CAcceso acceso1;
	TMovimientos movientos;
	DRelevantes relevantes;
	Fecha lafecha;
	DepRet datosdepret;

	TCredito tc1(1050.75, "30219273", "781", "80174238", vigencia1);
	
	cout << " " << endl;
	cout << "========================================================== Cajero automatico-Ingreso del cliente ====================================================================" <<endl;
	cout << " " << endl;
	cout << "   Numero de tarjeta (1): " << tarjeta1.getNumDePlastico() << endl;
	cout << "   Ingrese la contrasena: " << acceso1.getPassword() << endl;
	cout << " " << endl;
        // Creating an client object with the non-empty constructor
	cout << "=========================================================== Cajero automatico-Datos del cliente =====================================================================" <<endl;
	cout << " " << endl;
	Cliente cliente2("Alejandro", "GT091183MP", "Bla bla bla...");
	cout << "   Nombre: " << cliente2.getNombre() << endl;
	cout << "   RFC: " << cliente2.getRFC() << endl;
	cout << "   Nombre: " << cliente2.getDomicilio() << endl;
	cout << " " << endl;
	cout << "==================================================================== Datos de la tarjeta ============================================================================" <<endl;
	cout << " " << endl;
	Tarjeta tarjeta1("29015", "721", "901734", vigencia1);
	cout << "   Nombre (cliente): " << cliente1.getNombre() << endl;
	cout << "   Numero de tarjeta (1): " << tarjeta1.getNumDePlastico() << endl;
	cout << "   Balance de tarjeta de credito: " << tc1.getBalanceAlCorte() << endl;
	cout << "   tarjeta de credito, numero en plastico: " << tc1.getNumDePlastico() << endl;  
	cout << "   tarjeta de credito, numero de seguridad: " << tc1.getNumDeSeguridad() << endl;  
	cout << "   tarjeta de credito, numero de cuenta: " << tc1.getNumDeCuenta() << endl;  
	cout << " " << endl;
	cout << "==================================================================== Tipos de movimientos ============================================================================" <<endl;
	cout << " " << endl;
	cout << "   Validacion del cliente. " << movientos.getValidarAlcliente() << endl;
	cout << "   Consultar saldo. " << movientos.getConsultarSaldo() << endl;
	cout << "   Depositar en efectivo. " << movientos.getDepositarEnEfectivo() << endl;
	cout << "   Retirar en efectivo. " << movientos.getRetirarDeEfectivo() << endl;  
	cout << "   Almacenar movientos. " << movientos.getAlmacenarMovimientos() << endl;  
	cout << "   Consultar movimientos. " << movientos.getConsultarMovimientos() << endl;  
	cout << " " << endl;
	cout << "==================================================================== Datos de la tarjeta ============================================================================" <<endl;
	cout << " " << endl;
	DRelevantes relevantes("Jose", "01345", lafecha);
	cout << "   Nombre (cliente): " << cliente1.getNombre() << endl;
	cout << "   Numero de cuenta: " << tc1.getNumDeCuenta() << endl;  
	cout << " " << endl;
	cout << "================================================================ Datos del deposito o retiro ========================================================================" <<endl;
	cout << " " << endl;
	cout << "   Datos: " << datosdepret.getImporte() << endl;  
	cout << " " << endl;
	cout << "=====================================================================================================================================================================" <<endl;
	return EXIT_SUCCESS;
}


