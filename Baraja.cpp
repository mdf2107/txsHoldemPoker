#include "stdafx.h"
#include "Baraja.h"
#include <iostream>

using namespace std;

Baraja::Baraja()
{
	int tipoCarta [4] = {1,2,3,4};
	char valorCarta [13] = { '2','3','4','5','6','7','8','9','1','J','Q','K','A' };

}//Fin de Constructor de Baraja


Carta* Baraja::getCarta() {

	Carta* respuesta = new Carta;
	return respuesta;
}//Fin de getCarta

void Baraja::barajarCartas() {

	
	for (int i = 0; i < 4; i++) {
		
		for (int j = 0 ; j < 13; j++) {
			MazoCartas[i][j].setValor(j+2);
			MazoCartas[i][j].setPalo(i+1);
			MazoCartas[i][j].setDisp(true);
		}

	}
}//FIN DE BARAJARCARTAS


void Baraja::imprimirMazo()
{
	for (int i = 0 ; i<4; i++) {
		for (int j = 0; j <13; j++) {
		
				cout << MazoCartas[i][j].getValor() << " de " << MazoCartas[i][j].getPalo() << "; ";
		}
		cout << endl;
	}

	//RECORRE EL MAZO EN FORMA DE MATRIZ +++++++++++++
	//                                   +++++++++++++
	//                                   +++++++++++++
	//                                   +++++++++++++
	// e imprime valor y palo

}//Fin del metodo imprimir Mazo.


Baraja::~Baraja()
{

	
}// Fin de destructor de Baraja.
