#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=0;
	printf("Digite um numero:");
	scanf("%i",&num);
	if(num%2==0){
		printf("Eh par");
	}
	if(num%2!=0){
		printf("Eh impar");
	}
	return 0;
}
