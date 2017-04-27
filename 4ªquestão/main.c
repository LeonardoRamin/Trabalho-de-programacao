#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, soma=0;
	printf("Digite 3 numeros:");
	scanf("%i %i %i",&n1,&n2,&n3);
	soma=n2+n3;
	if(n1>soma){
		printf("O primeiro numero eh maior que a soma dos outros dois");
	}
	return 0;
}
