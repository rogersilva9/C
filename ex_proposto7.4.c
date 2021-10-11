/* Exercício proposto: Exercício proposto: desenvolva um programa que solicita ao usuário a entrada do Nome, Sobrenome, Endereço, Bairro, Cidade, CEP e Telefone. Após todas as entradas, os dadoscompletos devem ser impressos na tela. */

/* ===================================================================================================================== */
/* Exercício Proposto - Aula 7.4 */


/* Eng. Rogério Souza da Silva */
/* Outubro de 2021              */

/* ===================================================================================================================== */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* ===================================================================================================================== */
/* Protótipo de funções */


/* ===================================================================================================================== */

/* ===================================================================================================================== */
/* Constantes */


/* ===================================================================================================================== */

/* ===================================================================================================================== */
/* variáveis */

char nome[20],sobrenome[20],endereco[100],bairro[20],cidade[20],cep[10],telefone[10];


/* ===================================================================================================================== */
int main()
{
	puts("Digite seu nome:");
	fgets(nome,20,stdin);
	puts("Digite seu sobrenome:");
	fgets(sobrenome,20,stdin);
	puts("Digite seu endereço:");
	fgets(endereco,100,stdin);
	puts("Digite seu bairro:");
	fgets(bairro,20,stdin);
	puts("Digite sua cidade:");
	fgets(cidade,20,stdin);
	puts("Digite seu CEP:");
	fgets(cep,10,stdin);
	puts("Digite seu teletefone:");
	fgets(telefone,10,stdin);
	puts("");
	printf("Nome: %s %s\n",nome,sobrenome);
	printf("Endereço: %s\n",endereco);
	printf("Bairro: %s\n",bairro);
	printf("Cidade: %s\n",cidade);
	printf("CEP: %s\n",cep);
	printf("Telefone: %s\n",telefone);          
    
  

return 0;
}/* Fim da Função Principal*/




   

/* ===================================================================================================================== */


/* Desenvolvimento das funções de funções */


