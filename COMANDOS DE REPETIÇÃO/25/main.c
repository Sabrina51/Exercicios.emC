#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale (LC_ALL,"Portuguese");

    int i, par;
    int numero[5], soma_numeros = 0, media, maior_numero_dig, menor_numero_dig, par_cont = 0, soma_par = 0;

    printf("\n V�RIOS N�MEROS\n");
    printf("\n =================================");


    for (i=0; i<4; i++){
        printf("\n Digite um n�mero: ", i);
        scanf("%d", &numero[i]);

        soma_numeros = soma_numeros + numero[i];
        media = soma_numeros / 4;

        maior_numero_dig = numero[0];
        menor_numero_dig = numero[0];

    }
            for (i=0; i<4; i++){
            if (numero[i] > maior_numero_dig)
                maior_numero_dig = numero[i];

            else if (numero[i] < menor_numero_dig)
                menor_numero_dig = numero[i];
            }

            for (i=0; i<4; i++){
            if (numero[i]%2 == 0){
            par = numero[i];
            par_cont++;
            soma_par = soma_par + par;
            }
            }

    printf("\n A soma dos n�meros � igual a %d", soma_numeros);
    printf("\n Foram digitados %d n�meros", i);
    printf("\n A m�dia dos n�meros � %d", media);
    printf("\n O maior n�mero digitado � %d", maior_numero_dig);
    printf("\n O menor n�mero digitado � %d", menor_numero_dig);
    printf("\n A m�dia dos n�meros pares � %d", soma_par / par_cont);
    printf("\n =================================");

    return 0;
}
