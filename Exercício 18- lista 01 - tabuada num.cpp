//18. Escrever a tabuada de multiplica��o do um n�mero lido na tela.
#include<stdio.h>
int main(){
	int num, i=1;
	printf("\n Digite o n�mero que deseja realizar a tabuada: ");
	scanf("%d", &num);
	for(i=1; 1<=10; i++){
		printf("\n%d X %d = %d", num, i, num * i);
	}
	return 0;
}
