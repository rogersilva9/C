/* ============================================================================
    Linguagem C, o curso definitivo
    Módulo 8 Aula 5
    Título da Aula
    
    Autor: Msc. Eng. Rogério Souza da Silva
    Data:  Outubro de 2021

    
Exercício proposto: escreva um programa que você digite ohm seguido dos parâmetros
de tensão e corrente, e seja calculado o valor da resistência, lembrando que
R = V / I
Exemplo: você digita
ohm 12 1 15 2 5 0.001
E o resultado será impresso no seguinte formato
Resistores: 12.0 | 7.5 | 5000.0 | Ohms.

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Constantes --- */


/* ========================================================================= */
/* --- Protótipo das Funções --- */



/* ========================================================================= */
/* --- Variáveis Globais --- */


/* ========================================================================= */
/* --- Função Principal --- */
int main(int argc, char *argv[])
{

	float ohm,volt,ampere;
	unsigned int i;


	for(i=1; i<argc; i++)
	{
		
		if (i%2)  volt = atof(argv[i]);
		else
		{       
			ampere = atof(argv[i]);
			ohm = volt/ampere;
			printf("%.1f | ",ohm);

		} /* end else do if */
		
		
	} /* end for */
	
	printf(" Ohms.\n");
}

/* ========================================================================= */
/* --- Desenvolvimento de funções --- */


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


