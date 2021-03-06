#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, numero_cont;

    printf("\n Digite um número inteiro positivo maior que 1: ");
    scanf("%d", &numero);

        for (int i=2; i<=numero/2; i++){
            if (numero%i == 0){
                numero_cont++;
        }
    }
    if (numero_cont == 0)
        printf(" \n O número é primo");
    else
        printf(" \n O não número é primo");


    printf(" \n");

    return 0;
}
