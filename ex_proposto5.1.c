/* Exercício Proposto - Aula 5.1*/

/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	
	int inicio = 0,
	       fim = 0;
	
	printf("Digite o valor da frequência inicial do range: ");
	scanf(" %d",&inicio);
	printf("Digite o valor da frequência final do range: ");
	scanf(" %d",&fim);
	
	while(inicio <= fim)
	{
		printf("%d Hz\n\n",inicio);
		inicio++;

	} /* fim do while */	

        return 0;
}
/* Fim da Função Principal */
