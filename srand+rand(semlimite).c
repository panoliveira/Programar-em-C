/* TESTEEE PRA VER SE DA CERTO */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // numero aleatorio sem um limite
    printf("gere um numero aleatorio entre: %d\n", rand());
    return 0;
}


