#include <stdlib.h>
#include <stdio.h>

main()
{
    float areatotal , raio , altura;

    printf("Digite a altura do cilindro : ");
    scanf("%f",&altura);
    printf("Digite o raio do cilindro : ");
    scanf("%f",&raio);

    areatotal = 2 * 3.14 * raio * (raio + altura);

    printf("A area total é %2.f",areatotal);
}
