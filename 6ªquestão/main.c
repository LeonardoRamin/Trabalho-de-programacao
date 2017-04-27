#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, n4, par=0;
	printf("Digite 4 numeros:");
	scanf("%i %i %i %i",&n1,&n2,&n3,&n4);
	if(n1%2!=0){
		n1=0;
	}
	if(n2%2!=0){
		n2=0;
	}
	if(n3%2!=0){
		n3=0;
	}
	if(n4%2!=0){
		n4=0;
	}
	par=n1+n2+n3+n4;
	printf("A soma dos numeros pares eh %i",par);
	return 0;
}
