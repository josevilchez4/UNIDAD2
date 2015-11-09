//Programa para obtener dos numeros necesariamente distintos de 0
#include <iostream>
using namespace std;

int main() {
//Declaracion de las variables
	int numero1=0;
	int numero2=0;
//Inicio del bucle
	do{
	cout <<"Introduzca parejas de numeros distintos de 0"<< endl;
	cin >> numero1 >> numero2;
	cout <<"Numeros recibidos:"<< numero1<< "y" <<numero2 << endl;
	}while((numero1 != 0) && (numero2 != 0));
	cout << "Ha introducido usted el valor 0 y acaba el programa" << endl;
}
