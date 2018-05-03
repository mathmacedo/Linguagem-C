#include <stdlib.h>
#include <stdio.h>

main()
{
    int numero , cont , resultado ;
    cont = 0 ;

    printf("Digite n : ");
    scanf("%d",&numero);

    for(cont = 1 ; cont <= 10 ; cont++) {
        resultado = numero * cont ;
        printf("%d * %d = %d\n",numero , cont , resultado);
    }
}
