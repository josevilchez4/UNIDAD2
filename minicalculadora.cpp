//Mini calculadora 
#include <iostream>
#include <cmath>
using namespace std;

int main (){
//Declaracion de las variables
	double numero1;
	double numero2;
	double resultado;
	char a;
//Inicio del programa:
	cout << "Introduce los dos numeros con los que desea operar:"<< endl;
	cin >> numero1 >> numero2;
	cout << "Seleccione la operacion que quiere realizar:"<< endl;
	cout << "Pulse a para sumar,b para restar,c para multiplicar,d para dividir" << endl;
	cin >> a;
	switch (a){
	case'a':
	resultado=numero1+numero2;
	cout << "Su resultado es:"<< resultado << endl;
	break;
	case'b':
	resultado=numero1-numero2;
	cout << "Su resultado es:"<< resultado << endl;
	break;
	case'c':
	resultado=numero1*numero2;
	cout << "Su resultado es:"<< resultado << endl;
	break;
	case'd':
	resultado=numero1/numero2;
	cout << "Su resultado es:"<< resultado << endl;
	break;
	default:
	cout << "FIN"<< endl;
}
}
