#include <iostream>
using namespace std;


// Para un tipo de dato T, el tipo de dato puntero a T (T*) es una variable que puede tener como valor la direccion de memoria de una variable T.


// En criollo: Un puntero es una variable que guarda una direccion de memoria de un tipo de dato.

int Sumar(int a, int b);


int main() {
	int operadorA;
	int operadorB;
	operadorA = 90;
	operadorB = 100;
	int resultado = Sumar(operadorA, operadorB);
	cout << resultado << endl;
	// Como se declara?
	int* punteroEntero;
	cout << *punteroEntero << endl;
	punteroEntero = &operadorA;

	// Como se inicializa?
	punteroEntero = &operadorA;
	cout << &operadorA << endl;
	cout << punteroEntero << endl;
	cout << &punteroEntero << endl;

	// Como se usa
	*punteroEntero = 0;

	cout << operadorA << endl;
	resultado = Sumar(operadorA, (operadorA)+100);
	cout << resultado << endl;

	return 0;
}



int Sumar(int a, int b) {
	int resultado = a + b;
	a++;
	return resultado;
}
