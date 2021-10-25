/*
		Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
	 		O número digitado ao quadrado 
 			A raiz quadrada do número digitado
*/
 #include<stdio.h>
 #include<locale.h>
 #include<math.h>
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	float num, quad, raiz;
 	printf("\nDigite um número positivo: ");
 	scanf("%f", &num);
 	quad = pow(num, 2)
 	raiz = sqrt(num)
 	if(num > 0){
 		printf("\nO numero digitado ao quadrado é %.2f ", quad);
 		printf("\nA raíz quadrada do número é: %.2f ", raiz);
	 }
 	else{
 		printf("\n Número inválido. ");
	 }
 	
 }

