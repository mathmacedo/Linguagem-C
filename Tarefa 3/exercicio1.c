#include <stdlib.h>
#include <stdio.h>

main ()
{
    int a , b , c , maior , menor , resul1 , resul2 ;

    printf("Digite a : ");
    scanf("%d",&a);
    if(a < 0) {
        do {
            printf("Digite novamente a : ");
            scanf("%d",&a);
        } while(a < 0);
    }

    /////////////////////////////////////////////////////////

    printf("Digite b : ");
    scanf("%d",&b);
    if(b < 0) {
        do {
            printf("Digite novamente b : ");
            scanf("%d",&b);
        } while(b < 0);
    }

    //////////////////////////////////////////////////////////

    printf("Digite c : ");
    scanf("%d",&c);
    if(c < 0) {
        do {
            printf("Digite novamente c : ");
            scanf("%d",&c);
        } while(c < 0);
    }

    ///////////////////////////////////////////////////////////

    if(a > b && a > c) {
        maior = a ;
    } else if(b > a && b > c) {
        maior = b ;
    } else {
        maior = c ;
    }

    ////////////////////////////////////////////////////////////

    if(a < b && a < c) {
        menor = a ;
    } else if(b < a && b < c) {
        menor = b ;
    } else {
        menor = c ;
    }

    /////////////////////////////////////////////////////////////

    printf("Menor * maior = %d\n",resul1=maior * menor);
    printf("Maior / menor = %d",resul2=maior / menor);

}
