#include "stdafx.h"
#include "Jugador.h"
#include <iostream>

using namespace std;

Jugador::Jugador()
{
	disponible = 300;

}//Fin del Constructor de Jugador



void Jugador::setNombre(char *name) {

	nombre = name;
	std::cout<<"Me crearon y soy " << +nombre << endl; //printer de prueba (BORRAR LUEGO)
}//Fin del metodo setNombre 



char* Jugador::getNombre() {
	return nombre;
}//Fin del metodo getNombre



int Jugador::valorJugada()
{
	return 0;
}//fin de metodo valorJugada



int Jugador::apostar() {

	return 0;
}//Fin del metodo apostar



Jugador::~Jugador()
{
}//Fin de destructor
