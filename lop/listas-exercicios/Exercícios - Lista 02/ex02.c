#include<stdio.h>
void main(){
	int i;
	printf("Informe a idade : ");
	scanf("%d", &i);
	
    if(i > 18){
		printf("Maior de idade");
		
	} else {
		printf("Menor de idade");
	}
	getch();
}