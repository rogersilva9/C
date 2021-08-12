/* Programa da aula lei de Ohm */
/* Julho de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	float resistor = 5.0E3,
	      voltage = 12.0,
	      current;

	current = voltage/resistor;
	printf("I = %.4f\n",current);
	
	

	return 0;
}
/* Fim da Função Principal */
