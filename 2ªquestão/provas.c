#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2,n3, media=0;
	printf("Qual foi a sua nota nas 3 ultimas provas?");
	scanf("%i %i %i",&n1, &n2, &n3);
	media=(n1+n2+n3)/3;
	if(media>=70){
		printf("Aprovado");
	}
	else{
		if((media>=50)&&(media<70)){
			printf("Recuperacao");
		}
		else{
			if(media<50){
				printf("Reprovado");
			}
		}
	}
	return 0;
}
