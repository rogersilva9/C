/* Exercício proposto: Desenvolva o projeto de um interpretador para as seguintes
instruções:
RUN – rodar o interpretador.
RUN SOUND – rodar o interpretador com “bips”.
REP – define o número de repetições de uma frase salva previamente com o comando TXT.
Recebe como argumento o número de repetições desejadas.
TXT – comando para entrada de nova frase. O argumento é a frase-texto que o usuário quiser
que o interpretador rode pelo número de repetições definido.
CLEAR – limpa a tela do console.
CLEAR ALL – limpa a tela e restaura variáveis.
EXIT – encerra o interpretador.
HELP – apresenta a versão atual do interpretador e breve explicação sobre os seus comandos. */

/* ===================================================================================================================== */
/* Exercício Proposto - Aula 7.5 */


/* Eng. Rogério Souza da Silva */
/* Outubro de 2021              */

/* ===================================================================================================================== */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ===================================================================================================================== */
/* Protótipo de funções */


void interpreter(char *txt, unsigned int rep, unsigned int sound); 

/* ===================================================================================================================== */

/* ===================================================================================================================== */
/* Constantes */


/* ===================================================================================================================== */

/* ===================================================================================================================== */
/* variáveis */

char txt[30] = "_ _ _ _";
char cmd[20] = "A";
unsigned int rep = 1;
char reps[5];



/* ===================================================================================================================== */
int main()
{ 
 	
	while (strcmp(cmd,"EXIT\n"))
	{ 
		printf("Input command: ");
		fgets(cmd,20,stdin);
		
		if (!strcmp(cmd,"RUN\n"))      interpreter(txt,rep,0);

		if (!strcmp(cmd,"RUN SOUND\n"))  interpreter(txt,rep,1);

		if (!strcmp(cmd,"REP\n"))
		{
						
			fgets(reps,5,stdin);
			rep = atoi(reps);
  		}
		
		if (!strcmp(cmd,"TXT\n"))     fgets(txt,30,stdin);
		

		if (!strcmp(cmd,"CLEAR\n"))  system("clear");

		if (!strcmp(cmd,"CLEAR ALL\n")) 
		{
			system("clear");
			rep = 1;
			strcpy(txt,"_ _ _ _");
		}
		
		if (!strcmp(cmd,"HELP\n"))
		{
			puts("Intepretador Versão 1.0");			
			puts("RUN – rodar o interpretador.");
			puts("RUN SOUND – rodar o interpretador com bips.");
			puts("REP – define o número de repetições de uma frase salva previamente com o comando TXT.");
			puts("Recebe como argumento o número de repetições desejadas.");
			puts("TXT – comando para entrada de nova frase. O argumento é a frase-texto que o usuário quiser");
			puts("que o interpretador rode pelo número de repetições definido.");
			puts("CLEAR – limpa a tela do console.");
			puts("CLEAR ALL – limpa a tela e restaura variáveis.");
			puts("EXIT – encerra o interpretador.");
			puts("HELP – apresenta a versão atual do interpretador e breve explicação sobre os seus comandos.");
		}

  	} /* Fim do While */

return 0;
}/* Fim da Função Principal*/




   

/* ===================================================================================================================== */


/* Desenvolvimento das funções de funções */



void interpreter(char *txt, unsigned int rep, unsigned int sound)
/* Executa repetindo o texto especificado pela quantidade de repetições especificadas. Se sound for 1 executa o som */

{
	unsigned int i;
	
	if (sound == 1) printf("\a\a\a\a");
	
	for (i=0; i<rep; i++)		
		printf("%s\n",txt);
	
} /* Fim da função interpreter */
