/*
	Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem, utilizando-se um autom�vel
	que faz N Km por litro. Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto e a velocidade m�dia
	da viagem. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA ? TEMPO *
	VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combust�vel utilizada na
	viagem com a f�rmula: LITROS_USADOS ? DISTANCIA /N. O programa em C dever� apresentar os valores da
	dist�ncia percorrida e a quantidade de litros utilizados na viagem.

*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float tempogasto, velmed, distancia, litrosusados, kmlitro;
	printf("\nDigite o tempo gasto na viagem: ");
	scanf("%f", &tempogasto);
	printf("\nDigite a velocidade m�dia durante a viagem: ");
	scanf("%f", &velmed);
	distancia = (tempogasto * velmed);
	printf("\Km por litro do autom�vel: ");
	scanf("%f", &kmlitro);
	litrosusados = distancia / kmlitro;	
	printf("\Quantidade de litros utilizados: %.2f ", litrosusados);
	return 0;
	
	
}
