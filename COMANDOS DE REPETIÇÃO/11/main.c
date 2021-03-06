#include <stdio.h>

int main()
{
    int i, numero;

    printf("\n ========= NUMEROS CRESCENTE ==========");
    printf("\n");
    printf("\n Digite um numero inteiro positivo: ");
    scanf("%d",&numero);

    for (i=0; i<=numero; i++)
        printf("\n %d", i);

    printf("\n\n");

    system("pause");

    return 0;
}
