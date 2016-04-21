
/*
La clase Administador va a funcionar como nuestro "Dealer", durante la simulacion del juego de Poquer.
Se programará usando como referencia la variante "Texas Hold'em", que es la forma más popular del juego.
Esta clase se comunica con la clase Carta, Baraja y Jugador principalmente, ejecuta las funciones de reparto de cartas
y manejo de apuestas, asi como tambien de llevar el conteo de puntos y ver cual jugador es el ganador.
Estudiantes: Julian , Kenneth, Milton Delgado.
*/

#pragma once
#include "Jugador.h"
#include "Carta.h"


class Administrador
{

/*
Metodos y variables publicas de la clase Administrador
*/

public:

	/*
	Constructor de la clase Administrador
	*/
	Administrador();

	//A todos les puse void xq el diagrama no tenía el tipo del metodo.

	/*
	Este metodo se encarga, como su nombre lo dice, de inicializar el juego, crear y una partida y pedir el numero de
	jugadores.
	*/
	void iniciarJuego();

	/*
	Esta funcion hace un reparto inicial de dos cartas por jugador para iniciar la ronda de apuestas
	*/
	void repartoInicial();

	/*
	###########################################################
	*/
	void preguntar(); //Preguntar exactamente que? el nombre no especifica la funcion

	/*
	Metodo Auxiliar para determinar quien es el ganador de cada ronda
	*/
	void determinarGanador();
	
	/*
	Destructor por defecto de la clase Administrador
	*/
	~Administrador();


	int numJugadores; //Almacena un valor que determina la cantidad de jugadores en la partida.
	Jugador* Jugadores; //Almacena una referencia a los jugadores participantes de la partida
	int apuestaMinima; // Define el monto minimo de apuesta para los jugadores
	int lote; //Lleva la cuenta del total de premio por ronda

	char* Nombres[10]; //Almacena una lista de nombres que serán aleatoriamente seleccionados y asignados a cada jugador.
	Carta* mesa; //Puntero a Cartas obtenidas a partir de la clase Baraja.
};//Fin de la clase Administrador.

