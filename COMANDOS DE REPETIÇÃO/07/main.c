#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, numero=0;

    printf("\n ===== De 10 em 10 ===== \n");

    for (i=0; i<100; i++){
        numero = numero+10;
        printf("\n %d", numero);
        }

    printf("\n ");

    printf("\n");
    system("pause");

    return 0;
}
