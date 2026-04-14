#include<stdio.h>
#include<windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int m, n;
	while (n!=4){
	printf("Informe um numero: ");
	scanf("%d", &n);
	m = n * n; 
	printf("O quadrado desse número e %d\n", m);
	}
	printf("Acertou!");
	getch();
}