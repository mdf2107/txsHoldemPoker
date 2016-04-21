#pragma once

#include "Carta.h"

/*
La clase Baraja se encarga precisamente de barajar las 52 cartas del mazo durante la partida de poquer.
Funcionará como un Auxilar de Administrador para no cargar la clase y dejar funciones escenciales para el juego bajo su
control.
*/
class Baraja
{

/*
Definicion de metodos y variables publicas de la clase Baraja
*/
public:

	//Lista enlazada de cartas que conformarán el mazo (Podriamos hacer un vector de tam 52 tambien)
	Carta MazoCartas [4][13];
	int numeros[52];
	Carta cartas[52];
	/*
	Constructor por defecto de la clase Baraja
	*/
	Baraja();
	~Baraja();

	/*
	Getter de clase baraja que funciona para devolver una carta cuando Administrador la solicite
	*/
	Carta* getCarta();


	/*
	Este metodo se encarga de generar un mazo de cartas ordenadas
	*/
	void barajarCartas();

	/*
	Metodo que se encarga de resetear el valor de disponibilidad de las cartas cuando sea necesario
	*/
	void resetearDisponibles();


	/*
	Metodo que recorre el mazo de cartas e imprime sus valores
	*/
	void imprimirMazo();

/*
Metodos y varibles privadas de la clase Baraja.
*/
private:

	char valorCarta[13]; //Declara un array de valores para mostrar en pantalla (lo usare despues por eso lo ocupo)
	int tipoCarta[4];	//Declara un array de numeros que indica el mazo correspondiente (luego lo borro)

}; //FIN DE BARAJA.H

