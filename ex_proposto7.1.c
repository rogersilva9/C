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


/* ===================================================================================================================== */
int main()
{
    int v[4];
    
    v[0] = 0xA0;
    v[1] = 0x25;
    v[2] = 0xCA;
    v[3] = 0xFE;
    
    criptografar(v,4);
    
    printf("\n%x %x %x %x\n",v[0],v[1],v[2],v[3]);
    
    decriptografar(v,4);
    
    printf("\n%x %x %x %x\n",v[0],v[1],v[2],v[3]);


return 0;
}/* Fim da Função Principal*/




   

/* ===================================================================================================================== */


/* Desenvolvimento das funções de funções */

int criptografar(int v[],int n)
{
    unsigned int i;
    
    for (i=0; i< n; i++)
    { 
        if (v[i]%2 == 0)     v[i] = v[i] + 5;   /*se par soma 5, se ímpar subtrai 3 */
        else                 v[i] = v[i] - 3;    
                
    } /*fim do for */
    
    return v[n];
    

} /* Fim da Função criptografar */


int decriptografar(int v[],int n)
{
    unsigned int i;
    
    for (i=0; i< n; i++)
    { 
        if (v[i]%2 != 0)     v[i] = v[i] - 5;   /*se par subtrai 5, se ímpar soma 3 */
        else                 v[i] = v[i] + 3;    
                
    } /*fim do for */
    
    return v[n];


} /* Fim da Função decriptografar */
