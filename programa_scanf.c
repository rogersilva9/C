/* Programa da aula de scanf */
/* Julho de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	char carac1,carac2;
	printf("Digite um caractere: ");
	scanf("%c",&carac1);
	printf("Digite outro caractere: ");
	scanf(" %c",&carac2);
	printf("Os caracteres digitados foram: %c e %c\n",carac1,carac2);

	return 0;
}
/* Fim da Função Principal */
