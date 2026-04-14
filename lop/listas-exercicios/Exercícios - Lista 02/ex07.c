#include<stdio.h>
void main(){
int a, b, c;
printf("Informe tres numeros inteiros ");
scanf("%d %d %d", &a, &b, &c);
if(a==b && a==c){
	printf("Numeros iguais");
}else if (a>b && a>c){
	printf("O maior é %d", a);
}else if (b>a && b>c){
	printf("O maior é %d", b);
	
}else {
	printf("O maior é %d", c);
}
}
