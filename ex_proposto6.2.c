/* Um processador tem um conversor AD de 10 bits, portanto o range vai de 0 a 1023. Implemente uma função que receba o valor de 0 a 1023 e retorne um valor linearmente proporcional para 8 bits, isto é, de 0 a 255. */

/*adc_8bits = 255 * adc_10bits / 1023*/

/* ===================================================================================================================== */
/* Exercício Proposto - Aula 6.2 */


/* Eng. Rogério Souza da Silva */
/* Agosto de 2021              */

/* ===================================================================================================================== */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* ===================================================================================================================== */
/* Protótipo de funções */

unsigned int converte_adc_10p8bits(unsigned int adc_10bits);


/* ===================================================================================================================== */
/* ----------Função Principal ----------------------------*/

int main()
{
	unsigned int adc_10bits = 1024;

	puts("Entre com o valor do ADC de 10 bits para ser convertido para 8 bits");
	puts("(permitido apenas valores entre 0 e 1023)");
	
	while (1)
		{
		    scanf(" %d",&adc_10bits);
		    if (adc_10bits >= 0 && adc_10bits <= 1023)      break;   /* Força o usuário a digitar um valor dentro do range. Testa depois do scanf  */
 		} /* Fim do While   */
	printf("O valor convertido é: %d\n",converte_adc_10p8bits(adc_10bits));

	return 0;
}
/* -------- Fim da Função Principal-----------------------*/



/* ===================================================================================================================== */



/* -------- Desenvolvimento das funções  ----------------*/
unsigned int converte_adc_10p8bits(unsigned int adc_10bits)
{
	unsigned int adc_8bits;
	
	adc_8bits = 255 * adc_10bits / 1023;

	
	return adc_8bits;

	
} /*fim da função converte_adc_10p8bits      */
/* ===================================================================================================================== */
