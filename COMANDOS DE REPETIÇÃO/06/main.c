#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, numero, soma=0;

    printf("\n ====== SOMA DE 10 VALORES ====== \n");

    printf("\n Digite 10 valores: \n\n");
    for (i=0;i<10;i++){
        printf(" ");
        scanf("%d", &numero);
        soma = soma+numero;
    }

    printf("\n A soma dos valores é igual a %d", soma);
    printf(" \n ================================= \n");

    printf("\n ");

    printf("\n");
    system("pause");

    return 0;
}
