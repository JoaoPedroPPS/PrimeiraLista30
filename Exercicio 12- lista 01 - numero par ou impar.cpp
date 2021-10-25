 /*Construa um programa em C que determine (imprima) se um dado número N inteiro (recebido através do
teclado) é PAR ou ÍMPAR. (Usar o operador resto: Ex: N%2)).*/
 #include<stdio.h>
 #include<locale.h>
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	int num;
	printf("Digite o número: ");
	scanf("%d", &num);
	if ((num % 2) == 0){
		printf("\n O número é par.");
	}	
	else{
		printf("\n O número é impar.");
	}
 	
 	
 }
