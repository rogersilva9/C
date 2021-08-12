/* Programa proposto if else */
/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	int var_a = 0, var_b =0;
	printf("Digite dois números para comparação: \n");
	scanf("%d%d",&var_a,&var_b);
	if (var_a == var_b)
	   printf("Os números são iguais\n");
	else
	   printf("Os números são diferentes\n");
	return 0;
}
/* Fim da Função Principal */
