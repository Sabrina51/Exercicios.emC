#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, numero;
    float media, soma=0;

    printf("\n ======= MÉDIA DE 10 VALORES ======= \n");

    printf("\n Digite 10 valores inteiros: \n\n");
    for (i=0;i<10;i++){
        printf(" ");
        scanf("%d", &numero);
        soma = soma + numero;
        media = soma/10;
    }

    printf("\n A média dos valores é igual a %.1f", media);

    printf("\n ");
    printf("\n =================================== \n");

    system("pause");

    return 0;
}
