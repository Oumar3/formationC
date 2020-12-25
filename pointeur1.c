#include <stdio.h>
void pointeur(double *pt_d, double g);
int main(int argc, char const *argv[])
{
    double d=21;
    double g=9;
    printf("la valeur d=%lf avant le pointeur et son address @d=%p\n",d,&d);
    pointeur(&d,g);
    printf("la valeur d=%lf apres le pointeur et son address @d=%p",d,&d);
    return 0;
}
void pointeur(double *pt_d, double g){
    *pt_d=g;
}
