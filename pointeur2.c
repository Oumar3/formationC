#include <stdio.h>
int main(){
    int *p;
    char *q;
   p=(int*)0xff4ffe;
   q=(char*)p;

    // printf("%p\n",p);
    printf("%p\n",&p);
     printf("%p\n",&q);
    //  printf("%p",&(*p));
    return 0 ;
}