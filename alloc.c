#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[3];
    int *taballoc;
    int n;
    printf("entrez la taille du tableau\n");
    scanf("%d",&n);
    taballoc=malloc(n*sizeof(int));
    if (taballoc==NULL)
        exit(-1);
    {
        /* code */
    }
    
    printf("entrez les elements du tableaux\n");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&taballoc[i]);
    }
    for ( int i = 0; i < n; i++)
    {
       printf("les tab[%d]=%d\n",i,taballoc[i]);
    }
    free(taballoc);
    
    return 0;
}