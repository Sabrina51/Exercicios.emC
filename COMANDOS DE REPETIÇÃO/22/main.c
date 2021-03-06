#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int numero,resto,par=0, impar=0;

    printf("\n PAR E IMPAR");
    printf("\n ==============================");
    printf("\n");


    for (int i=1; i <=10; i++)
    {
        printf("\n Número %d: ", i);
        scanf("%d", &numero);

        resto = numero%2;

        if (resto == 0)
        {
        par ++;
        }

        else
        {
        impar ++;
        }

    }

    printf("\n %d números são impares", impar);
    printf("\n %d números são pares", par);

    printf("\n");
    printf("\n ==============================");


return 0;

}
