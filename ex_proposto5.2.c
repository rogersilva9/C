/* Exercício Proposto - Aula 5.2*/

/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Função Principal */

int main()
{
	setlocale(LC_ALL,"pt_BR.UTF-8"); /* ajustado para funcionar no Linux Mint */
	char opcao;

	do
	{
	system("clear"); /*clear é o equivalente ao CLS no Linux, limpa a tela */
	puts("Menu de Opções:");
	puts("N - Novo Cliente");
	puts("C - Consultar Clientes");
	puts("D - Deletar Clientes");
	puts("S - Sair");
	puts("");
	printf("Escolha uma opção: "); /* usei printf porque não queria a quebra de linha */
	scanf(" %c",&opcao);
	if (opcao == 's') 
		 opcao = 'S'; /* se for digitado 's' minúsculo ele converte pra 'S' maiúsculo, facilita meu trabalho de teste final do Do*/
	switch (opcao)
		{
		    case 'n':
		    case 'N':
		    {
			system("clear"); /*clear é o equivalente ao CLS no Linux, limpa a tela */
			puts("Menu Novo Cliente");
			puts("Pressione uma tecla para continuar...");
			getchar();
			getchar(); /* o primeiro getchar lia o que estava no buffer, por isso dupliquei, funcionou mas não sei se é o mais correto */
			break;	
                    } /* fim do case N */
		    case 'c':
		    case 'C':
		    {
			system("clear"); /*clear é o equivalente ao CLS no Linux, limpa a tela */
			puts("Menu Consultar Clientes");
			puts("Pressione uma tecla para continuar...");
			getchar();
			getchar(); /* o primeiro getchar lia o que estava no buffer, por isso dupliquei, funcionou mas não sei se é o mais correto */
			break;	
                    } /* fim do case C */ 
		    case 'd':
		    case 'D':
		    {
			system("clear");
			puts("Menu Deletar Clientes");
			puts("Pressione uma tecla para continuar...");
			getchar();
			getchar(); /* o primeiro getchar lia o que estava no buffer, por isso dupliquei, funcionou mas não sei se é o mais correto */
			break;	
                    } /* fim do case D */ 
	
		} /* fim do switch */

	} while (opcao != 'S');
	/*fim do Do*/
        return 0;
}
/* Fim da Função Principal */
