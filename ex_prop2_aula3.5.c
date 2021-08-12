/* Exercício Proposto 2 - Aula 3.5 */
/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	int var_a, var_b;
	printf("Digite os dois números inteiros:\n");
	scanf("%d%d",&var_a,&var_b);
	
	if (var_a >= var_b)
	   printf("%d %d\n",var_a,var_b);
	else
	   printf("%d %d\n",var_b,var_a);

	return 0;
}
/* Fim da Função Principal */
