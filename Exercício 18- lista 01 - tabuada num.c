//18. Escrever a tabuada de multiplica��o do um n�mero lido na tela.
#include<stdio.h>
int main(){
	int num, i=1;
	scanf("%d", &num);
	for(i=1; i<=10 ; i++){
		printf("%d X %d = %d\n", num, i, num * i);
	}
	return 0;
}
