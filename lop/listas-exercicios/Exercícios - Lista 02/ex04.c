#include<stdio.h>
void main(){
	int a, b;
	printf("Informe dois numeros inteiros");
	scanf("%d" "%d", &a, &b );
	if(a > b){
		printf("o maior é %d", a);
		
	} else if (b > a){
		printf("o maior é %d", b);
		
	} else {
		printf("Numeros iguais");
		
	}
	getch();
}