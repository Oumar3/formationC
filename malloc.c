#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p=malloc(3*sizeof(int));
    printf("entrez les element du tab:\n");
    for(int i=0;i<3;i++){
        scanf("%d",&p[i]);
    }
    printf("voici les elements du tab\n");
    for(int i=0;i<3;i++) {   

         printf("%d\t",p[i]);
    }
    free(p);
    return 0;
}