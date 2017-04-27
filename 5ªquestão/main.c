#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3=0;
	printf("Digite 3 numeros:");
	scanf("%i %i %i",&n1,&n2,&n3);
	if((n1>=n2)&&(n1>=n3)&&(n2>=n3)){
		printf("%i\n%i\n%i",n3,n2,n1);
	}
	if((n2>=n1)&&(n2>=n3)&&(n1>=n3)){
		printf("%i\n%i\n%i",n3,n1,n2);
	}
	if((n3>=n2)&&(n3>=n1)&&(n2>=n1)){
		printf("%i\n%i\n%i",n1,n2,n3);
	}
	if((n1>=n2)&&(n1>=n3)&&(n3>=n2)){
		printf("%i\n%i\n%i",n2,n3,n1);
	}
	if((n2>=n1)&&(n2>=n3)&&(n3>=n1)){
		printf("%i\n%i\n%i",n1,n3,n2);
	}
	if((n3>=n2)&&(n3>=n1)&&(n1>=n2)){
		printf("%i\n%i\n%i",n2,n1,n3);
	}
	return 0;
}
