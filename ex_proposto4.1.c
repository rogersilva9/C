/* Exercício Proposto - Aula 4.1 */
/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	char carro;
	int idade, auxilio;

	printf("Qual a sua idade? ");
	scanf("%d",&idade);
	printf("\nVocê possui carro? (Ss/Nn) ");
	scanf(" %c",&carro);

	if (((carro == 'n') || (carro == 'N')) && idade >= 18 && idade <=50)
		auxilio = 500;
	else
		auxilio = 200;

	printf("\nO auxílio-transporte será de %d,00\n",auxilio);



 
	return 0;
}
/* Fim da Função Principal */
