#include<stdio.h>
#include<windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n, fat;
	// Fatorial de um numero ex: 5! = 5 * 4 * 3 * 2 * 1 
	printf("Digite um numero inteiro:\n");
	scanf("%d", &n);
	fat = n;
	for(int i = n; i > 1; i--){
		fat *= (i - 1);
	}
	printf("%d! = %d", n, fat);
	getch();	
}