#include <stdlib.h>
#include <stdio.h>

main()
{
    int candidato1 , candidato2 , nulo , cont , voto;

    candidato1 = 0 ;
    candidato2 = 0 ;
    nulo = 0;
    cont = 0;

    do {
        printf("Digite em qual candidato deseja votar : ");
        scanf("%d",&voto);
        switch (voto) {
            case 1 :
                candidato1 ++;
            break;

            case 2 :
                candidato2 ++;
            break;

            case 0 :
                nulo++;
            break;

            default :
                printf("Número invalido !");
            break ;
        }
        cont++;
    } while(cont < 20);


    printf("O número de votos no candidato 1 foi %d\n",candidato1);
    printf("O número de votos no candidato 2 foi %d\n",candidato2);
    printf("O número de votos nulo foi %d",nulo);
}
