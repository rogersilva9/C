/* Exercício Proposto - Aula 6.1 - O exercício da caixa v.2*/


/* Eng. Rogério Souza da Silva */
/* Agosto de 2021              */



/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Protótipo de funções */

void caixa(unsigned a);


/* Função Principal */

int main()
{
	unsigned num = 0;
	
	while(num < 10)
	{
		printf("Digite um número: ");
		scanf(" %d",&num);	
		if (num < 10)     caixa(num);
	} /* Fim do While */	
	return 0;
}
/* Fim da Função Principal */


/* Início do procedimento "Caixa" */
void caixa(unsigned a)
{
	puts("+++++++++++++++++");
	puts("|               |");
	printf("| N U M E R O %d |\n",a);
	puts("|               |");
	puts("+++++++++++++++++");

}
/* Fim do procedimento "Caixa" */
