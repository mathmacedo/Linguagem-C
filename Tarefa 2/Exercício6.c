#include <stdlib.h>
#include <stdio.h>

main()
{
    float n1 , n2 , soma , produto , quociente ;

    printf("DIgite n1 : ");
    scanf("%f",&n1);
    printf("Digite n2 : ");
    scanf("%f",&n2);

    soma = n1 + n2 ;
    produto = n1 * n2 ;
    quociente = n1 / n2 ;

    printf("A soma é %f , o produto é %f e o quociente %f",soma,produto,quociente);

}
