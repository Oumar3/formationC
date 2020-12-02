#include <stdio.h>
int main(){
    unsigned i,fact,n;
    fact=1;
    i=1;
    printf("entrer la factoriel d'un nombre:\n");
    scanf("%u",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    unsigned fact1;
    fact1=1;
    i=1;
    while(i<=n){
         fact1=fact1*i;
         i++;
    }
    printf("factoriel de %u! = %u",n,fact1);
    return 0;
}