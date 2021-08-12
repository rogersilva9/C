/* Programa de exercício proposto filtro passa baixas */
/* Julho de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	float resistor = 3.0E3,
	      capacitor = 1.0E-6,
	      pi = 3.14159265,
	      frequency;

	frequency  = 1/(2*pi*resistor*capacitor);
	printf("Fc = %.2f Hz\n",frequency);
	
	

	return 0;
}
/* Fim da Função Principal */
