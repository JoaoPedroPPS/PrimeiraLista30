//Faça um programa que receba dois números e mostre qual deles é o maior.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1, num2;
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	if (num1 > num2){
		printf("O número %f é o maior.", num1);
	}
	else if(num1 == num2){
		printf("Ambos números são iguais.");
	}
	else{
		printf("O número %f é o maior.", num2);
	}
	
	return 0;
}
