
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2=0;
	printf("Digite 2 numeros:");
	scanf("%i %i",&n1,&n2);
	printf("O quociente da divisao desses numeros eh %i \nO resto da divisao sera %i",n1/n2,n1%n2);
	return 0;
}
