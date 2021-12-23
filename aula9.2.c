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


/* Estrutura */
struct drinks
{
	int margarita,
	dry_martini,
	caipirinha;
}open_bar;


/* Protótipo da Função */
void barman(struct drinks *p);


/* Função Principal */
int main()
{
	barman(&open_bar);
	printf("%4d\n",open_bar.margarita);/* imprime 555 */
	printf("%4d\n",open_bar.dry_martini); /* imprime 741 */
	printf("%4d\n",open_bar.caipirinha); /* imprime 4093 */
} /* end main */
/* Desenvolvimento barman */
void barman(struct drinks *p)
{
	p->margarita= 555;
	p->dry_martini = 741;
	p->caipirinha = 4093;
} /* end barman */
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


