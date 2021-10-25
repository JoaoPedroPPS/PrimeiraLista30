//Crie um programa que receba 2 valores e um operador aritmético básico (+ - * /) e apresente o resultado
//do cálculo. Utilize switch case.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float v1, v2, op, total;
	printf("\nDigite o primeiro valor: ");
	scanf("%f", &v1);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &v2);
	printf("\nDigite o valor da operação desejada: \n1-Adição\n2-Subtração\n3-multiplicação\n4-Divisão ");
	scanf("%f", &op);
	switch(op){
		case 1:
			printf("\n%.2f + %.2f = %.2f",v1,v2, v1 + v2);
		case 2:
			printf("\n%.2f - %.2f = %.2f",v1,v2,v1 - v2);
		case 3:
			printf("\n%.2f * %.2f = %.2f",v1,v2,v1 * v2);
		case 4:
			printf("\n%.2f / %.2f = %.2f",v1,v2,v1 / v2);
	}
	return 0;
	 }
