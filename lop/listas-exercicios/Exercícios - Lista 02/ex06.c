#include<stdio.h>
void main(){
	int p;
	printf("Digite pontos do seu time ");
	scanf("%d", &p);
	if (p >= 20){
		printf("Classificado");
		
	} else if (p >= 10 && p< 20){
		printf("Em disputa");
		
	} else {
		printf("Eliminado");
	}
	getch();
	}
		

