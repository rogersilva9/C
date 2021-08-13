/* kbhit teste no GCC do Linux*/
/* Agosto de 2021 */
/* No GCC do Linux não existe a função kbhit nativa como em outros compiladores em C.

Na minha saga de ver como as coisas funcionam no Linux achei essa solução na internet, basicamente uma rotina que implemente o kbhit no próprio código.
 */


/* Bibliotecas */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

/* Função kbhit */
/* Original em https://cboard.cprogramming.com/c-programming/63166-kbhit-linux.html - 13/08/2021 */


int kbhit(void)
{
  struct termios oldt, newt;
  int ch;
  int oldf;
 
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  ch = getchar();
 
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }
 
  return 0;

} /* Fim da função kbhit */

/* Função Principal */

int main()
{
	unsigned long i = 0;

	while(1)
	{
		if (kbhit()) break;
		i++;
		printf("%ld\n",i);
	
	} /* fim do while */

        return 0;
}
/* Fim da Função Principal */
