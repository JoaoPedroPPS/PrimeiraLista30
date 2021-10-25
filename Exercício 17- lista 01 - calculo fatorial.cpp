//17. Calcular o fatorial de um número informado.
#include<stdio.h>
int main(){
	int num, i=0, fat;
	printf("\nDigite o número que deseja realizar o fatorial: ");
	scanf("%d", &num);
	for(i=num - 1; i>=0; i--){
		fat = fat + (num * i);
	}
	printf("%d", fat);
	
	
}
