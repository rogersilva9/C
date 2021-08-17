/* Exercício Proposto - Aula 5.4 - Escada */

/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>


/* Função Principal */

int main()
{
	unsigned int i,j,num;
	printf("Digite o número de degraus: ");
	scanf(" %d",&num);

	for (i=1;i<=num;i++)
	{
		for (j=1;j<=i;j++)
			printf("#");
		puts("");
		
	} /* fim do primeiro for */

	return 0;
}
/* Fim da Função Principal */
