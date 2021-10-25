//Faça um programa em C para efetuar a conversão de um valor dado em Mbps para Kbps.
 #include<stdio.h>
 #include<locale.h>
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	float mega, kilo;
 	printf("\nDigite a quantidade em Mbps: ");
 	scanf("%f", &mega);
 	kilo= mega * 1024;
 	printf("\nIsto equivale, em kbps: %.2f", kilo);
 	return 0;
 }
