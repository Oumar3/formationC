#include <stdio.h>
void afficht(){
    int  tab[2][2]={{2,34},{23,4}};
    for(int i=0;i<2;i++){
       for (int j = 0; j< 2; j++)
       {
          printf("%d",tab[i][j]);
       }
       
    }
}
int main(){
  
 afficht();
    return 0;
}