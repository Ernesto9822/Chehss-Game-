#include <iostream>
#include <conio.h>    
#include <string.h>

using namespace std;

//Funcion Para Inicializar  Y mostrar el Tablero.
void InicializarTablero(char tablero[8][8]){
	//El tablero inicia con piezas vacias.
	for(int fila = 0; fila < 8; fila++){
		for(int columna = 0; columna < 8; columna++){
			tablero[fila][columna] = ' ';
		}
	}
	
	//Aqui colocamos las piezas en su posicion inicial
	
	tablero[0][0] = 'T'; //TORRE NEGRA
	tablero[0][7] = 'T'; //TORRE NEGRA
	tablero[0][1] = 'C'; //Caballo izquierdo negro
	tablero[0][2] = 'A'; //alfil izquierdo negro
	tablero[0][3] = 'Q'; // q = queen = reyna NEGRA
	tablero[0][4] = 'R'; // REY negro.
	tablero[0][5] = 'A'; //Alfil derecho negro
	tablero[0][6] = 'C'; // Caballo Derecho Negro.
	tablero[7][0] = 't'; //torre blanca
	tablero[7][7] = 't'; //torre blanca
	tablero[7][1] = 'c'; //caballito izquierdo blanco
	tablero[7][2] = 'a'; //alfil izquierdo blanco
	tablero[7][3] = 'q'; // q = queen = reyna blanca
	tablero[7][4] = 'r'; // rey blanco
	tablero[7][5] = 'a'; //alfil derecho blanco
	tablero[7][6] = 'c'; // Caballo derecho blanco
	
	//Peones Negros.
	tablero[1][0] = 'P'; // Peon negro
	tablero[1][1] = 'P'; // Peon negro
	tablero[1][2] = 'P'; // Peon negro
	tablero[1][3] = 'P'; // Peon negro
	tablero[1][4] = 'P'; // Peon negro
	tablero[1][5] = 'P'; // Peon negro
	tablero[1][6] = 'P'; // Peon negro
	tablero[1][7] = 'P'; // Peon negro
	
	// Peones Blancos.
	tablero[6][0] = 'p'; //peon blanco
	tablero[6][1] = 'p'; //peon blanco
	tablero[6][2] = 'p'; //peon blanco
	tablero[6][3] = 'p'; //peon blanco
	tablero[6][4] = 'p'; //peon blanco
	tablero[6][5] = 'p'; //peon blanco
	tablero[6][6] = 'p'; //peon blanco
    tablero[6][7] = 'p'; //peon blanco
	
	//iremos agregando las demas piezas aqui.
}

//funcion para mostrar el tablero actual 
void MostrarTablero(char tablero[8][8]) {
    cout << "  a b c d e f g h" << endl;
    cout << "\n";
    for (int fila = 0; fila < 8; fila++) {
        cout << 8 - fila << " ";
        for (int columna = 0; columna < 8; columna++) {
            cout << tablero[fila][columna] << " ";
        }
        cout << 8 - fila << endl;
    }
    cout << "\n";
    cout << "  a b c d e f g h";
   
}

int main(){
	  cout << "****CHESS GAME******"  << endl; 
	  cout << "\n";
	  
	char tablero[8][8];
    InicializarTablero(tablero);
    MostrarTablero(tablero);

    // Aquí puedes agregar la lógica para que los jugadores realicen movimientos
	
	
	
	getch();
	return 0;
}