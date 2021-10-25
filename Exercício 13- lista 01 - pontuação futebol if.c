/* Você foi encarregado para desenvolver um programa com objetivo de armazenar os pontos do campeonato
interno de futebol do IFSULDEMINAS, assim seu programa deve receber o nome e os gols de dois times, e
apresentar a pontuação que cada um deve receber pelo jogo, levando-se em consideração que uma vitória
dá 3 pontos, empate 1 ponto e derrota 0 ponto. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	char nomet1[30], nomet2[30];
 	int golt1, golt2, pt1=0, pt2=0, tamt1, tamt2, xt1, xt2;
 	printf("\nDigite o nome do primeiro time: ");
 	gets(nomet1);
 	printf("\nDigite o nome do segundo time: ");
 	gets(nomet2);
 	printf("\nDigite o a quantidade de gols do primeiro time: ");
 	scanf("%d", &golt1);
 	printf("\nDigite o a quantidade de gols do segundo time: ");
 	scanf("%d", &golt2);
 	
 	
 	if (golt1 > golt2){
 		pt1= pt1 + 3;
	 }
	else if(golt1 == golt2){
		pt1++;
		pt2++;
	}
	else{
		pt2 = pt2 + 3;
	}
	
	tamt1=strlen(nomet1);
	for(xt1=0; xt1 <= tamt1; xt1++){
 	printf("%c", nomet1[xt1]);
 }
 printf(": %d\n", pt1);
 
 tamt2=strlen(nomet2);
	for(xt2=0; xt2 <= tamt2; xt2++){
 	printf("%c", nomet2[xt2]);
 }
  printf(": %d\n", pt2);
 
 }
