#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, maior, menor=0;
	printf("Digite 3 numeros:");
	scanf("%i %i %i",&n1,&n2,&n3);
	maior=n1;
	menor=n1;
	if(n2>maior){
		maior=n2;
	}
	if(n2<menor){
		menor=n2;
	}
	if(n3>maior){
		maior=n3;
	}
	if(n3<menor){
		menor=n3;
	}
	printf("O maior eh %i e o menor eh %i",maior,menor);
	return 0;
}
