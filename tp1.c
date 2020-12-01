#include <stdio.h>
#include <unistd.h>
#include <math.h>
int main(){
    double a;
    double b;
    double c;
    double x1,x2,x0;
    double delta;
    printf("entez la valeur de a\n");
    scanf("%lf",&a);
    printf("entrez la valeur de b\n");
    scanf("%lf",&b);
    printf("entrez la valeur de c\n");
    scanf("%lf",&c);
    delta=b*b-4*a*c;
//    printf("%d",sqrt(delta)); 
    if(delta>0){
        x1=-b-sqrt(delta)/(2*a);
        x2=-b+sqrt(delta)/(2*a);
        printf("l'equation admet deux solutions x1=%lf et x2=%lf",x1,x2);
    }
    else if(delta==0)
    {
        x0=-b/(2*a);
        printf("l'equation admet une unique solution x0=%lf",x0);
    }
    else
    {
        printf("l'equation n'admet pas de solution");
    }
    
    
    return 0;
}