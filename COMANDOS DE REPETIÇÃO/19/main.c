#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int idades,todas_idades=0, media;

    printf("\n MÉDIA DAS IDADES");
    printf("\n ==============================\n");
    printf("\n");


    for (int i=1; i <=5; i++)
    {
        printf(" Idade %d: ", i);
        scanf("%d", &idades);

        todas_idades = todas_idades + idades;
    }

    media = todas_idades / 5;
    printf("\n Média das idades é de %d anos", media);


    printf("\n");
    printf("\n ==============================\n");

    return 0;
}
