#include<stdio.h>
void main(){
	float r, h, v, a;
	printf("Informe o raio do cilindro");
	scanf("%f", &r);
	
	printf("Informe a altura do cilindro");
	scanf("%f",&h);
	v = 3,14 * (r * r) * h;
	a = 2 * 3,14 * r * (r + h);
	printf("A area do cilindro mede %.2f cm e o volume do cilindro equivale a %.2f cm3", a, v);
	}