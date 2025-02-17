#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
     srand((unsigned)time(NULL));
     int numero_aleatorio = rand() %100; //vai gerar um numero aleatorio ate 100
     printf("gere um numero aleatorio ate 100: %d", numero_aleatorio);
     return 0;
}

