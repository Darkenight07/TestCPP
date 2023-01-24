// Importamos biblioteca de archivos de encabezado
#include <iostream>

// Usamos nombres para objetos y variables de la 
// biblioteca estandar
using namespace std; 
// se puede usar tambien std::cout << "Hola mundo!";


int main() {
	cout << "Hola mundo! \n"; // Existe \n para crear una linea en blanco
	// \t crear una pestaña horizontal y \\ para crear \, 
	cout << "Estoy aprendiendo C++ \n";
	cout << "Mi nombre es \"Samuel\"";
	cout << "\n\n";
	// Entradas de usuario
	int x;
	cout << "Escribe un numero: ";
	cin >> x;
	cout << "Tu numero es: " << x;
	return 0;
}