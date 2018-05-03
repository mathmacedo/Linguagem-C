#include <stdlib.h>
#include <stdio.h>

main()
{
    float precoCarro , imposto , lucro ;

    printf("Digite o preço pago no carro : ");
    scanf("%f",&precoCarro);

    imposto = (precoCarro * 40) / 100 ;
    lucro = (precoCarro * 12) / 100;

    printf("O preço pago em imposto é %2.f",imposto);
    printf("O lucro do distribuidor é %2.f",lucro);
}
