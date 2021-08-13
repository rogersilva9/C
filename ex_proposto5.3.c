/* Exercício Proposto - Aula 5.3 - Fibonacci até 1000 */

/* Agosto de 2021 */

/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>


/* Função Principal */

int main()
{
	unsigned int fib0 = 0, fib1 = 0, fib2 = 0;

	while (1)
	{	
	   printf("%d\n",fib0);
	   if (!fib0)
		fib0++;
	   else
	   {	
		fib2 =  fib1 + fib0;			
		fib1 = fib0;		
		fib0 = fib2;
		
		
            } /* fim do else */	  
	    if (fib0 >= 1000) break;
	}
        return 0; /* fim do while */
}
/* Fim da Função Principal */
