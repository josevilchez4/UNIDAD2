//PROGRAMA QUE CALCULA EL MAXIMO DE LOS 3 NUMEROS QUE INTRODUCE EL USUARIO

#include <iostream>
#include <cmath>
using namespace std;

int main () {
 //DECLARACION DE VARIABLES
	double numero1;
	double numero2;
	double numero3;
	double maximo;
//COMIENZO DEL PROGRAMA
//INTRODUCCION DE LOS NUMEROS:
	cout << "Introduzca los 3 numeros:" << endl;
	cin >> numero1 >> numero2 >> numero3;
//CONDICIONES
	maximo= numero1;
	if (numero2 > maximo)
	maximo= numero2;
	if (numero3 > maximo)
	maximo= numero3;

	cout <<"El maximo es:" << maximo << endl;
}
