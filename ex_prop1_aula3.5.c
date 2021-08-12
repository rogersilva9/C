/* Exercício Proposto 1 - Aula 3.5 */
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
	
	printf("%d = %d : ",var_a,var_b);
	if (var_a == var_b)
	   printf("Verdadeiro\n");
	else
	   printf("Falso\n");

	printf("%d != %d: ",var_a,var_b);
	if (var_a != var_b)
	   printf("Verdadeiro\n");
	else
	   printf("Falso\n");

	printf("%d < %d : ",var_a,var_b);
	if (var_a < var_b)
	   printf("Verdadeiro\n");
	else
	   printf("Falso\n");

	printf("%d <= %d: ",var_a,var_b);
	if (var_a <= var_b)
	   printf("Verdadeiro\n");
	else
	   printf("Falso\n");

	printf("%d > %d : ",var_a,var_b);
	if (var_a > var_b)
	   printf("Verdadeiro\n");
	else
	   printf("Falso\n");
	
	printf("%d >= %d: ",var_a,var_b);
	if (var_a >= var_b)
	   printf("Verdadeiro\n");
	else
	   printf("Falso\n");




	return 0;
}
/* Fim da Função Principal */
