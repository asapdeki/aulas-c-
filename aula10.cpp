#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
	
	int n1, n2, res;
	char opc;

	inicio:

	system("cls");
	
	cout << "Digite o valor da nota 1: ";
	cin >> n1;
	cout << "Digite o valor da nota 2: ";
	cin >> n2;
	
	res = n1 + n2;
	
	/*
		>= 60  			Aprovado
		>=40 e <60    Recuperação
		<40           Reprovado
	*/
	
	if(res >= 60) {
		cout << "\nAluno Aprovado\n";
	} else if (res >= 40 && res < 60) {
		cout << "\nAluno Recuperacao\n";
	} else {
		cout << "Reprovado";
	}

	cout << "\nDigitar outras notas? (s/n): ";
	cin >> opc;

	if(opc == 's' or opc == 'S') {
		goto inicio;
	}

	return 0;
}
