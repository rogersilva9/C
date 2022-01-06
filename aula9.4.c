/* ============================================================================
    Linguagem C, o curso definitivo
    Módulo 9 Aula 4
    Título da Aula
    
    Autor: Msc. Eng. Rogério Souza da Silva
    Data:  Janeiro de 2022

    

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* ========================================================================= */
/* --- Constantes --- */




/* Protótipo da Função */


/* Função Principal */
int main()
{
	char s[100],
	*palloc;
	printf("Entre com uma string: ");
	fgets(s,100,stdin);

	palloc = (char *) malloc(strlen(s)+1);

	if (palloc == NULL)
		puts("Memória insuficiente.");
	else
	{
		strcpy(palloc,s);
		putchar(0x0A);
		printf(s);
		putchar(0x0A);
		printf(palloc);
		putchar(0x0A);
		free(palloc);
	}
	


} /* end main */

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


