#include <stdlib.h>
#include <stdio.h>


main()
{
    int cont , n1 , n2 , n3 , n4 , n5 , n6 ;
    srand(time(NULL));

    for(cont = 1 ; cont <= 6 ; cont++) {
        srand(time(NULL));
        n1 = rand()%60;
        n2 = rand()%60;
        n3 = rand()%60;
        n4 = rand()%60;
        n5 = rand()%60;
        n6 = rand()%60;
    }
    printf("%d",n1);
    printf("\n%d",n2);
    printf("\n%d",n3);
    printf("\n%d",n4);
    printf("\n%d",n5);
    printf("\n%d",n5);

}
