/* Exercício Proposto - Aula 6.1a - O do cálculo de frequência de corte e constante de tempo*/


/* Eng. Rogério Souza da Silva */
/* Agosto de 2021              */



/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* ----------- Protótipo de funções--------------------- */

void fpb(float r, float c);
void constante_tempo(float r,float c);


/* ----------Função Principal ----------------------------*/

int main()
{
	float r = 0, c = 0;
	char type = 0;

	printf("Digite o valor de R: ");
	scanf(" %f",&r);
	printf("Digite o valor de C: ");
	scanf(" %f",&c);
	puts("");
	puts("Qual o tipo de cálculo deseja fazer?");
	puts("A - Frequência de corte do filtro passa baixas");
	puts("B - Constante de tempo");
	while ((type != 'a') && (type !='A') && (type != 'b') && (type != 'B'))  /* Exige que o usuário digite A ou B */  	
		scanf(" %c",&type);
		

	switch (type)
	{	
		case 'a':
		case 'A':{ 
			fpb(r,c);
			break;
			} /* Fim do case A */
		case 'b':
		case 'B':
			{
			constante_tempo(r,c);
			break;			
			} /* Fim do case B */
	} /* Fim do switch */


	return 0;
}
/* -------- Fim da Função Principal-----------------------*/



/* -------- Desenvolvimento das funções  ----------------*/


void fpb(float r, float c)
{
	float fc = 0;

	fc  = 1 / (2 * 3.14159 * r * c);

	printf("O valor da frequência de corte do filtro passa baixas é de %.2f Hz\n",fc);


} /*Fim da função fpb */


void constante_tempo(float r,float c)
{
	float tal = 0;

	tal = r * c;

	printf("A constante de tempo é de %.6f s\n",tal);

} /* Fim da função constante_tempo */
