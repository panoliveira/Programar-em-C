/* JUNTAR O QUALQUER NUMERO COM UM NUMERO ALEATORIO DELIMITADO*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 srand((unsigned)time(NULL));
 printf("gere um numero aleatorio: %d\n", rand());
 printf("gere agora outro numero aleatorio: %d\n", rand());

 int numero_aleatorio1, numero_aleatorio2 = rand() %85;
 printf("agora eu quero um numero ate 85: %d\n", numero_aleatorio1);
 printf("agora eu quero mais um numero aleatorio ate 85: %d", numero_aleatorio2);
 return 0;

}
