#include<stdio.h>
#include<stdlib.h>
#include <string.h>
main()
{
 char frase[40];
 int x,tam;
 printf("\nDigite uma frase com no máximo 40 caracteres: ");
 scanf("%s",&frase);
 tam=strlen(frase);
 while(tam>40)
 {
  printf("\nTAMANHO INVALIDO.MAXIMO 40 CARACTERES");
  printf("\nDIGITE NOVAMENTE");
   scanf("%s",&frase);
  tam=strlen(frase);
 }
 printf("\n\n");
 for(x=0;x<=tam;x++)
  printf("\n%c",frase[x]);
 printf("\n\n");
 system("pause");
 return(0);
}
