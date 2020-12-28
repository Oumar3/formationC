#include <stdio.h>

int main(){
        int taille1,taille2;
        int n,m;
        int i,j;
        int tab[taille1][taille2];
        printf("entrer la taille du tableau n:\n");
        scanf("%d",&taille1);
        printf("entrer la taille du tableau m:\n");
        scanf("%d",&taille2);
        printf("entrer les elements du tableau :\n");
        for ( i = 0; i < taille1; i++){ 
            for (j = 0; j < taille2; j++){
                scanf("%d",&n);
                scanf("%d",&m);
                tab[i][j]=tab[n][m];
             }
        

        }
       for(int i=0;i<taille1;i++){
       for (int j = 0; j< taille2; j++)
       {
          printf("%d \t",tab[i][j]);
       }
       
    }
        

    return 0;
}