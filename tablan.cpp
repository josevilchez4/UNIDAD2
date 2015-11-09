//Programa que hace la tabla de multiplicar de cualquier numero usando bucles
#include <iostream>
using namespace std;

int main(){
//Declaracion de variables
	int numeroTabla=0;
	int valor=1;
//Inicio del programa
//Pedimos al usuario el numero para hacer la tabla de multiplicar
	cout << "Introduzca el numero de la tabla de multiplicar que desea saber:"<< endl;
	cin >> numeroTabla;
//Una vez tenemos el numero empezamos el bucle
	do{
	cout << numeroTabla << "x" << valor << "=" << numeroTabla*valor << endl;
	valor=valor+1;
	}while(valor <=10);
}
