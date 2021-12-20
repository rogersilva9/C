/* ============================================================================
    Linguagem C, o curso definitivo
    Módulo 9 Aula 1
    Título da Aula
    
    Autor: Msc. Eng. Rogério Souza da Silva
    Data:  Dezembro de 2021

    
Exercício proposto: uma prática comum na aplicação de arquivos em sistemas
embarcados consiste em salvar dados de leitura de um sensor, como o de temperatura por
exemplo. Com isso, pode-se desenvolver um datalogger que irá registrar a temperatura
ambiente (ou de uma máquina por exemplo) em um período conhecido.
Desenvolva o projeto de um programa em C que leia o arquivo “celsius.dat” e mostra 10 valores
de temperatura em °C na tela. Em seguida, solicite ao usuário para entrar com 10 novos valores,
atualizando o conteúdo do arquivo. O arquivo deve ser gerado pelo próprio programa, quando
este for executado pela primeira vez.


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
int main()
{
	FILE *arq;
	float vec[10];
	int i;

	
	arq = fopen("celsius.dat","rb");
	if (arq == NULL)
	{
		puts("Arquivo 'celsius.dat' não existe");
		arq = fopen("celsius.dat","wb");
		puts("Arquivo 'celsius.dat' foi criado");
		exit(1);
	}

	fread(vec,sizeof(float),10,arq);
	fclose(arq);	
	
	for(i=0;i<10;i++)
		printf("%.1f ",vec[i]);
	printf("\n");


	printf("Entre com 10 novos valores para serem inseridos no arquivo 'celsius.dat':\n");
	for(i=0;i<10;i++)
		scanf("%f",&vec[i]);
	arq = fopen("celsius.dat","wb");
	if (arq == NULL)
	{
		puts("Houve um erro ao acessar o arquivo para a escrita");
		exit(2);	
	}
	fwrite(vec,sizeof(float),10,arq);
	fclose(arq);

	puts("Arquivos inseridos com sucesso");
	
	

	


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


