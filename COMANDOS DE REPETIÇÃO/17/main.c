#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int numero, inter_10 = 0, inter_20 = 0;

    printf("\n INTERVALO [10,20]");
    printf("\n =========================================");


    printf("\n Digite 10 n�meros");
    printf("\n");
    for (int i=1; i <=10; i++)
    {
        printf("\n N�mero %d: ", i);
        scanf("%d", &numero);

        if (numero >=10 && numero <=20)
        {
            inter_10 ++;
        }
        else {
            inter_20 ++;
        }

    }

    printf("\n %d n�meros est�o no intervalo [10,20].", inter_10);
    printf("\n %d n�meros est�o fora do intervalo [10,20].", inter_20);


    printf("\n");
    printf("\n =========================================\n");

    system("pause");

return 0;

}
