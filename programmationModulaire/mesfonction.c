#include <stdio.h>
int factoriel(int n){
    int i,fact=1;

    for (i = 1; i <= n; i++)
    {
       fact = fact*i;
    }  
    return fact;
}
