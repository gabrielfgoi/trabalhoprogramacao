// trabalhoprogramacao.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "MATRIZ_H.h"
#include"VETOR_H.h"
#include <iostream>

using namespace std;


/*int menu(int escopoBusca) {
	int escopoBusca = INT_MIN;

	cout << "Escolha oq deseja fazer : " << endl;
	cout << "1- Diagonal Principal " << endl;
	cout << "2- Diagonal Secundaria " << endl;
	cout << "3- Diagonais " << endl;
	cout << "4- Matriz Completa" << endl;
	cout << endl;

	return escopoBusca;
}
*/

void testeParaVetor() {
	int meuVetor[] = { 77,8,3,15,9 };
	cout << " O maior ou menor  valor do vetor e : " << maiorValorEmVetor(meuVetor, 5);
	cout << endl;

	system("pause");
}

void testeParaMatriz() {
	
	int minhaMatriz[5][5] = { 77,8,3,15,9, 10,56,32,95,99, 45,32,17,85,92, 64,25,92,81,27, 32,10,99,11,45 };
	cout << maiorValorEmMatriz( minhaMatriz, 4);
	cout << endl;

	system("pause");
	}




int main()
{
#define TAMANHO_MATRIZ 5

	//testeParaVetor();
	testeParaMatriz();
	return 0;
	
	

}