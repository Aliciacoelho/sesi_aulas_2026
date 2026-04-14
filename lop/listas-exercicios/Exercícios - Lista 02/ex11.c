#include<stdio.h>
int main(){
	char turno;
	printf("Digite o turno em do aluno\nM para matutino\nV para vespertino\nN para noturno\n");
	scanf("%c",&turno);
	if(turno == 'M'){
		printf("Bom dia");
	}else if(turno == 'V'){
		printf("Boa tarde");
	}else if(turno =='N'){
		printf("Boa noite");
	}else{
		printf("Turno inválido");
	}
	getch();
}