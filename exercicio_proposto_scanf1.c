/* Programa da aula de scanf - Exercício proposto 1 */
/* Julho de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	float a = 0.0,b = 0.0;
	printf("Digite dois números: ");
	scanf("%f%f",&a,&b);
	printf("Resultado da soma: %.2f +  %.2f =  %.2f \n",a,b,a+b);
	printf("Resultado da subtração: %.2f -  %.2f =  %.2f \n",a,b,a-b);
	printf("Resultado da multiplicação: %.2f x  %.2f =  %.2f \n",a,b,a*b);
	printf("Resultado da divisão: %.2f : %.2f =  %.2f \n",a,b,a/b);
	

	return 0;
}
/* Fim da Função Principal */
