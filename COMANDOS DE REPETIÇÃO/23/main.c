#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int n;

    printf("\n TABUADA 1 - 10");
    printf("\n =================================");

    printf("\n Digite um número entre 1 e 10: ");
    scanf("%d", &n);

    for (int i=1; i<=10; i++)
    {
    printf("\n %d X %d = %d", n, i, n*i);
    }

    printf("\n");
    printf("\n ================================\n");

    return 0;
}
