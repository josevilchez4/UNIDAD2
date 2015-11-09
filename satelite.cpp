//Programa que recibe los datos que el usuario introduce hasta que marque un valor de menos uno
#include <iostream>
using namespace std;

int main () {
//Declaracion de la variable
	int dato;
//Inicio del bucle 
	do{
	cout << "Introduzca los datos:" << endl;
	cin >> dato;
	cout << "Recibido el dato:"<< dato << endl;
	}while (dato >= -1);
	cout <<"Fin de conexion" << endl;;
} 
