/* Crie um programa em C que leia a idade de uma pessoa e informe a sua classe eleitoral:
- não eleitor (abaixo de 16 anos);
- eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
- eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	if (idade < 16){
		printf("Você não é um eleitor.");
	}
	else if (idade >= 18 && idade < 65){
		printf("Você é um eleitor obrigatório.");
	}
	else if (idade >= 16 && idade < 18 || idade >= 65){
		printf("Você é um eleitor facultativo.");
	}
	return 0;
}
