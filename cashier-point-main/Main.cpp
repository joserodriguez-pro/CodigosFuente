#include "Cliente.cpp"
#include "Tarjeta.cpp"
#include "TCredito.cpp"
#include "Vigencia.cpp"
#include "CAcceso.cpp"
#include "TMovimientos.cpp"
#include "DRelevantes.cpp"
#include "DepRet.cpp"
#include "DRSaldo.cpp"
#include "CMovimientos.cpp"
#include "CAutomatico.cpp"
#include "CBancaria.cpp"

#include <stdlib.h>
#include <iostream>

int main(void)
{
	// Creating a client object with the Empty constructor

	Vigencia vigencia1("12", "24");
	Cliente cliente1("Alejandro", "GT091183MP", "San Miguel");
	CAcceso acceso1("1034");
	Tarjeta tarjeta1("29015", "721", "901734", vigencia1);
	TMovimientos movientos;
	DRelevantes relevantes("Alessandra", "392132", "10mn 09/04/2021", "$500", "$5,000.00");
	DepRet datosdepret("$4,000.00");
	DRSaldo Saldo("$10,000.00");
	CMovimientos consulta("$2,000.00", "$3,000.00", datosdepret, relevantes);
	CAutomatico CajeroAutomatico("BBVA Bancomer.", "394132.", "La Normal.");
	CBancaria CuentaBancaria("Credito", "390214", "Alessandra Martinez Betancourt", "1. Retiro de $500 (10/09/2021)");

	TCredito tc1(1050.75, "30219273", "781", "80174238", vigencia1);
	string tarjeta, contrasena;
	int contador = 0, caso, num;
	bool ingresar = false;
	do
	{
		cout << " " << endl;
		cout << " " << endl;
		cout << "======================================================== Cajero automatico-Ingreso del cliente =================================================================" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "  Ingresa tu numero de cuenta: ";
		cin >> tarjeta;
		cout << " " << endl;
		cout << "  Ingresa tu contrasena: ";
		cin >> contrasena;
		cout << " " << endl;
		if (tarjeta == tarjeta1.getNumDeCuenta() && contrasena == acceso1.getPassword())
		{
			ingresar = true;
		}
		else
		{
			cout << "  El numero de cuenta o la contrasena son incorrectos." << endl;
			contador++;
		}
	} while (ingresar == false && contador < 5);
	if (ingresar == false)
	{
		cout << "  Usted a tenido muchos errores";
	}
	else
	{
		cout << "  Acceso concedido";
		cout << " " << endl;
		cout << " " << endl;
		cout << "========================================================= Cajero automatico-Datos del cliente ==================================================================" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "   *Nombre:  " << cliente1.getNombre() << endl;
		cout << "   *RFC:     " << cliente1.getRFC() << endl;
		cout << "   *Nombre:  " << cliente1.getDomicilio() << endl;
		cout << " " << endl;
		cout << " " << endl;
		
		do
		{
			cout << "=====================================================================================================================================================================" << endl;
			cout << " " << endl;
			cout << " " << endl;
			cout << "  1.-Datos de la tarjeta ";
			cout << " " << endl;
			cout << "  2.-Tipos de movimientos ";
			cout << "   " << endl;
			cout << "  3.-Datos relevantes de los movimientos ";
			cout << " " << endl;
			cout << "  4.-Datos de la tarjeta de credito ";
			cout << "   " << endl;
			cout << "  5.-Datos del deposito o retiro ";
			cout << "   " << endl;
			cout << "  6.-Datos de la consulta de movimientos ";
			cout << " " << endl;
			cout << "  7.-Datos del cajero automatico ";
			cout << "   " << endl;
			cout << "  8.-Datos de la cuenta bancaria ";
			cout << " " << endl;
			cout << "  9.-Datos relevantes del historial de movimientos del cliente ";
			cout << "   " << endl;
			cout << "  10.-Para cerrar secion ";
			cout << " " << endl;
			cout << "  Digite el numero de la accion que dese realizar: ";
			cin >> caso;
			cout << " " << endl;
			switch (caso)
			{
			case 1:
				cout << "================================================================== Datos de la tarjeta =========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Nombre (cliente):                         " << cliente1.getNombre() << endl;
				cout << "   *Numero de tarjeta (1):                    " << tarjeta1.getNumDePlastico() << endl;
				cout << "   *Balance de tarjeta de credito:            " << tc1.getBalanceAlCorte() << endl;
				cout << "   *tarjeta de credito, numero en plastico:   " << tc1.getNumDePlastico() << endl;
				cout << "   *tarjeta de credito, numero de seguridad:  " << tc1.getNumDeSeguridad() << endl;
				cout << "   *tarjeta de credito, numero de cuenta:     " << tc1.getNumDeCuenta() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 2:
				cout << "================================================================== Tipos de movimientos ===========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   1.-Validacion del cliente. ";
				cout << " " << endl;
				cout << "   2.-Consultar saldo. ";
				cout << " " << endl;
				cout << "   3.-Depositar en efectivo. ";
				cout << " " << endl;
				cout << "   4.-Retirar en efectivo. ";
				cout << " " << endl;
				cout << "   5.-Almacenar movientos. ";
				cout << " " << endl;
				cout << "   6.-Consultar movimientos. ";
				cin >> num;
				cout << " " << endl;
				switch (num)
				{
				case 1:
					cout << "   *Su saldo actual es de:  " << movientos.getValidarAlcliente();
					cout << " " << endl;
					break;
				case 2:
					cout << "   *Su saldo actual es de:  " << Saldo.getelSaldoActual();
					cout << " " << endl;
					break;
				case 3:
					cout << "   *Ingrese el dinero que desea depositar:  " << movientos.getDepositarEnEfectivo();
					cout << " " << endl;
					break;
				case 4:
					cout << "   *Ingrese el dinero que desea retirar:  " << movientos.getRetirarDeEfectivo();
					cout << " " << endl;
					break;
				case 5:
					cout << "   *Almacenar movimientos:  " << movientos.getAlmacenarMovimientos();
					cout << " " << endl;
					break;
				case 6:
					cout << "   *Estos son sus antiguos movimientos:  " << movientos.getConsultarMovimientos();
					cout << " " << endl;
					break;
				default:
					cout << "  Digite un numero dentro del rango. ";
					cout << " " << endl;
					break;
				}
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 3:
				cout << "============================================================ Datos relevantes de los movimientos ====================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Nombre del cliente:  " << relevantes.getNombreDelCliente() << endl;
				cout << "   *Numero de cuenta:    " << relevantes.getNumeroDeCuenta() << endl;
				cout << "   *Fecha:               " << relevantes.getFecha() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 4:
				cout << "=============================================================== Datos de la tarjeta de credito =======================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Nombre del cliente:  " << cliente1.getNombre() << endl;
				cout << "   *Numero de cuenta:    " << tc1.getNumDeCuenta() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 5:
				cout << "================================================================ Datos del deposito o retiro ========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Datos:  " << datosdepret.getImporte() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 6:
				cout << "============================================================ Datos de la consulta de movimientos ====================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Consulta de retiro:    " << consulta.getelRetiro() << "  (" << datosdepret.getImporte() << " / " << relevantes.getFecha() << " )" << endl;
				cout << "   *Consulta de deposito:  " << consulta.getelDeposito() << "  (" << datosdepret.getImporte() << " / " << relevantes.getFecha() << " )" << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 7:
				cout << "================================================================ Datos del cajero automatico ========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Nombre del banco:    " << CajeroAutomatico.getelNomBanco() << endl;
				cout << "   *Codigo unico:        " << CajeroAutomatico.getelCodigoUnico() << endl;
				cout << "   *Numero de sucursal:  " << CajeroAutomatico.getelNumSucursal() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 8:
				cout << "================================================================ Datos de la cuenta bancaria ========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Tipo de cuenta:            " << CuentaBancaria.getelTipoCuenta() << endl;
				cout << "   *Numero de cuenta:          " << CuentaBancaria.getelNumeroCuenta() << endl;
				cout << "   *Cliente asociado:          " << CuentaBancaria.getelClienteAsociado() << endl;
				cout << "   *Historial de movimientos:  " << CuentaBancaria.getelHistorialMovimientos() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 9:
				cout << "================================================== Datos relevantes del historial de movimientos del cliente ========================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Consulta de retiro:    " << relevantes.getDepositos() << endl;
				cout << "   *Consulta de deposito:  " << relevantes.getRetiros() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 10:
				cout << "   *Saliendo de la cuenta.....  ";
				cout << " " << endl;
				cout << " " << endl;
				break;
			default:
				cout << "  Digite un numero dentro del rango. ";
				cout << " " << endl;
				
				break;
			}

		} while (caso != 10);
		cout << "=====================================================================================================================================================================" << endl;
		cout << " " << endl;
		cout << " " << endl;
	}
	Vigencia vigencia2("10", "28");
	Cliente cliente2("Mariana", "RT467328PY", "Ninos Heroes");
	CAcceso acceso2("2035");
	Tarjeta tarjeta2("34710", "320", "123456", vigencia2);
	TMovimientos movientos2;
	DRelevantes relevantes2("Mariana", "389423", "10mn 03/05/2021", "$300", "$9,000.00");
	DepRet datosdepret2("$6,000.00");
	DRSaldo Saldo2("$70,000.00");
	CMovimientos consulta2("$1,000.00", "$2,000.00", datosdepret2, relevantes2);
	CAutomatico CajeroAutomatico2("Banco Azteca.", "238912.", "Federalismo.");
	CBancaria CuentaBancaria2("Credito", "589201", "Mariana Fernandez Ramires", "1. Retiro de $300 (02/05/2021)");

	TCredito tc2(1050.75, "378493", "834", "489139", vigencia2);
	string tarjeta3, contrasena2;
	int contador2 = 0, caso2, num2;
	bool ingresar2 = false;
	do
	{
		cout << " " << endl;
		cout << " " << endl;
		cout << "======================================================== Cajero automatico-Ingreso del cliente =================================================================" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "  Ingresa tu numero de cuenta: ";
		cin>> tarjeta3;
		cout << " " << endl;
		cout << "  Ingresa tu contrasena: ";
		cin >> contrasena2;
		cout << " " << endl;
		if (tarjeta3 == tarjeta2.getNumDeCuenta() && contrasena2 == acceso2.getPassword())
		{
			ingresar2 = true;
		}
		else
		{
			cout << "  El numero de cuenta o la contrasena son incorrectos." << endl;
			contador2++;
		}
	} while (ingresar2 == false && contador2 < 5);
	if (ingresar2 == false)
	{
		cout << "  Usted a tenido muchos errores";
	}
	else
	{
		cout << "  Acceso concedido";
		cout << " " << endl;
		cout << " " << endl;
		cout << "========================================================= Cajero automatico-Datos del cliente ==================================================================" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "   *Nombre:  " << cliente2.getNombre() << endl;
		cout << "   *RFC:     " << cliente2.getRFC() << endl;
		cout << "   *Nombre:  " << cliente2.getDomicilio() << endl;
		cout << " " << endl;
		cout << " " << endl;
		
		do
		{
			cout << "=====================================================================================================================================================================" << endl;
			cout << " " << endl;
			cout << " " << endl;
			cout << "  1.-Datos de la tarjeta ";
			cout << " " << endl;
			cout << "  2.-Tipos de movimientos ";
			cout << "   " << endl;
			cout << "  3.-Datos relevantes de los movimientos ";
			cout << " " << endl;
			cout << "  4.-Datos de la tarjeta de credito ";
			cout << "   " << endl;
			cout << "  5.-Datos del deposito o retiro ";
			cout << "   " << endl;
			cout << "  6.-Datos de la consulta de movimientos ";
			cout << " " << endl;
			cout << "  7.-Datos del cajero automatico ";
			cout << "   " << endl;
			cout << "  8.-Datos de la cuenta bancaria ";
			cout << " " << endl;
			cout << "  9.-Datos relevantes del historial de movimientos del cliente ";
			cout << "   " << endl;
			cout << "  10.-Para cerrar secion ";
			cout << " " << endl;
			cout << "  Digite el numero de la accion que dese realizar: ";
			cin >> caso2;
			cout << " " << endl;
			switch (caso2)
			{
			case 1:
				cout << "================================================================== Datos de la tarjeta =========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Nombre (cliente):                         " << cliente2.getNombre() << endl;
				cout << "   *Numero de tarjeta (1):                    " << tarjeta2.getNumDePlastico() << endl;
				cout << "   *Balance de tarjeta de credito:            " << tc2.getBalanceAlCorte() << endl;
				cout << "   *tarjeta de credito, numero en plastico:   " << tc2.getNumDePlastico() << endl;
				cout << "   *tarjeta de credito, numero de seguridad:  " << tc2.getNumDeSeguridad() << endl;
				cout << "   *tarjeta de credito, numero de cuenta:     " << tc2.getNumDeCuenta() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 2:
				cout << "================================================================== Tipos de movimientos ===========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   1.-Validacion del cliente. ";
				cout << " " << endl;
				cout << "   2.-Consultar saldo. ";
				cout << " " << endl;
				cout << "   3.-Depositar en efectivo. ";
				cout << " " << endl;
				cout << "   4.-Retirar en efectivo. ";
				cout << " " << endl;
				cout << "   5.-Almacenar movientos. ";
				cout << " " << endl;
				cout << "   6.-Consultar movimientos. ";
				cin >> num2;
				cout << " " << endl;
				switch (num2)
				{
				case 1:
					cout << "   *Su saldo actual es de:  " << movientos2.getValidarAlcliente();
					cout << " " << endl;
					break;
				case 2:
					cout << "   *Su saldo actual es de:  " << Saldo2.getelSaldoActual();
					cout << " " << endl;
					break;
				case 3:
					cout << "   *Ingrese el dinero que desea depositar:  " << movientos2.getDepositarEnEfectivo();
					cout << " " << endl;
					break;
				case 4:
					cout << "   *Ingrese el dinero que desea retirar:  " << movientos2.getRetirarDeEfectivo();
					cout << " " << endl;
					break;
				case 5:
					cout << "   *Almacenar movimientos:  " << movientos2.getAlmacenarMovimientos();
					cout << " " << endl;
					break;
				case 6:
					cout << "   *Estos son sus antiguos movimientos:  " << movientos2.getConsultarMovimientos();
					cout << " " << endl;
					break;
				default:
					cout << "  Digite un numero dentro del rango. ";
					cout << " " << endl;
					break;
				}
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 3:
				cout << "============================================================ Datos relevantes de los movimientos ====================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Nombre del cliente:  " << relevantes2.getNombreDelCliente() << endl;
				cout << "   *Numero de cuenta:    " << relevantes2.getNumeroDeCuenta() << endl;
				cout << "   *Fecha:               " << relevantes2.getFecha() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 4:
				cout << "=============================================================== Datos de la tarjeta de credito =======================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Nombre del cliente:  " << cliente2.getNombre() << endl;
				cout << "   *Numero de cuenta:    " << tc2.getNumDeCuenta() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 5:
				cout << "================================================================ Datos del deposito o retiro ========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Datos:  " << datosdepret2.getImporte() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 6:
				cout << "============================================================ Datos de la consulta de movimientos ====================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Consulta de retiro:    " << consulta2.getelRetiro() << "  (" << datosdepret2.getImporte() << " / " << relevantes2.getFecha() << " )" << endl;
				cout << "   *Consulta de deposito:  " << consulta2.getelDeposito() << "  (" << datosdepret2.getImporte() << " / " << relevantes2.getFecha() << " )" << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 7:
				cout << "================================================================ Datos del cajero automatico ========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Nombre del banco:    " << CajeroAutomatico2.getelNomBanco() << endl;
				cout << "   *Codigo unico:        " << CajeroAutomatico2.getelCodigoUnico() << endl;
				cout << "   *Numero de sucursal:  " << CajeroAutomatico2.getelNumSucursal() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 8:
				cout << "================================================================ Datos de la cuenta bancaria ========================================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Tipo de cuenta:            " << CuentaBancaria2.getelTipoCuenta() << endl;
				cout << "   *Numero de cuenta:          " << CuentaBancaria2.getelNumeroCuenta() << endl;
				cout << "   *Cliente asociado:          " << CuentaBancaria2.getelClienteAsociado() << endl;
				cout << "   *Historial de movimientos:  " << CuentaBancaria2.getelHistorialMovimientos() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 9:
				cout << "================================================== Datos relevantes del historial de movimientos del cliente ========================================================" << endl;
				cout << " " << endl;
				cout << " " << endl;
				cout << "   *Consulta de retiro:    " << relevantes2.getDepositos() << endl;
				cout << "   *Consulta de deposito:  " << relevantes2.getRetiros() << endl;
				cout << " " << endl;
				cout << " " << endl;
				break;
			case 10:
				cout << "   *Saliendo de la cuenta.....  ";
				cout << " " << endl;
				cout << " " << endl;
				break;
			default:
				cout << "  Digite un numero dentro del rango. ";
				cout << " " << endl;
				
				break;
			}

		} while (caso != 10);
		cout << "=====================================================================================================================================================================" << endl;
		cout << " " << endl;
		cout << " " << endl;
	}
}



