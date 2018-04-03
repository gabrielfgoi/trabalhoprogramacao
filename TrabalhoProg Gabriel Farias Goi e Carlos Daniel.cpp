// TrabalhoProg Gabriel Farias Goi e Carlos Daniel.cpp : define o ponto de entrada para o aplicativo do console.


#include "stdafx.h"
#include "MATRIZ_H.h"
#include"VETOR_H.h"
#include <iostream>

using namespace std;

void testeParaVetor() {
	int meuVetor[] = { 77,8,3,15,9 };
	cout << "O maior  valor do vetor e : " << maiorValorEmVetor(meuVetor, 5) << endl;
	cout << "O menor valor do vetor e : " << menorValorEmVetor(meuVetor, 5)	 << endl;

	cout << endl;

}

void testeParaMatriz() {

#define TAMANHO_MATRIZ 5



	int minhaMatriz[5][5] = { 77,8,3,15,9, 10,56,32,95,99, 45,32,17,85,92, 64,25,92,81,27, 32,10,99,11,45 };

	cout << "Maior valor na diagonal principal : " << maiorValorEmMatriz(minhaMatriz, 1) << endl;
	cout << "Maior valor na diagonal secundária : " << maiorValorEmMatriz(minhaMatriz, 2) << endl;
	cout << "Maior valor nas diagonais : " << maiorValorEmMatriz(minhaMatriz,	 3) << endl;
	cout << "Maior valor na matriz :  " << maiorValorEmMatriz(minhaMatriz, 4) << endl;
	cout << endl;

	cout << "Menor valor na diagonal principal : " << menorValorEmMatriz(minhaMatriz, 1) << endl;
	cout << "Menor valor na diagonal secundaria : " << menorValorEmMatriz(minhaMatriz, 2) << endl;
	cout << "Menor valor nas dioagonais: " << menorValorEmMatriz(minhaMatriz, 3) << endl;
	cout << "Menor valor na matriz :  " << menorValorEmMatriz(minhaMatriz, 4) << endl;
	cout << endl;

	system("pause");
}

int main()
{

	testeParaVetor();
	testeParaMatriz();

	return 0;
}