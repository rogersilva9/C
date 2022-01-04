/* ============================================================================
    Linguagem C, o curso definitivo
    Módulo 9 Exercício 3
    Título da Aula
    
    Autor: Msc. Eng. Rogério Souza da Silva
    Data:  Dezembro de 2021

Exercício proposto: Um sensor digital de temperatura pode ler valores na faixa de -255 a +255
(Celsius ou Fahrenheit) e envia dados seriais a partir do protocolo ilustrado na Figura 1, no
formato de 2 bytes. Os primeiros 4 bits do byte mais significativo consistem na informação do
protocolo em si, padrão definido em Ah. Os 2 bits seguintes consistem nos indicadores de erro
(sensor fora do range, falha de comunicação, etc) e estarão em 0 quando estiver tudo ok. O
próximo bit é o de sinal, que será 0 para positivo e 1 para negativo. Após, vem o bit de unidade,
que será 0 para Celsius e 1 para Fahrenheit. O byte menos significativo é reservado para o valor
da temperatura em si.

protocolo erro  sig uni  temperatura
1010	  0  0	 0   1   0001  00010  b
 A             1           1     2    h

Projete um software para ler os dois bytes no formato hexadecimal, onde você entra
com o formato A012h e no console será impresso 18 graus Celsius, ou a temperatura que for
verificada, de acordo com os bytes recebidos do sensor hipotético.

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/* ========================================================================= */
/* --- Constantes --- */




/* Protótipo da Função */

void le_sensor(int leitura);


/* Função Principal */
int main()
{

		
	le_sensor(0xA112);


return(0);

	
} /* end main */



/* Desenvolviemnto das funções */

void le_sensor(int leitura)

{
	
	int temperatura,mascara = 0xA000 & leitura;

	char temper_char[8];

	if (mascara != 0xA000)
	{
		puts("Erro de protocolo");
		exit(0);	
	}

	mascara = 0x0C00 & leitura;
	
	if (mascara)
	{
		puts("Erro na leitura do sensor");
		exit(1);	
	}

	temperatura = 0x00FF & leitura;


	mascara = 0x0200 & leitura;

	if (mascara)
		temperatura = temperatura * -1;

	sprintf(temper_char,"%d",temperatura);

	mascara = 0x0100 & leitura;

	if (mascara)
		strncat(temper_char,"o.F",4);
	else
		strncat(temper_char,"o.C",4);
	
	
	printf("%s\n",temper_char);


} /* Fim da le_sensor   */

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


