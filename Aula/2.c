#include <stdlib.h>
#include <stdio.h>
main()
{
    float n1 , n2 , media ;
    char fora ;

    do {
        printf("Digite a primeira nota : ");
        scanf("%f",&n1);
        printf("Digite a segunda nota \n: ");
        scanf("%f",&n2);

        media = (n1 + n2) / 2 ;

        if(media > 7) {
            printf("Arovado\n");
            printf("%f",media);

        }

        printf("\nDeseja sair ?");
        scanf("%s",&fora);
    } while(fora != 'q');


}
