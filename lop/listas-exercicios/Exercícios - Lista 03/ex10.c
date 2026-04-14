#include<stdio.h>
#include<windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Digite um numero positivo:\n");
	scanf("%d", &n);
	for(int i = 0; i < n; i+=2){
		printf("%d, ", i);
	}
	getch();
}