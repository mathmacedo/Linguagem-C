#include <stdlib.h>
#include <stdio.h>

main()
{
    char v ;
    printf("Digite o valor: ");
    scanf("%c",&v);

    switch(v) {
        case 's' :
            printf("Soma");
        break;

        case 'p' :
            printf("Produto");
        break;

        case 'u' :
            printf("Subtração");
        break;

        case 'd' :
            printf("Divisão");
        break;

        case 'q':
            printf("Sair");
        break;

        default :
            printf("Valor incorreto;");
        break;
    }
}
