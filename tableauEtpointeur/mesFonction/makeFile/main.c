#include <stdio.h>
#include "mesFontion.h"
int main()
{  
   int i;
    int tab[3];
    printf("entrer les elements du tableaux:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d",&tab[i]+i);

    }
   afficher(tab,3);
   return 1;
}
