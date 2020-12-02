#include <stdio.h>
int factoriel(int n);
int main(){
    int n;
    printf("entrer la factoriel d'un nombre:\n");
    scanf("%d",&n);
   int fact1= factoriel(n);
    printf("factoriel de %u! = %u",n,fact1);
    return 0;
}
int factoriel(int n){
    int i=1;
    int fact=1;
    while (i<=n)
    {
       fact=fact*i;
       i++;
    }
    return fact;
}