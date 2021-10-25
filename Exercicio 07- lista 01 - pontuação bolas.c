/*
Um reality show realizou uma prova onde os participantes tinham que buscas bolas de 3 cores diferentes, e
de acordo com a tabela abaixo cada um teria uma pontuação:
? Bola Verde: 10 pontos
? Bola amarela: 5 pontos
? Bola branca: 3 pontos
Construa um programa em C que leia a quantidade de bolas de cada cor e apresente a pontuação final do
participante.
*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int greenBall, yellowBall, whiteBall, pf;
	printf("Digite o numero de bolas verdes: ");
	scanf("%d", &greenBall);
	printf("Digite o numero de bolas amarelas: ");
	scanf("%d", &yellowBall);
	printf("Digite o numero de bolas brancas: ");
	scanf("%d", &whiteBall);
	pf = (greenBall * 10) + (yellowBall * 5) + (whiteBall * 3);
	printf("A pontuação final do participante é de: %d ", pf);
	return 0;
}
