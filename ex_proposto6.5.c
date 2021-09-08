/* Desenvolva uma macro que calcule a média ponderada entre 3 notas de 1 a 10. Desenvolva o projeto da interface, onde o usuário entra com a nota e o respecitvo peso. Ao final do terceiro peso o sistema calcula o resultado. */



/* ===================================================================================================================== */
/* Exercício Proposto - Aula 6.5 */


/* Eng. Rogério Souza da Silva */
/* Setembro de 2021              */

/* ===================================================================================================================== */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* ===================================================================================================================== */
/* Protótipo de funções */

/* ===================================================================================================================== */

/* ===================================================================================================================== */
/* Macros */

#define media_ponderada(nota1,peso1,nota2,peso2,nota3,peso3)         (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/ (peso1 + peso2 + peso3)

/* ===================================================================================================================== */


/*   Função Principal */

int main()
{
	static float nota1,
		   	    nota2,
		            nota3,
		            peso1,
		            peso2,
		            peso3;

	
	puts("Digite a nota 1: ");
	scanf(" %f",&nota1);
	puts("Digite o peso da nota 1: ");
	scanf(" %f",&peso1);
	
	puts("Digite a nota 2: ");
	scanf(" %f",&nota2);
	puts("Digite o peso da nota 2: ");
	scanf(" %f",&peso2);
		
	puts("Digite a nota 3: ");
	scanf(" %f",&nota3);
	puts("Digite o peso da nota 3: ");
	scanf(" %f",&peso3);	

	printf("A média ponderada é de %.2f\n",media_ponderada(nota1,peso1,nota2,peso2,nota3,peso3));

	return 0;
}
/* Fim da Função Principal*/

/* ===================================================================================================================== */

