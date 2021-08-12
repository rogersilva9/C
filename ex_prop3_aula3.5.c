/* Exercício Proposto 3 - Aula 3.5 */
/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	float salario, vendas;
	printf("Digite o valor do salário mensal: ");
	scanf("%f",&salario);
	printf("\nDigite o valor total das vendas: ");
	scanf("%f",&vendas);
	
	if (vendas >= 30000)
	   salario = 1.25 * salario;
	else
	   {
		if (vendas > 20000)
		   salario = 1.15 * salario;
                else
			
			   if (vendas > 10000)
				salario = 1.1 * salario;
			
	   }
	
	printf("\nO valor do salário é de %.2f\n",salario);
 
	return 0;
}
/* Fim da Função Principal */
