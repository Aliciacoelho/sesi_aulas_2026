#include<stdio.h>
void main(){
	float valor, desconto;
	printf("Digite o valor da compra:\n");
	scanf("%f",&valor);
	if(valor > 500){
		desconto = valor * 10 / 100;
		valor = valor - desconto;
	}else if(valor > 200){
		desconto = valor * 5 / 100;
		valor = valor - desconto;
	}
	printf("O valor final da compra e R$ %.2f",valor);
	getch();
	
}