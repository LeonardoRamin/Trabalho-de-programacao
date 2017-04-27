#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float anos, cigarros, preco, reais;
	printf("Quantos anos faz que voce fuma?");
	scanf("%f",&anos);
	printf("Quantos cigarros voce fuma por dia?");
	scanf("%f",&cigarros);
	printf("Qual eh o preco da carteira de cigarros?");
	scanf("%f",&preco);
	reais=(((cigarros*preco)/20)*(anos*365));
	printf("Voce gasta RS %.2f por ano em cigarro",reais);
	
	return 0;
}
