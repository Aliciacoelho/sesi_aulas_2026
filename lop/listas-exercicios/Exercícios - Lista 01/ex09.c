#include<stdio.h>
void main(){
	int nome[100];
	float p, np;
	
	printf("Digite o nome da mercadoria:\n");
	scanf("%s", &nome);
	
	printf("Digite o preço da mercadoria");
	scanf("%f", &p);
	
	np = p + p * (5 / 100);
	
	printf("O novo preço será %.2f", nome, np);
	getch();
	
	}