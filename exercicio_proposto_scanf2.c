/* Programa da aula de scanf - Exercício proposto 2 */
/* Julho de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	float c = 0.0, f = 0.0;
	printf("Digite a temperatura em graus celsius: ");
	scanf("%f",&c);
	f = 1.8 * c + 32;
	printf("%.2f equivale a %.2f em graus fahrenheit \n",c,f);
	
	return 0;
}
/* Fim da Função Principal */
