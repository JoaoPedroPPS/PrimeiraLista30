/*
	O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e
	dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 25% e os
	impostos de 42%, escrever um programa em C que receba o custo de f�brica de um carro e escreva o custo
	ao consumidor.
*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	float pcarro, ptotal;
	printf("Digite o pre�o do carro: ");
	scanf("%f", &pcarro);
	ptotal = pcarro + (pcarro * 0.25) + (pcarro * 0.42);
	printf("O pre�o total do carro � %.2f ", ptotal);
	return 0;
	
}
