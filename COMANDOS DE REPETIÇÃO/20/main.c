#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("\n PARES ENTRE 1 E 100");
    printf("\n ====================");

    for (int i=0; i<=100; i=i+2)
    {
    printf("\n %d", i);
    }

    printf("\n ====================\n");

    return 0;
}
