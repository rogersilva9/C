/* Exercício proposto: desenvolva um projeto em C onde o usuário define um valor máximo de aporte para a bolsa de valores. Após, ele entra com o valor de 5 ações (que devem ser armazenados em um vetor) e a quantidade para cada ativo. O sistema imprime o valor totalem dinheiro e soa um alerta caso o aporte seja menor que o total. Desenvolva o projeto de modo a ser alterado para N ações.*/

/* ===================================================================================================================== */
/* Exercício Proposto - Aula 7.0 */


/* Eng. Rogério Souza da Silva */
/* Setembro de 2021              */

/* ===================================================================================================================== */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* ===================================================================================================================== */
/* Protótipo de funções */

/* ===================================================================================================================== */

/* ===================================================================================================================== */
/* Constantes */

#define n_ativos 10

/* ===================================================================================================================== */


/*   Função Principal */

int main()
{
	float precos_ativos[n_ativos];     /* Declara vetor float de preços dos ativos */
	unsigned int qtd_ativos[n_ativos]; /* Declara vetor int de quantidades dos ativos */
	char choice = 's';                 /* Declara e inicia com choice em s, para entrar os dados */
	unsigned int i;			   /* Declara o contador de índice */
	float aporte = 0;                  /* Declara e inicia com aporte em 0  */	
	float total = 0;                   /* Declara e inicia com total em 0  */
	
	while (choice == 's' || choice == 'S')
	{
		system("clear");
		total = 0;	        
		printf("Insira o valor do aporte $: ");
		scanf(" %f",&aporte);

                for (i=0; i < n_ativos ; i++)  /* itera entradas de preços e quantidades de ativos */   	
		{
			printf("\nAtivo %d $: ",i+1);
			scanf(" %f",&precos_ativos[i]);
			printf("\nQtd   %d  : ",i+1);
			scanf(" %d",&qtd_ativos[i]);
			total = total + precos_ativos[i] * qtd_ativos[i];

		}  /* fim do primeiro for */
		printf("Total   $: %.2f\n",total);
		
		if (total <= aporte)      puts("Aporte suficiente.");       /* Testa se o aporte foi suficiente */
		else                    printf("Aporte insuficiente.\a");

		puts("Calcular novamente?");
		printf("<s> sim  | <n> não >>>");
		scanf(" %c",&choice);
	
	 } /* Fim do primeiro while */


}/* Fim da Função Principal*/

/* ===================================================================================================================== */

