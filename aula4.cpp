#include <iostream>

using namespace std;

int main() {
	
	int vidas = 0; 	// 10, 25
	char letra = 'B'; 	// 'B'
	double decimal = 5.2; 	// 2.4999999
	float decimal2 = 5.2;	 // 2.5
	bool vivo = true; 	// true = verdadeiro / false = falso
	string nome = "Gustavo"; 	// "Bruno"
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: "; 
	cin >> letra;
	cout << "Dinheiro: ";
	cin >> decimal;
	cout << "Digite o seu nome: ";
	cin >> nome;
	
	// vidas = 100;
	
	cout << "\nVidas: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << decimal << "\nNome: " << nome << "\n";
	
	return 0;
}