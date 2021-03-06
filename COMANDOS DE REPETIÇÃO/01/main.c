#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i;

    printf("\n ===== De 1 a 10 FOR =====");

    for (i=1; i<=10; i++){
        printf("\n %d", i);
    }


    printf("\n ");
    system("pause");

    printf("\n ===== De 1 a 10 WHILE =====");
    i=0;
    while (i<10){
        i++;
        printf("\n %d", i);
    }

    printf("\n ");
    system("pause");

    printf("\n ===== De 1 a 10 DO WHILE =====");

    i=0;
    do{
        i++;
        printf("\n %d", i);
    }
    while (i<10);

    printf("\n");
    system("pause");

    return 0;
}
