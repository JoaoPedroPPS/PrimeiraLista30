/*
		Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
	 		O n�mero digitado ao quadrado 
 			A raiz quadrada do n�mero digitado
*/
 #include<stdio.h>
 #include<locale.h>
 #include<math.h>
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	float num, quad, raiz;
 	printf("\nDigite um n�mero positivo: ");
 	scanf("%f", &num);
 	quad = pow(num, 2)
 	raiz = sqrt(num)
 	if(num > 0){
 		printf("\nO numero digitado ao quadrado � %.2f ", quad);
 		printf("\nA ra�z quadrada do n�mero �: %.2f ", raiz);
	 }
 	else{
 		printf("\n N�mero inv�lido. ");
	 }
 	
 }

