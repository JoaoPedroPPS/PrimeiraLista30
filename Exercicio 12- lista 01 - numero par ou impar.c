 /*Construa um programa em C que determine (imprima) se um dado n�mero N inteiro (recebido atrav�s do
teclado) � PAR ou �MPAR. (Usar o operador resto: Ex: N%2)).*/
 #include<stdio.h>
 #include<locale.h>
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	int num;
	printf("Digite o n�mero: ");
	scanf("%d", &num);
	if ((num % 2) == 0){
		printf("\n O n�mero � par.");
	}	
	else{
		printf("\n O n�mero � impar.");
	}
 	
 	
 }
