#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, numero, cont_numero=0;

    printf("\n ========================================== \n");
    printf("\n Digite um numero: \n");
    printf("\n ");
    scanf("%d", &numero);

    printf("\n ========================================== \n");
    printf("\n Os primeiros numeros naturais impares sao: \n", numero);

    for (i=1; i<=numero; i++){
        cont_numero = cont_numero + 1;
        if (cont_numero%2 != 0){
            printf(" %d \n",cont_numero);
            }
    }

    printf("\n ========================================== \n");

    system("pause");

    return 0;
}
