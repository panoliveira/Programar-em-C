#include <stdio.h>
#include <stdlib.h>

int main()
{
    int beijinhos = 4, brigadeiros = 10, canudinhos = 9;

    printf("Qual a soma de todos os doces juntos?");
    scanf("%d%2d%d",&beijinhos,&brigadeiros,&canudinhos);
    printf("A soma de todos doces eh %2d \n",(beijinhos+brigadeiros+canudinhos));
    printf("Qual a soma somente dos beijinhos com os canudinhos?");
    scanf("%d%d",&beijinhos,&canudinhos);
    printf("A soma eh %2d \n",(beijinhos+canudinhos));
    printf("Agora qual eh multiplicacao desses 3 doces juntos?");
    scanf("%d%2d%d",&beijinhos,&brigadeiros,&canudinhos);
    printf("A multiplicacao desses 3 doces eh %3d \n",(beijinhos*brigadeiros*canudinhos));
    printf("Se 16 pessoas fossem convidadas para essa festa qual seria a quantidade necessaria para cada um? \n");
    printf("A quantidade necessaria para cada um seria de %.1f",(beijinhos*brigadeiros*canudinhos/16.0));




return 0;
}
