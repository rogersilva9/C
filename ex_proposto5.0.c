/* Exercício Proposto - Aula 5.0*/

/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	
	unsigned short int num,soma,a,b; /* Garantindo número positivo usando no máximo 16 bits */

	printf("Digite o número (no máximo 85): ");
	scanf(" %hd",&num);
	
	if (num > 85)
		printf("Valor digitado acima do especificado\n");
	else
	{
		a = b = num;		
		printf("Valor do número somado a 1: %d\n",++a);
		printf("valor do número subtraído a 1: %d\n",--b);
		printf("Soma de todos os valores envolvidos: %d\n",soma = num + a + b);
		printf("O quadrado da soma de todos os valores envolvidos: %d\n",soma * soma);


        } /* fim do else */
	return 0;
}
/* Fim da Função Principal */
