#include <stdio.h>
// int main()
// {
//     printf("hello worl");
//     return 0;
// }
int main(){
    double a=10.2;
    double *pt_a=&a;
    int *pt_b=&pt_a;
     int *pt_c;
    printf("le pointeur b a pour adress %p et pour valeur %d \n",pt_b,*pt_b);
      printf("le pointeur c a pour adress %p et pour valeur %d \n",pt_b,*pt_b);
   printf("le pointeur de %lf est %p \n",a,&a);
   printf("%p----- %lf-------%p",pt_a,(*pt_a),&pt_a);
}