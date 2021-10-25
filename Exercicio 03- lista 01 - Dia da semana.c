#include<stdio.h>
int main(){
	int dia;
	while(1){
	
	printf("Entre com o numero do dia: ");
	scanf("%d", &dia);
	switch(dia){
		case 1:printf("Domingo\n");
			break;
		case 2:printf("Segunda\n");
			break;	
		case 3:printf("terca\n");
			break;
		case 4:printf("Quarta\n");
			break;
		case 5:printf("Quinta\n");
			break;
		case 6:printf("Sexta\n");
			break;
		case 7:printf("Sabado\n");
			break;
		default: printf("codigo invalido.\n");	
	}// fim switch
}//fim do while
	
	
	return 0;
}
