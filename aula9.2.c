/* ============================================================================
    Linguagem C, o curso definitivo
    Módulo 9 Aula 2
    Título da Aula
    
    Autor: Msc. Eng. Rogério Souza da Silva
    Data:  Dezembro de 2021

    

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

struct drinks
{
	int margarita,
	    dry_martini,
	    caipirinha;

}open_bar;
struct drinks *cheers;

/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
	cheers = &open_bar;

	(*cheers).margarita = 31;
	cheers -> dry_martini =12;
	cheers -> caipirinha = 51;

	
	printf("%d\n",cheers->margarita);	
	printf("%d\n",cheers->dry_martini);
	printf("%d\n",cheers->caipirinha);
	
	return 0;	
}
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

