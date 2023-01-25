// Importamos biblioteca de archivos de encabezado
#include <iostream>
#include <string>
#include <stdio.h>

// Usamos nombres para objetos y variables de la 
// biblioteca estandar
using namespace std; 
// se puede usar tambien std::cout << "Hola mundo!";


int main() {
	string miString = "Hola";
	// Con [] podemos coger el primer caracter de lo que alamacena la variable, se empieza con 0 como en Python
	cout << miString[0];
	cout << "\n";
	// Con eso mismo podemos cambiar el caracter H en este caso por otro que queramos como:
	miString[0] = 'J'; // Ponemos comillas simples por que es un caracter solo
	cout << miString << "\n";
	// Para que C++ no malinterprete las comillas usamos \" \" para que no lo haga
	/* Existen:
	*	\'
	*	\"
	*	\\
	*/
	string txt = "Nosostros nos llamamos \"Vikingos\" y somos del norte";
	cout << txt << "\n";
	txt = "Nosostros nos llamamos \'Vikingos\' y somos del norte";
	cout << txt << "\n";
	txt = "Nosostros nos llamamos \\Vikingos\\ y somos del norte";
	cout << txt << "\n";
	// Con \t podemos poner un espacio tabulador
	txt = "Hola\tmundo";
	cout << txt;
	// Entradas de usuario
	int x;
	cout << "Escribe un numero: ";
	cin >> x;
	cout << "Tu numero es: " << x;
	return 0;
}
