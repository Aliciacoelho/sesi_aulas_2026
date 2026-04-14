#include <stdio.h>
void main(){
      float n1, n2, n3, m;
      
      printf("Digite sua primeira nota : ");
      scanf("%f", &n1);
      
      printf("Digite sua segunda nota : ");
      scanf("%f", &n2);
      
      printf("Digite sua terceira nota : ");
      scanf("%f", &n3);
      
      m = (n1 + n2 + n3) / 3;
      
      if (m >= 7){
            printf("Aprovado :)");
            
      }else if (m >=5 && m < 7){
            printf("Recuperação :|");
      }else
      printf("Reprovado :(");
      getch();
      
}