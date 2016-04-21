// TexasHoldem.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "Baraja.h"
#include <cstdlib>
#include <iostream>
using namespace std;



int main()
{

	Baraja baraja;
	baraja.barajarCartas();
	baraja.imprimirMazo();
	cout << "Hola Mundo";

	return 0;
}

