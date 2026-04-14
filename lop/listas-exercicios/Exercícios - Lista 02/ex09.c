#include<stdio.h>
void main(){
	int n;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	if(n > 100){
		printf("Maior que 100");
		
	} else {
		printf("Menor ou igual a 100");
	}
	getch();
}