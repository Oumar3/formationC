#include <stdio.h>
void afficher(){

    printf("entrer un nombre:\n");

    }
int factoriel(int n){
     int i=1;
     int fact=1;
    while (i<=n){
       fact=fact*i;
       i++;
    }
    return fact;
}