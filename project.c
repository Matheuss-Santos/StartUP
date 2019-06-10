#include <stdio.h> //Inclui a biblioteca de entrada e saida
#include <stdlib.h> //Inclui a biblioteca de alocação de memória etc
#include <string.h> //Inclui a biblioteca de strings
//Criado por Matheus@Santos
int main() //Função principal
{
	int help(); //Declara uma função
	int esc = 0; //Cria uma variável do tipo Inteiro com o identificador "esc" e atribui o valor 0 a ela
	printf("\tSTARTUP - SISTEMA DE GERENCIAMENTO DE VENDAS E ESTOQUE <VERSAO FREE>\n");	//Imprime na tela
	printf("Informe o que voce deseja fazer:\n"); //Imprime na tela
	printf("[0] - AJUDA\n"); //Imprime na tela
	printf("[1] - Gerenciar Estoque\n"); //Imprime na tela
	printf("[2] - Registrar Venda\n"); //Imprime na tela
	printf("[3] - Gerar Relatorio\n"); //Imprime na tela
	printf("[4] - Sair\n"); //Imprime na tela
	printf("Sua escolha: "); //Imprime na tela
	scanf("%i", &esc); //Pega o que o usuário digitou e coloca na variável esc
	switch(esc) //Estrutura de decisão, verifica se o valor da variável é igual a algum ali se for ele excuta alguma ação
	{
		case 0: //Verifica se o valor que o usuário digitou é igual a zero se for ele executa a intrução abaixo
			help(); //Chama a função help
			break; //Pausa a ação
		case 1: //Verifica se o valor que o usuário digitou é igual a um se for ele executa a intrução abaixo
			printf("Gerenciar\n"); //Imprime "Gerenciar" na tela
			break; //Pausa a ação
		case 2: //Verifica se o valor que o usuário digitou é igual a dois se for ele executa a intrução abaixo
			printf("Registrar\n"); //Imprime "Registrar" na tela
			break; //Pausa a ação
		case 3: //Verifica se o valor que o usuário digitou é igual a três se for ele executa a intrução abaixo
			printf("Gerar\n"); //Imprime "Gerar" na tela
			break; //Pausa a ação
		case 4: //Verifica se o valor que o usuário digitou é igual a quatro se for ele para e não executa nada sai do programa
			break; //Pausa a ação
		default: //Se a variável não for igual a nenhuma opcao de cima ele mostra "Opcao invalida"
			printf("Opcao invalida\n"); //Imprime na tela
			break; //Pausa a ação
	} //Acaba aqui a estrutura de decisão
	system("pause"); //Dá uma pausa no programa
	return 0; //Retorna o valor zero ou seja programa funcionou corretamente
}
int help() //Função help
{
	printf("\t=====AJUDA=====\n"); //Imprime na tela
	printf("Escolha uma opcao para poder usar o programa\n"); //Imprime na tela
	return 0; //Retorna o valor zero
}