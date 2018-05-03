#include <stdlib.h>
#include <stdio.h>

main()
{
    int vetor[15] , j = 0 , i = 0 , aux = 0 ;

    for(i = 0 ; i < 15 ; i++) {
        printf("Digite o valor : ");
        scanf("%d",&vetor[i]);
    }

    for(j = 0 ; j <= 14 ; j++) {
        for(i = 0 ; i <=14 ; i++) {
            if(vetor[i] < vetor[i + 1]) {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux ;
            }
        }
    }

    for (i = 0 ; i <= 15 ; i++) {
        printf("%d\n",vetor[i]);
    }
}
