#include<stdio.h>
void main(){
	int s, sn, rj;
	printf("Informe o salario");
	scanf("%d", &s, &sn);
	if (s <= 1800){
		rj = 15;
		sn = s + s * rj/100;
		printf("Seu novo salario e: %d", sn);
	} else {
		rj = 10;
		sn = s + s * rj/ 100;
		printf("Seu novo salario e: %d", sn);
	}
	getch();
}