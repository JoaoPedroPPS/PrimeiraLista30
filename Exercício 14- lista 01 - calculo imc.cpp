/*
Construa um programa em C para determinar se o indivíduo está com um peso favorável. Essa situação é
determinada através do IMC (Índice de Massa Corpórea), que é definida como sendo a relação entre o peso
(PESO) e o quadrado da Altura (ALTURA) do indivíduo. Ou seja,

e, a situação do peso é determinada pela tabela abaixo:

*/
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int peso, altura, imc;
	printf("\nDigite seu peso: ");
	scanf("%d", &peso);
	printf("\nDigite sua altura: ");
	scanf("%d", &altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 20)
	printf("\nAbaixo do peso.");
	else if (imc >= 20 || imc <25){
		printf("\nPeso Normal.");
	}
	
	else if (imc >= 25 || imc < 30){
		printf("\nSobre peso.");
	}
	
	else if (imc >= 30|| imc < 40){
		printf("\nObeso.");
	}
	else{
		printf("\nObeso mórbido.");
	}
	
	return 0;
	
}
