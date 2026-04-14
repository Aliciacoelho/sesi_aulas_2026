#include<stdio.h>
#include<windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Digite um numero positivo:\n");
	scanf("%d", &n);
	for(int i = 1; i < n; i++){
		if(i % 2 != 0)printf("%d, ", i);
		
	}
	getch();
}