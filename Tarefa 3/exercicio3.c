#include <stdlib.h>
#include <stdio.h>

main()
{
    int n1 , n2 ;
    float media ;

    printf("DIgite a primeira nota : ");
    scanf("%d",&n1);
    printf("DIgite a segunda nota : ");
    scanf("%d",&n2);

    media = (n1 + n2) / 2;

    if(media >= 7) {
        printf("%.2f",media);
        printf("Aprovado");
    } else if(media >=4 && media < 7) {
        printf("%.2f",media);
        printf("Exame");
    } else {
        printf("%.2f",media);
        printf("Reprovado");
    }
}
