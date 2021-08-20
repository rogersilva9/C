/* Exercício Proposto - Aula 6.0 - O exercício da caixa */


/* Eng. Rogério Souza da Silva */
/* Agosto de 2021              */



/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Protótipo de funções */

void caixa3();
void caixa7();

/* Função Principal */

int main()
{
	unsigned num = 0;
	
	while(num < 10)
	{
		printf("Digite um número: ");
		scanf(" %d",&num);	
		if (num == 3)    caixa3();
		if (num == 7)    caixa7();
	} /* Fim do While */	
	return 0;
}
/* Fim da Função Principal */


/* Início do procedimento "Caixa3" */
void caixa3()
{
	puts("+++++++++++++++++");
	puts("|               |");
	puts("| N U M E R O 3 |");
	puts("|               |");
	puts("+++++++++++++++++");

}
/* Fim do procedimento "Caixa3" */


/* Início do procedimento "Caixa7" */
void caixa7()
{
	puts("+++++++++++++++++");
	puts("|               |");
	puts("| N U M E R O 7 |");
	puts("|               |");
	puts("+++++++++++++++++");

}
/* Fim do procedimento "Caixa7" */
