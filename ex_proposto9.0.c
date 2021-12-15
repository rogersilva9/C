/* ============================================================================
    Linguagem C, o curso definitivo
    Módulo 9 Aula 0
    Título da Aula
    
    Autor: Msc. Eng. Rogério Souza da Silva
    Data:  Dezembro de 2021

    
Exercício proposto: Desenvolva o projeto de um programa para criptografar arquivos
de texto, que desloque os caracteres digitados 3 posições para frente.
Exemplo:
Mensagem original: Curso de C
Mensagem criptografada: Fxuvr#gh#F
Desenvolva um software para remover a criptografia e gerar um novo arquivo com a
mensagem original.
Exemplo:
Mensagem criptografada: Fxuvr#gh#F
Criptografia removida: Curso de C

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Constantes --- */


/* ========================================================================= */
/* --- Protótipo das Funções --- */
void criptografar(char *arquivo_cripto, char *arquivo_decripto);
void decriptografar(char *arquivo_cripto,char *arquivo_decripto);

/* ========================================================================= */
/* --- Variáveis Globais --- */

/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
	decriptografar("decripto.txt","cripto.txt");

	return 0;
	
}
/* --- Desenvolvimento de funções --- */
void criptografar(char *arquivo_cripto, char *arquivo_decripto)
{
	FILE *arq_r, *arq_w;
	int ch;
	arq_r = fopen(arquivo_cripto,"r");
	if (arq_r == NULL)
	{
		puts("Erro de leitura do arquivo a ser criptografado.");
		exit(1);
	}	

	arq_w = fopen(arquivo_decripto,"w");
	if (arq_w == NULL)
	{
		puts("Erro de leitura do arquivo a ser decriptografado.");
		exit(2);
	}	
	
	while((ch=fgetc(arq_r))!=EOF)	
		fputc(ch+3,arq_w);

	fclose(arq_r);
	fclose(arq_w);
	puts("Arquivo criptografado");
}

void decriptografar(char *arquivo_decripto, char *arquivo_cripto)
{
	FILE *arq_r, *arq_w;
	int ch;
	arq_r = fopen(arquivo_decripto,"r");
	if (arq_r == NULL)
	{
		puts("Erro de leitura do arquivo a ser decriptografado.");
		exit(1);
	}	

	arq_w = fopen(arquivo_cripto,"w");
	if (arq_w == NULL)
	{
		puts("Erro de leitura do arquivo a ser criptografado.");
		exit(2);
	}	
	
	while((ch=fgetc(arq_r))!=EOF)	
		fputc(ch-3,arq_w);

	fclose(arq_r);
	fclose(arq_w);
	puts("Arquivo decriptografado");
}


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


