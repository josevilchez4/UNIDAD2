//Programa que hace la tabla de multiplicar del numero 7 con el uso de bucles
#include <iostream>
using namespace std;

int main (){
//Declaracion de varibales
	int valor=1;
//Inicio de programa
	do{
	cout << "7x" << valor << "=" << 7*valor << endl;
	valor= valor+1;
	}while(valor<=10);
}
