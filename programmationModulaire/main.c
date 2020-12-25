#include <stdio.h>
#include "mesfonction.h"
int main(){
    int n;
    printf("enter la valeure de n : \n");
    scanf("%d",& n);
    int fact=factoriel(n);
    printf("%d! = %d",n,fact);
}