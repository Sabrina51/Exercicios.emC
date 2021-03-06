#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int cont, idade[6], idade_maior, idade_menor, idade_menor_salario;
    int mulher_cont = 0;
    char sexo[6], sexo_menor_salario;
    float salario[6], menor_salario, soma_salario = 0;

    printf("\n PESQUISA");
    printf("\n ==============================");
    printf("\n");

    printf("\n DADOS DOS HABITANTES: \n");

        for (cont=0; cont <=5; cont++)
        {
            printf("\n Habitante %d \n", cont);

            printf(" Idade: ");
            scanf("%d", &idade[cont]);fflush(stdin);

            printf(" Sexo(F/M): ");
            scanf("%c", &sexo[cont]);

            if (sexo[cont] == 'F' || sexo[cont] == 'f')
            mulher_cont = mulher_cont + 1;

            printf(" Salário(R$): ");
            scanf("%f", &salario[cont]);
            printf("\n");

        }

            idade_maior = idade[0];
            idade_menor = idade[0];

            menor_salario = salario[0];

            for (cont=0; cont <=5; cont++){
                if (idade[cont] > idade_maior)
                    idade_maior = idade[cont];

                else if (idade[cont] < idade_menor)
                    idade_menor = idade[cont];
            }

            for (cont=0; cont <=5; cont++){
                soma_salario = soma_salario + salario[cont];
            }

            for (cont=0; cont <=5; cont++){
                if (salario[cont] < menor_salario)
                    menor_salario = salario[cont];
            }

            for (cont=0; cont <=5; cont++){
                if (salario[cont] == menor_salario)
                {
                    menor_salario = salario[cont];
                    idade_menor_salario = idade[cont];
                    sexo_menor_salario = sexo[cont];
                }
            }


    printf("\n");

    printf("\n A média de salário do grupo é de R$%.2f", soma_salario/10);
    printf("\n A menor idade do Grupo é %d anos e a maior é %d anos", idade_menor,idade_maior );
    printf("\n Quantidade de mulheres na região: %d", mulher_cont);
    printf("\n O menor salário é de R$%.2f", menor_salario);
    printf("\n A pessoa com o menor salário é do sexo %c e sua idade é %d anos",sexo_menor_salario, idade_menor_salario);


    printf("\n");
    printf("\n ==============================\n");

    system("pause");

return 0;

}
