#include<stdio.h>
#include<windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	for(int i = 0; i <= 20; i+=4){
			printf("%d° colocad(o)\n", i);
	}
	getch();
}