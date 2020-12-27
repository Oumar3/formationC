#include <stdio.h>
void tab(){
    int taille;
    int i,n;
    int tab[taille];
    printf("entrer la taille du tableau:\n");
    scanf("%d",&taille);
    printf("entrer les elements du tableaux:\n");
    for (i = 0; i < taille; i++)
    {
       scanf("%d",&n);
       tab[i]=n;
    }
    printf("voici les elements du tableaux:\n");
    for ( i = 0; i < taille; i++)
    {
        printf("%d \t",tab[i]);
    }
}
int main(){
    tab();
    return 0;
}