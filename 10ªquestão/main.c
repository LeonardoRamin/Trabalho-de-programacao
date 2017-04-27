#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int abril=0;
	printf("Digite um dia do mes de Abril:");
	scanf("%i",&abril);
	if((abril==5)||(abril==6)||(abril==12)||(abril==13)||(abril==19)||(abril==20)||(abril==26)||(abril==27)){
		printf("O dia eh um final de semana");
	}
	else{
		if((abril==1)||(abril==18)||((abril>=20)&&(abril<=23))){
			printf("O dia eh um feriado");
		}
		else{
			if((abril!=5)||(abril!=6)||(abril!=12)||(abril!=13)||(abril!=19)||(abril!=20)||(abril!=26)||(abril!=27)){
			printf("O dia eh um dia util");
			}
		}
	}
	return 0;
}
