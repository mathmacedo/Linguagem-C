#include <stdlib.h>
#include <stdio.h>

main()
{
    int n1 , maior , cont ;

    while(cont = 3) {
        printf("DIgite 1 : ");
        scanf("%d",n1);
        if(n1>maior) {
            maior = n1 ;
        }
        cont ++ ;
    }
    printf("O maior é %d",maior);
}
