/*
		Elaborar um programa em C que apresente o valor da convers�o em d�lar (US$) de um valor lido em real, o
		programa deve solicitar a cota��o do d�lar e tamb�m a quantidade de reais dispon�vel com o usu�rio.
 */
 #include<stdio.h>
 #include<locale.h>
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	float cot, dol, real;
 	printf("\nDigite a cota��o atual do d�lar: ");
 	scanf("%f", &cot);
 	printf("\nDigite a quantidade de dinheiro em reais: ");
 	scanf("%f", &real);
 	cot = real * cot;
 	printf("\nVoc� possui %.2f em d�lares.", dol);
 	
 	
 	
 	
 }
 
