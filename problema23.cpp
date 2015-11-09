// Programa que responde a la salida de la solucion del problema anterior si el resultado es 0 y ademas quitamos las llaves del if.
#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
//Declaracion de variables
	int numero;

//Comienzo del programa
	cout <<"Introduce un numero distinto de 0:"<< endl;
	cin >> numero;
	if (numero != 0) {
	cout << "Ha escrito:"<< numero << "el alumno es obediente" << endl;
}
	if (numero ==0) {
	cout << " Ups! que desobediente..." << endl;
}
}
	
