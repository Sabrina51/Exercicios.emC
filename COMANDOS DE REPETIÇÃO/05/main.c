#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, numero;
    float media, soma=0;

    printf("\n ===== M�DIA DE 10 VALORES (POSITIVOS) ===== \n");

    printf("\n Digite 10 valores inteiros POSITIVOS: \n\n");

    for (i=0;i<10;i++){
        printf(" ");
        scanf("%d", &numero);

    while(numero<=0){
        printf(" ");
        scanf("%d", &numero);
    }
    soma = soma + numero;
    media = soma/10;
    }

    printf("\n A m�dia dos valores � igual a %.1f", media);

    printf("\n ");
    printf("\n =============================== \n");

    system("pause");

    return 0;
}
