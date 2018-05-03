#include <stdlib.h>
#include <stdio.h>

main()
{
    float nota1 , nota2 , nota3 , media ;

    printf("Digite a primeira nota da prova: ");
    scanf("%f",&nota1);
    printf("DIgite a segunda nota da prova: ");
    scanf("%f",&nota2);
    printf("Digite a terceira nota da prova: ");
    scanf("%f",&nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;

    printf("A média é %2.f",media);
}
