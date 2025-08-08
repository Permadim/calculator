#include <stdio.h>

int main()
{
    int a, b;
    printf("Bem vindo ao somador em C\n");
    printf("O primeiro numero:\n");
    scanf("%d",&a);
    printf("O segundo numero:\n");
    scanf("%d",&b);
    int c = a + b;
    printf("A soma de %d e %d sera: %d\n",a, b, c);
    return 0;
}