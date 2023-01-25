// Importamos biblioteca de archivos de encabezado
#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>

// Usamos nombres para objetos y variables de la 
// biblioteca estandar
using namespace std; 
// se puede usar tambien std::cout << "Hola mundo!";


int main() {
	// Boleanos
	bool esCodingDivertido = true;
	bool esSabrosoElPescado = false;
	cout << esCodingDivertido << "\n"; // Sale 1 cuando es true
	cout << esSabrosoElPescado << "\n"; // Sale 0 cuando es false
	// Operador >
	int x = 10;
	int y = 9;
	cout << (x > y) << "\n"; // Devuelve 1 ya que x es mas alto que y
	cout << (10 > 9) << "\n"; // Se puede hacer sin variables tambien
	// Operador ==
	x = 10;
	cout << (x == 10) << "\n"; // Devuelve 1 ya que son iguales
	cout << (10 == 10) << "\n"; // Se puede hacer sin variables tambien
	return 0;
}
