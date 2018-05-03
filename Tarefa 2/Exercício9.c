#include <stdlib.h>
#include <stdio.h>

main()
{
    int ano;

    printf("DIgite o ano desejado : ");
    scanf("%d",&ano);

    if(ano % 4 == 0 && (ano % 400 == 0  || ano % 100 != 0)) {
        printf("Ano bissexto !") ;
    } else {
        printf("Ano não bissexto!");
    }
}
