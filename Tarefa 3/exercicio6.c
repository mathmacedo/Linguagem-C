#include <stdlib.h>
#include <stdio.h>

main()
{
    int n1 , cont , multi ;

    printf("Digite um número : ");
    scanf("%d",&n1);

    for(cont=1 ; cont <=10 ; cont++) {
        multi = n1 * cont ;
        printf("%d x %d = %d\n",n1, cont, multi);
    }
}
