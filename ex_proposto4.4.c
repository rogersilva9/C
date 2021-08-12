/* Exercício Proposto - Aula 4.4*/

/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	
	float tensao;

	printf("Entre com o valor da bateria: ");
	scanf("%f",&tensao);

	tensao < 10 ? printf("\nLow battery\n") : printf("\nNormal battery\n");



 
	return 0;
}
/* Fim da Função Principal */
