#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, numero[11], maior, menor;

    printf("\n ===== MAIOR E MENOR VALOR ===== \n");

    printf("\n Digite 10 valores: \n\n");
    for (i=0; i<10; i++){
        printf(" ");
        scanf(" %d", &numero[i]);
    }

    maior = numero[0];
    menor = numero[0];

        for (i=0; i<10; i++){
            if (numero[i]>maior)
            maior = numero[i];

            else if (numero[i]<menor)
            menor = numero[i];
        }

    printf("\n Maior valor: %d", maior);
    printf("\n Menor valor: %d", menor);

    printf("\n ");
    printf("\n =============================== \n");

    system("pause");

    return 0;
}
