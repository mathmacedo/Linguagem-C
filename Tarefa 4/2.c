#include <stdlib.h>
#include <stdio.h>

main()
{
    int digitado , cont , posicao = 0, menor = 100 , maior = 0 , posicaomenor , posicaomaior , soma = 0 , somanegativo = 0 , somapositivo = 0 ;
    int vetor[10] = {2,4,5,1,7,8,6,3,10,9} ;

    printf("Digite um valor : ");
    scanf("%d",&digitado);

    for(cont = 0 ; cont <= 9 ; cont++) {
        soma = soma + vetor[cont];

        if(vetor[cont] == digitado) {
            posicao = cont ;
            printf("Posição é %d\n",posicao );
        }

        if(vetor[cont] < menor) {
            menor = vetor[cont];
            posicaomenor = cont ;
        }

        if(vetor[cont] > maior) {
            maior = vetor[cont];
            posicaomaior = cont ;
        }

        if(vetor[cont] < 0) {
            somanegativo = somanegativo + vetor[cont];
        }

        if(vetor[cont] > 0) {
            somapositivo = somapositivo + vetor[cont];
        }
    }

    printf("Menor é %d\n",menor);
    printf("Posição do menor é %d\n",posicaomenor);
    printf("Maior é %d",maior);
    printf("Posíção do maior é %d\n",posicaomaior);
    printf("Soma = %d\n",soma);
    printf("Soma dos positivos = %d\n",somapositivo);
    printf("Soma dos negativos = %d\n",somanegativo);

}


