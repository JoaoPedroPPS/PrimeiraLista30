//17. Calcular o fatorial de um número informado.
#include<stdio.h>
int main(){
	int num, i=0;
	printf("\nDigite o número que deseja realizar o fatorial: ");
	scanf("%d", &num);
	for(i=num - 1; i>1; i--){
		num = num * i;
	}
	printf("%d", num);
	
	
}
