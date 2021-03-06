#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, numero, cont_numero=0;


    printf("\n ================= SOMA DOS 50 PRIMEIROS NUMEROS PARES ==================");
    printf("\n\n");

    for (i=0; i<=50; i++){
        if (i%2 == 0){
        printf(" %d",i);
        cont_numero = cont_numero + i;
        }
    }

    printf("\n");
    printf("\n ========================= A soma e igual a %d =========================\n",cont_numero);
    printf("\n\n");


    system("pause");


    return 0;
}
