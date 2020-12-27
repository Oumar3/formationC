#include <stdio.h>
   int b=30;
    int n=10;
void fonction(int *pt_n,int b){
    pt_n=&n;
}
int main(){
 
   
    // printf("la valeur de pt_N=%p\n");
  fonction(&n,b);
    printf("la valeur de pt_n=%d",*(pt_n));
    return 0 ;
}