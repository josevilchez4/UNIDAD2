//PROGRAMA QUE CALCULA EL AEREA DEL CIRCULO Y SU PERIMETRO A TRAVES DEL RADIO
#include <iostream>
#include <cmath>
using namespace std;

int main () {
	//Declaracion de variables
	int radio;
	double areaCirculo;
	double longitudDeLaCircunferencia;
	//Funcionamiento del programa
	cout << "Introduzca el radio de su circunferencia" << endl;
	cin >> radio;
	if ( radio < 0) {
	cout << "Lo siento ese valor no es valido:" << endl;
}
	if (radio > 0) { 
	cout <<" El valor del radio es:" << radio << endl;
	areaCirculo = 3.14 * pow(radio,2);
	cout <<" El area del circulo es:" << areaCirculo << endl;
	longitudDeLaCircunferencia = (2*3.14*radio);
	cout <<" La longitud de la circunferencia es:" << longitudDeLaCircunferencia << endl;
}
}
