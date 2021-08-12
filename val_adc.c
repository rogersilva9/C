/* Programa da aula de casting, val_adc */
/* Julho de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	int val_ADC;
	float volts;

	printf("Inserir um valor de ADC entre 0 e 1023: ");
	scanf("%d",&val_ADC);
	volts = val_ADC*5.0/1023.0;
	printf("A tensão lida foi: %.2fV\n",volts);

	return 0;
}
/* Fim da Função Principal */
