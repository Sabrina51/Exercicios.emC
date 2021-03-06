#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;

    printf("\n ===== De 10 A 0 ===== \n");

    i=11;
    while (i>=1){
        i--;
        printf("\n %d", i);
    }
    printf("\n ");
    printf("\n FIM!");
    printf("\n ");

    printf("\n");
    system("pause");

    return 0;
}
