#include <stdio.h>
int main(){
    int a=10;
    int *pt_a=&a;
    // int pt_a=9;
    // int *pt_a;
    // pt_a =&pt_a;
    
    printf("la valeur de pt_a=%d ET son add=%p ET %p \n",*pt_a,&(pt_a),pt_a);

    printf("la valeur de a=%d ET son add=%p",a,&a);

    return 0 ;
}