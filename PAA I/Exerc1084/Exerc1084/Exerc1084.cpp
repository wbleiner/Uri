// Exerc1084.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	list<int> lista, Maior;
	int n, d, numero, result;
	int power = 10;
	//do
	{
		cin >> n >> d;
		cin >> numero;
		lista.push_front(numero % power);
		for (int i = 0; i < n - 1; i++)
		{
			result = numero % (power * 10);
			lista.push_front(result / power);
			power = power * 10;
		}
	
		list<int>::iterator it;
		list<int>::iterator it1;

		for (int i=0;i<d;i++)
		{
			int menor = 0;
			for (int j =0;j<lista.size();j++)
			{
				if (lista[j] < lista[menor])
				{
					it = it1;
				}
			}
			lista.erase(it);
		}		
		
		for (list<int>::iterator it = lista.begin(); it != lista.end(); it++)
		{
			cout << *it;
		}
	} //while (n && d);

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
