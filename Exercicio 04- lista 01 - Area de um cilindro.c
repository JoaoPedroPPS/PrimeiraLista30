//Faça um programa para calcular a área de um cilindro dada sua formula.
 #include<stdio.h>
 #include<locale.h>
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	float raio, altura, area;
 	printf("\nDigite o raio do cilindro: ");
 	scanf("%f", &raio);
 	printf("\nDigite a altura do cilindro: ");
 	scanf("%f", &altura);
 	area = 2 * 3.1415 * raio * (raio + altura);
 	printf("\nA área do cilindro corresponde a %.2f ", area);
 	return 0;
 }
