/* Exercício proposto: desenvolva o projeto de uma matriz de 4 linhas e 6 colunas. Elabore uma interface onde o usuário digita o número da linha e número da coluna e 
um número inteiro de 0 a 999. A matriz vai sendo preenchida a medida que o usuário vai inserindo novas entradas. Importante: neste sistema as linhas e colunas devem começar com índice 1. E todos os conteúdos devem ser inicializados em 0. Se digitado um número de linha ou um número de coluna fora da faixa da matriz, simplesmente não atualiza nada. */

/* ===================================================================================================================== */
/* Exercício Proposto - Aula 7.2 */


/* Eng. Rogério Souza da Silva */
/* Setembro de 2021              */

/* ===================================================================================================================== */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* ===================================================================================================================== */
/* Protótipo de funções */

void imprime_matriz(unsigned int v[4][6]);
/* ===================================================================================================================== */

/* ===================================================================================================================== */
/* Constantes */


/* ===================================================================================================================== */

/* ===================================================================================================================== */
/* variáveis */

unsigned int v[4][6] = {0}; /* Inicia matriz 4 por 6 com zero */


/* ===================================================================================================================== */
int main()
{
    unsigned int linha, coluna,num;
    
    while(1)
    {
        num = -1; /* inicia num forçando um valor fora do range permitido */

        while (num <= 0 || num >= 999 || num == -999)
            {
                printf("Digite o valor a ser inserido na planilha (entre 0 e 999): ");
                scanf("%d",&num);
                
            } /* Fim do while de inserir valor */
        if (num == -999)   break;   /* encerra o programa */
        printf("Digite o número da linha em que o valor será inserido (1 a 4): ");
        scanf("%d",&linha);
        printf("Digite o número da coluna em que o valor será inserido (1 a 6): ");
        scanf("%d",&coluna);
        
        if (linha >= 1 && linha <=4 && coluna >= 1 && coluna <=6) /* Só altera se estiver dentro da matriz */
            v[linha-1][coluna-1] = num;

        puts("");        
        imprime_matriz(v);
        puts("");
                
    
    } /* Fim do loop infinito */


    

return 0;
}/* Fim da Função Principal*/




   

/* ===================================================================================================================== */


/* Desenvolvimento das funções de funções */

void imprime_matriz(unsigned int v[4][6])
{
    unsigned int linha, coluna;
    puts("-------------------------------------");
    for (linha = 0; linha <=3; linha++)
    {
        for (coluna = 0; coluna <=5; coluna++)       
            printf("|  %d  ",v[linha][coluna]);
            
        printf("|\n-------------------------------------\n");
    } /* Fim do for de linha */ 
} /* Fim da função imprime_matriz */
