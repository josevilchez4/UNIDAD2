// PROGRAMA PARA SABER LAS NOTAS DE LOS ALUMNOS 

#include <iostream>
#include <cmath>
using namespace std;

int main (){
//DELARACION DE VARIABLES
	double nota;
//COMIENXA EL PROGRAMA:
	cout << "Cual es tu nota:" << endl;
	cin >> nota;
//CONDICIONES DE NOTAS:
	if (nota < 5)
		cout << "Suspenso" << endl;
	else if ((nota >= 5) && (nota < 7))
		cout << "Aprobado" << endl;
		else if ((nota >= 7) && (nota < 9))
			cout << "Notable" << endl;
			else if ((nota >= 9) && (nota <= 10))
				cout << "Sobresaliente" << endl;
				else if (nota > 10)
					cout << "Numero invalido introduzca un numero del 0 al 10" << endl;
}
