
#include <stdlib.h>
#include <stdio.h>

main() {
    int a , b , c , maior , menor , meio;

a=0;
b=0;
c=0;
maior=0;
menor=0;
meio=0;

    printf("Digite n1 : ");
    scanf("%d",&a);
    printf("Digite n2 : ");
    scanf("%d",&b);
    printf("Digite n3 : ");
    scanf("%d",&c);

    if(a > b && a > c) {
        maior = a;
    } else if(b > a && b > c) {
        maior = b;
    } else {
        maior = c;
    }


    if(a < b && a < c) {
        menor = a ;
    } else if(b < a && b < c) {
        menor = b;
    } else {
        menor = c;
    }


    if(a < b && a > c) {
        meio = a;
    } else if(b < a && b > c) {
        meio = b;
    } else {
        meio = c;
    }

    printf("Ordem crescente %d , %d , %d",maior , meio , menor);
}
