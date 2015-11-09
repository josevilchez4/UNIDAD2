//Programa para calcular si un numero es par o impar
#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
//Declaracion de variables
	int numero;

//Comienzo del programa
	cout <<"Introduce el numero a calcular:"<< endl;
	cin >> numero;
	if (numero % 2==0) {
	cout << numero << " es par" << endl;
}
	else {
	cout << numero << " es impar" << endl;
}
}
	
