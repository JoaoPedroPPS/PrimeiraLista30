//17. Calcular o fatorial de um n�mero informado.
#include<stdio.h>
int main(){
	int num, i=0;
	printf("\nDigite o n�mero que deseja realizar o fatorial: ");
	scanf("%d", &num);
	for(i=num - 1; i>1; i--){
		num = num * i;
	}
	printf("%d", num);
	
	
}
