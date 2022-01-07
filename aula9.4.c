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





/* Protótipo da Função */


/* Função Principal */
int main()
{
	FILE *arq;
	unsigned char *palloc;
	unsigned long int num_bytes=0, i=0;
	int chr;

	arq = fopen("code.txt","r");
	
	if (arq==NULL)
	{
		puts("Falha ao abrir o arquivo.");
		exit(0);
	}	
	
	puts("Arquivo aberto com sucesso.");

	while ((chr =fgetc(arq))!=EOF)
		num_bytes++;

	printf("Tamanho do arquivo: %lu bytes\n",num_bytes);
	rewind(arq); /* ponteiro retorna ao início do arquivo   */

	/* aloca memória de acordo com o tamanho do arquivo */
	
	palloc = (unsigned char *) malloc(num_bytes*sizeof(char));

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


