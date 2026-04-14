#include<stdio.h>
#include<windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int i, in;
	for(i = 1; i <= 10; i++){
		printf("\nTabuada do %d\n", i);
		
		for(in = 1; in <= 10; in++){
			printf("%d x %d = %d\n", i, in, i * in);
			
		}
	}
}
