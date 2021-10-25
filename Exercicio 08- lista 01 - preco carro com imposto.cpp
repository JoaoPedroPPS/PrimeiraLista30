/*
	O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e
	dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 25% e os
	impostos de 42%, escrever um programa em C que receba o custo de fábrica de um carro e escreva o custo
	ao consumidor.
*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese"); 
	float pcarro, ptotal;
	printf("Digite o preço do carro: ");
	scanf("%f", &pcarro);
	ptotal = pcarro + (pcarro * 0.25) + (pcarro * 0.42);
	printf("O preço total do carro é %.2f ", ptotal);
	return 0;
	
}
