//Programa para calcular que numero es el mayor entre dos numeros reales.

#include <iostream>
#include <cmath>
using namespace std;

int main () {
//Declaracion de variables
	double numero1;
	double numero2;

//Empezamos el programa
	cout << "Introduzca los numeros que quiere comparar:" << endl;
	cin >> numero1 >> numero2;
//El primer numero es menor
	if (numero1 < numero2) {
	cout << numero1 <<" es menor que " << numero2 << endl;
}
//El primer numero es igual al segundo
	if (numero1==numero2) {
	cout << numero1 <<" es igual que " << numero2 << endl;
}
//El primer numero es mayor
	if (numero1 > numero2) {
	cout << numero1 <<" es mayor que " << numero2 << endl;
}
}
