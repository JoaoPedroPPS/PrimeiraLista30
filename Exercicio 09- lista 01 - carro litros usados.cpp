/*
	Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um automóvel
	que faz N Km por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto e a velocidade média
	da viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA ? TEMPO *
	VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combustível utilizada na
	viagem com a fórmula: LITROS_USADOS ? DISTANCIA /N. O programa em C deverá apresentar os valores da
	distância percorrida e a quantidade de litros utilizados na viagem.

*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float tempogasto, velmed, distancia, litrosusados, kmlitro;
	printf("\nDigite o tempo gasto na viagem: ");
	scanf("%f", &tempogasto);
	printf("\nDigite a velocidade média durante a viagem: ");
	scanf("%f", &velmed);
	distancia = (tempogasto * velmed);
	printf("\Km por litro do automóvel: ");
	scanf("%f", &kmlitro);
	litrosusados = distancia / kmlitro;	
	printf("\Quantidade de litros utilizados: %.2f ", litrosusados);
	return 0;
	
	
}
