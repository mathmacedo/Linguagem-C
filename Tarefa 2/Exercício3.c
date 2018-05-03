#include <stdlib.h>
#include <stdio.h>

main()
{
    float preco , valorGasto ;
    int anos , numeroCigarrosDia ;

    printf("Digite a quantidade de anos que fumou ?");
    scanf("%d",&anos);
    printf("Digite quantos cigarros por dia você fuma : ");
    scanf("%d",&numeroCigarrosDia);
    printf("Digite o valor da carteira : ");
    scanf("%f",&preco);

    valorGasto = (float)preco/20 * numeroCigarrosDia * anos * 365 ;

    printf("O valor total gasto foi %2.f",valorGasto);

}
