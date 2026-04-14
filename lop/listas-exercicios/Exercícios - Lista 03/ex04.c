#include<stdio.h>
#include<windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	for(int i = 20; i >= 1; i--){
		printf("%d° colocad(o)\n", i);
	}
	getch();
}