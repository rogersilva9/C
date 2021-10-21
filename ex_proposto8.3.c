0/* ============================================================================
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

/* ========================================================================= */
/* --- Variáveis Globais --- */


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
      
  
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


