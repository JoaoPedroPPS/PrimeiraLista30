//Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1, num2;
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	if (num1 > num2){
		printf("O n�mero %f � o maior.", num1);
	}
	else if(num1 == num2){
		printf("Ambos n�meros s�o iguais.");
	}
	else{
		printf("O n�mero %f � o maior.", num2);
	}
	
	return 0;
}
