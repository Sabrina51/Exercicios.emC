#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, mult=0;

    printf(" \n ======================================= \n");
    printf(" == Os cinco primeiros múltiplos de 3 == \n");
    for (i=1; i<=5; i++){
        mult = mult + 3;
        printf(" \n %d", mult);
    }

    printf("\n");
    printf(" \n ======================================= \n");
    printf("\n");

    system("pause");
    return 0;
}
