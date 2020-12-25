#include <stdio.h>
void affecter(int *pt_valeur, int a){
    *pt_valeur=a;
}
int main(){
  int a,valeur=10;
  printf("entrer la valeure de a\n");
  scanf("%d",&a);
  printf("valeur =%d",valeur);

   affecter(&valeur,a);
  printf("valeur =%d",valeur);
}
  