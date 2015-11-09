// Programa de bucles para repetir la frase no debo copiar en clase 10 veces.
#include <iostream>
using namespace std;

int main() {
//Declaracion de las variables
	int cuenta=1;
//Bucle de repeticion
	do{
	cout << "No debo copiar en clase."<< endl;
	cuenta=cuenta+1;
	}while(cuenta <= 10);
}	
