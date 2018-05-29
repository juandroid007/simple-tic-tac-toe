#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VERSION "0.0.1"

using namespace std;

void title();
void initArrays(char c[3][3]);
void table(char c[3][3]);
void update(char c[3][3]);
void player(char c[3][3]);
void cpu(char c[3][3]);
void win(char c[3][3]);

int main() {
	char c[3][3]; //Datos del tablero

	title();
	update(c);

	cout << "¡Gracias por jugar!" << endl << endl;

	return 0;
}

void title() {
	system("clear");

	cout << "Tic-Tac-Toe v"<<VERSION<<", programado por Juan Villacorta.\n";
	cout << "\n>>Presione una tecla para continuar; CTRL+C para salir.";

	getchar();
}

void update(char c[3][3]) {
	int i = 0;

	initArrays(c);
	
	do {
		system("clear");
		
		table(c);

		if(i % 2 == 0) {
			player(c);
		}
		else {
			cpu(c);
		}
		
		i++;
	} while(i <= 9);
}

void initArrays(char c[3][3]) {
	int i, j;
	char aux = '1';

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++){
			c[i][j] = aux++;
		}
	}
}

void table(char c[3][3]) {
	int i, j;

	for (i = 0; i <= 2; i++) {
		for (j = 0; j <= 2; j++) {
			if(j < 2)
				cout << " " << c[i][j] << " |";
			else
				cout << " " << c[i][j];
		}
		if(i < 2)
			cout << "\n-----------\n";
	}

	cout << endl << endl;
}

void player(char c[3][3]) {
	int i, j, k;
	char aux;

	do {
		do {
			cout << ">Elige una casilla: ";
			fflush(stdin);
			scanf("%c", &aux);
			cout << endl;
		} while(aux < '1' || aux > '9');

		k = 0;
		
		switch(aux) {
			case '1': {
				i = 0;
				j = 0;
				if(c[i][j] == 'X' || c[i][j] == 'O') {
					k = 1;
					cout << "La casilla está ocupada. Inente con otro número.\n\n";
				}
				break;
			}
			case '2': {
				i = 0;
				j = 1;
				if(c[i][j] == 'X' || c[i][j] == 'O') {
					k = 1;
					cout << "La casilla está ocupada. Inente con otro número.\n\n";
				}
				break;
			}
			case '3': {
				i = 0;
				j = 2;
				if(c[i][j] == 'X' || c[i][j] == 'O') {
					k = 1;
					cout << "La casilla está ocupada. Inente con otro número.\n\n";
				}
				break;
			}
			case '4': {
				i = 1;
				j = 0;
				if(c[i][j] == 'X' || c[i][j] == 'O') {
					k = 1;
					cout << "La casilla está ocupada. Inente con otro número.\n\n";
				}
				break;
			}
			case '5': {
				i = 1;
				j = 1;
				if(c[i][j] == 'X' || c[i][j] == 'O') {
					k = 1;
					cout << "La casilla está ocupada. Inente con otro número.\n\n";				}
				break;
			}
			case '6': {
				i = 1;
				j = 2;
				if(c[i][j] == 'X' || c[i][j] == 'O') {
					k = 1;
					cout << "La casilla está ocupada. Inente con otro número.\n\n";
				}
				break;
			}
			case '7': {
				i = 2;
				j = 0;
				if(c[i][j] == 'X' || c[i][j] == 'O') {
					k = 1;
					cout << "La casilla está ocupada. Inente con otro número.\n\n";
				}
				break;
			}
			case '8': {
				i = 2;
				j = 1;
				if(c[i][j] == 'X' || c[i][j] == 'O') {
					k = 1;
					cout << "La casilla está ocupada. Inente con otro número.\n\n";
				}
				break;
			}
			case '9': {
				i = 2;
				j = 2;
				if(c[i][j] == 'X' || c[i][j] == 'O') {
					k = 1;
					cout << "La casilla está ocupada. Inente con otro número.\n\n";
				}
				break;
			}
		}
	} while(k == 1);

	c[i][j] = 'X';
}

void cpu(char c[3][3]) {
	int i, j, k;
	char aux;

	srand(time(NULL));

	do {
		i = rand() % 3;
		j = rand() % 3;
		k = 0;

		if(c[i][j] == 'X' || c[i][j] == 'O') {
			k = 1;
		}
	} while(k == 1);
	c[i][j] = 'O';
}

int win(char c[3][3]) {
	//Horizontales/Verticales
	if(c[0][0] == 'X' || c[0][0] == 'O') {
		if(c[0][0] == c[0][1] && c[0][0] == c[0][2]) {
			if(c[0][0] == 'X') {
				return 0; //Ganador.
			} else return 1; //Perdedor.
		}
		if(c[0][0] == c[1][0] && c[0][0] == c[2][0]) {
			if(c[0][0] == 'X') {
				return 0;
			} else return 1;
		}
	}
	if(c[2][0] == 'X' || c[2][0] == 'O') {
		if(c[2][0] == c[2][1] && c[2][0] == c[2][2]) {
			if(c[0][0] == 'X') {
				return 0; //Ganador.
			} else return 1; //Perdedor.
		}
		if(c[2][2] == c[1][2] && c[2][2] == c[0][2]) {
			if(c[0][0] == 'X') {
				return 0; //Ganador.
			} else return 1; //Perdedor.
		}
	}
	if(c[1][1] == 'X' || c[1][1] == 'O') {
		if(c[1][1] == c[0][1] && c[1][1] == c[2][1]) {
			if(c[0][0] == 'X') {
				return 0; //Ganador.
			} else return 1; //Perdedor.
		}
		if(c[1][1] == c[1][0] && c[1][1] == c[1][2]) {
			if(c[0][0] == 'X') {
				return 0; //Ganador.
			} else return 1; //Perdedor.
		}
	//Diagonales
		if(c[1][1] == c[0][0] && c[1][1] == c[2][2]) {
			if(c[0][0] == 'X') {
				return 0; //Ganador.
			} else return 1; //Perdedor.
		}
		if(c[1][1] == c[2][0] && c[1][1] == c[0][2]) {
			if(c[0][0] == 'X') {
				return 0; //Ganador.
			} else return 1; //Perdedor.
		}
	}
}