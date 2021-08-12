/* Exercício Proposto - Aula 4.3 */
/* Menu de escolha de grandezas elétricas - Aula 4.3 */
/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main()
{
	int escolha;
	float tensao, corrente, resistencia, potencia;

	printf("Consdierando um circuito eletrico composto por uma fonte e um resistor\n");

	printf("Digite o valor da tensao da fonte em volts: ");
	scanf("%f",&tensao);
	printf("\nDigite o valor do resitor:");
	scanf(" %f",&resistencia);
	printf("\nQual o dado deseja que seja calculado\n1 - corrente que circula pelo resistor\n2 - potencia dissipada no resistor\n3 - valor da tensao no resistor para corrente de 100mA\n");
	scanf("%d",&escolha);
	printf("\n");

	if (escolha < 1 || escolha > 3)
           {  
		printf("A escolha nao esta entre as opcoes, vou assumir o item 2 dessa vez\n"); 
		escolha = 2;
		
		

      	   } /* end_if */
	if (escolha == 1)
	   {
		corrente = tensao / resistencia;
		printf("A corrente que circula pelo resistor e de %.2f amperes\n",corrente);
	   } /* fim do segundo if */

	else if (escolha == 2)
	   {
		potencia = tensao * tensao / resistencia;
		printf("A potencia dissipada no resistor e de %.2f watts\n",potencia);

	   } /* fim do else if */
	else
	   {
		tensao = resistencia * 0.01; /* 0.01 equivalo a 100mA ao quadrado
		printf("O valor da tensao para 100mA no resistor e de %.2f volts\n",tensao); /* como é o fim do programa creio não ter problema aproveitar a mesma variável */
            } /* fim do else */





 
	return 0;
}
/* Fim da Função Principal */
