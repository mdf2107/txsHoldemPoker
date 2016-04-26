#include "stdafx.h"
#include "Administrador.h"

#include <iostream>

using namespace std;



Administrador::Administrador()
{
	numJugadores = tamanoArray();

	//Almacena nombres que seran asignados al azar a un numero  de jugadores en la partida con total de 6
	char* partyNames[15] = { "Jorge", " Marco", "Cristina", "Max el Gato", "Alex", "Roberto", "Adriana", "Ruben", "Walter",
						   "Jose", "Daniel", "Luis", "Lucy", "Andrea" };

	players[numJugadores];  // reasigna el tamaño del arreglo a 6
	
	
	for (int i = 0; i < numJugadores; i++)
	{
		players[i].setNombre(partyNames[rand() % 13 + 1]);   // Este arreglo le asigna un nombre a cada jugador de la partida.
	}

	mazo.barajarCartas();
} // Fin de CONSTRUCTOR Administrador 



int Administrador::tamanoArray() {

	int val;
	val = rand() % 3 + 10;
	return val;
} //Fin de tamanoArray



void Administrador::iniciarJuego() {




}//Fin del metodo iniciarJuego


void Administrador::repartoInicial() {


}//Fin del metodo repartoInicial


void Administrador::preguntar() {

	Jugador *puntero;
	puntero = players;

	

}//Fin del metodo preguntar


void Administrador::determinarGanador() {

}//Fin del metodo determinarGanador



Administrador::~Administrador()
{


}
