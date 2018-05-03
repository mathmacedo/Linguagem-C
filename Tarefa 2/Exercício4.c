#include <stdio.h>
#include <stdlib.h>

main()
{
    int n1 , n2 , quociente , resto;

    printf("Digite n1 : ");
    scanf("%d",&n1);
    printf("Digite n2 : ");
    scanf("%d",&n2);

    quociente = n1 / n2 ;
    resto = n1%n2;

    printf("O quociente é %d",quociente);
    printf("O resto da divisão é %d",resto);

}
