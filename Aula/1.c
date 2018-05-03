#include <stdlib.h>
#include <stdio.h>

main()
{
    int n1 , n2 ;
    n1 , n2 = 0 ;

    while(n2 < 20) {
        printf("Digite um número : ");
        scanf("%d",&n1);
        n2 = n2 + n1 ;
    }

    printf("A soma é %d",n2);
}
