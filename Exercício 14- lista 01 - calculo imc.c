/*
Construa um programa em C para determinar se o indiv�duo est� com um peso favor�vel. Essa situa��o �
determinada atrav�s do IMC (�ndice de Massa Corp�rea), que � definida como sendo a rela��o entre o peso
(PESO) e o quadrado da Altura (ALTURA) do indiv�duo. Ou seja,

e, a situa��o do peso � determinada pela tabela abaixo:

*/
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float peso, altura, imc;
	printf("\nDigite seu peso: ");
	scanf("%f", &peso);
	printf("\nDigite sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	printf("\n %f", imc);
	
	if (imc < 20){
		printf("\nAbaixo do peso.");
	}
	
	else if (imc >= 20 && imc <25){
		printf("\nPeso Normal.");
	}
	
	else if (imc >= 25 && imc < 30){
		printf("\nSobre peso.");
	}
	
	else if (imc >= 30 && imc < 40){
		printf("\nObeso.");
	}
	else if(imc >= 40){
		printf("\nObeso m�rbido.");
	}
	
	return 0;
	
}
