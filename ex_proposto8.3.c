/* ============================================================================
    Linguagem C, o curso definitivo
    Módulo 8 Aula 3
    Título da Aula
    
    Autor: Msc. Eng. Rogério Souza da Silva
    Data:  Outubro de 2021

    
Exercício proposto: a função protocol apresentada no Box 7 implementa um protocolo
que verifica dois operandos. Sendo o primeiro operando maior, a função retorna um ‘H’ de high,
do contrário, retorna um ‘L’ de low.

Implemente uma função que irá receber dois operandos inteiros e a função protocol
como parâmetro, interpretando o protocolo corretamente. A função apresentará a seguinte
saída:
“Resultado do protocolo: H” para quando o primeiro operando for maior. Do contrário:
“Resultado do protocolo: L”

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Constantes --- */


/* ========================================================================= */
/* --- Protótipo das Funções --- */

char protocol(int op1, int op2);
void interpreta_protocol(int op1, int op2, char(*func)(int,int));


/* ========================================================================= */
/* --- Variáveis Globais --- */


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
      int op1,op2;

      printf("Digite um valor para Op1: ");
      scanf("%d",&op1);
      printf("Digite um valor para Op2: ");
      scanf("%d",&op2);

      interpreta_protocol(op1,op2,protocol(op1,op2));

  
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* ========================================================================= */
/* --- Desenvolvimento de funções --- */

char protocol(int op1, int op2)
{
	char response;
	response = op1 > op2 ? 'H' : 'L';
return response;
} /* end protocol */

void interpreta_protocol(int op1, int op2, char(*func)(int,int))
{
	printf("Resultado do protocolo: %c\n", protocol(op1, op2));

} /* end interpreta_protocol */

/* ============================================================================  
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
                                                              
============================================================================ */
/* --- Final do Programa --- */


