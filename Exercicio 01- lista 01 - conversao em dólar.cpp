/*
		Elaborar um programa em C que apresente o valor da conversão em dólar (US$) de um valor lido em real, o
		programa deve solicitar a cotação do dólar e também a quantidade de reais disponível com o usuário.
 */
 #include<stdio.h>
 #include<locale.h>
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	float cot, dol, real;
 	printf("\nDigite a cotação atual do dólar: ");
 	scanf("%f", &cot);
 	printf("\nDigite a quantidade de dinheiro em reais: ");
 	scanf("%f", &real);
 	cot = real * cot;
 	printf("\nVocê possui %.2f em dólares.", dol);
 	
 	
 	
 	
 }
 
