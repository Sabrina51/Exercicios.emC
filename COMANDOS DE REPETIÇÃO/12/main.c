#include <stdio.h>

int main()
{
    int i, numero;

    printf("\n ========= NUMEROS DECRESCENTE ==========");
    printf("\n");
    printf("\n Digite um numero inteiro positivo: ");
    scanf("%d",&numero);

    for (i=numero; i>=0; i--)
        printf("\n %d", i);

    printf("\n\n");

    system("pause");

    return 0;
}
