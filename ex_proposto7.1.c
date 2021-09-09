/* Exercício proposto: um processador deve receber diversos bytes e realizar uma conversão criptografada dos mesmos. A criptografia será somar 5 aos elementos pares do vetor e subtrair 3 dos elementos ímpares.Exemplo: você entra com os bytes 0xA0, 0x73, 0x25, 0xD3, 0xCA, 0xFE. A função os converterá para 0xA5, 0x70, 0x2A, 0xD0, 0xCF, 0xFB. Após, desenvolva também uma função para descriptografar estes bytes.*/

/* ===================================================================================================================== */
/* Exercício Proposto - Aula 7.1 */


/* Eng. Rogério Souza da Silva */
/* Setembro de 2021              */

/* ===================================================================================================================== */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>

/* ===================================================================================================================== */
/* Protótipo de funções */

int criptografar(int v[],int n);
int decriptografar(int v[],int n);

/* ===================================================================================================================== */

/* ===================================================================================================================== */
/* Constantes */

#define num 6 /* Números de elementos a serem criptografados e decriptogrados */

/* ===================================================================================================================== */
int main()
{
    int v[num];
    
    v[0] = 0xA0;
    v[1] = 0x73;
    v[2] = 0x25;
    v[3] = 0xD3;
    v[4] = 0xCA;
    v[5] = 0xFE;
    
    
    criptografar(v,num);
    
    printf("\n%X %X %X %X %X %X\n",v[0],v[1],v[2],v[3],v[4],v[5]);
    
    decriptografar(v,num);
    
    printf("\n%X %X %X %X %X %X\n",v[0],v[1],v[2],v[3],v[4],v[5]);


return 0;
}/* Fim da Função Principal*/




   

/* ===================================================================================================================== */


/* Desenvolvimento das funções de funções */

int criptografar(int v[],int n)
{
    unsigned int i;
    
    for (i=0; i< n; i++)
    { 
        if (v[i]%2 == 0)     v[i] = v[i] + 0x05;   /*se par soma 5, se ímpar subtrai 3 */
        else                 v[i] = v[i] - 0x03;    
                
    } /*fim do for */
    
    return v[n];
    

} /* Fim da Função criptografar */


int decriptografar(int v[],int n)
{
    unsigned int i;
    
    for (i=0; i< n; i++)
    { 
        if (v[i]%2 != 0)     v[i] = v[i] - 0x05;   /*se par subtrai 5, se ímpar soma 3 */
        else                 v[i] = v[i] + 0x03;    
                
    } /*fim do for */
    
    return v[n];


} /* Fim da Função decriptografar */
