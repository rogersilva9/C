/* Programa da aula de casting, minutos */
/* Julho de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	int minutos;
	float horas;

	printf("Inserir o valor de minutos a ser convertido: ");
	scanf("%d",&minutos);
	horas = (float)minutos/60.0;
	printf("%d minutos correspondem a %.2f horas./n",minutos,horas);

	return 0;
}
/* Fim da Função Principal */
