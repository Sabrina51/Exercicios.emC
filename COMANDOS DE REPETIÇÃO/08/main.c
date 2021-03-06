#include <stdio.h>

int main()
{
    int i, numero;

    printf("\n ===== Numeros impares em ordem crescente ===== \n");

    printf("\n Digite um numero inteiro positivo impar: ");
    printf("");
    scanf("%d",&numero);

    for (i=0; i<=numero; i++){
        printf(" ");

        while(numero%2 != 1){
        printf("\n ****** Digite um numero impar: ");
        scanf("%d", &numero);
            }
        if (i%2 != 0){
            printf("\n %d", i);
            }
    }
    printf("\n");
    printf(" \n =================================== \n");
    printf("\n");

    system("pause");

    return 0;
}
