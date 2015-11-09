//* Programa para calcular las dos soluciones de una ecuacion de segundo grado
#include <iostream>
#include <cmath>
using namespace std;

int main() {
//*DECLARAMOS LAS VARIABLES DE LA ECUACION
	double a;
	double b;
	double c;
	double x1;
	double x2;
//EMPEZAMOS EL PROGRAMA

	cout<< "Introduzca los valores de a,b,c:";//*Mostramos en pantalla los valores de a b y c
	cin >> a >> b >> c;//* Guardamos los valores en la memoria

//CORRECCION DE LOS ERRORES DE A CON IF, ELSE.

	if (a != 0) {
	x1= -b+sqrt(pow(b,2)+4*a*c)/(2*a);//* La primera solucion con b+
	cout << "Solucion1:" << x1 << endl;
	x2= -b-sqrt(pow(b,2)+4*a*c)/(2*a);//* La segunda solucion con b-
	cout << "Solucion2;" << x2 << endl;	
}
	else{
	cout << "Lo siento con el valor introducido para a esta ecuacion no es de segundo grado y por lo tanto solo tiene una raiz" << endl;
	x1= -(c)/b;
	cout << "Este es el resultado:" << x1 << endl;
}
}
