// trabalhoprogramacao.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "MATRIZ_H.h"
#include"VETOR_H.h"
#include <iostream>

using namespace std;


int menu(int escopoBusca) {
	int escopoBusca = INT_MIN;

	cout << "Escolha oq deseja fazer : " << endl;
	cout << "1- Diagonal Principal " << endl;
	cout << "2- Diagonal Secundaria " << endl;
	cout << "3- Diagonais " << endl;
	cout << "4- Matriz Completa" << endl;
	cout << "5- Sair " << endl;
	cout << endl;

	return escopoBusca;
}


int main()
{

	int escopoBusca = menu(escopoBusca);


	//Apenas um exemplo de teste q eu fiz ( pode tirar se quiser ) .
	//int meuVetor[] = { 77,8,3,15,9 };
	//cout << maiorValorEmVetor(meuVetor, 5);
	//return 0;


}

