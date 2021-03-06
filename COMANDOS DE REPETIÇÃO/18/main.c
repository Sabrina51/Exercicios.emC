#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    printf("\n HELLO WORLD!");
    printf("\n ==============================");
    printf("\n");

    printf("\n ESTRUTURA SEQUENCIAL");

    printf("\n Hello World!");
    printf("\n Hello World!");
    printf("\n Hello World!");
    printf("\n Hello World!");
    printf("\n Hello World!");
    printf("\n Hello World!");
    printf("\n Hello World!");
    printf("\n Hello World!");
    printf("\n Hello World!");
    printf("\n Hello World!");

    printf("\n");

    printf("\n ESTRUTURA DE REPETIÇÃO FOR");

    for (int i=1; i <=10; i++)
    {
        printf("\n Hello World!", i);
    }

    printf("\n");
    printf("\n ==============================\n");

    system("pause");

return 0;

}
