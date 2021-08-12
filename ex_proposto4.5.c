/* Exercício Proposto - Aula 4.5*/

/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	
	int idade;
	char estado_civil;

	printf("Digite a sua idade: ");
	scanf(" %d",&idade);

	printf("\nDigite seu estado civil por inicial\nS - Solteiro\nC - Casado\nD - Divorciado\nV - Viúvo\n");
	scanf(" %c",&estado_civil);

	switch(estado_civil)
	{
		case 's':
		case 'S':
			printf("O sujeito tem %d anos e e feliz\n",idade);
		break;
		
		case 'c':
		case 'C':
			printf("O sujeito tem %d anos e e casado\n",idade);
		break;

		case 'd':
		case 'D':
			printf("O sujeito tem %d anos e e divorciado\n",idade);
		break;
		
		case 'v':
		case 'V':
			printf("O sujeito tem %d anos e e viuvo\n",idade);
		
		default:
			printf("Opcao invalida\n");
	} /* end_switch */	

		





 
	return 0;
}
/* Fim da Função Principal */
