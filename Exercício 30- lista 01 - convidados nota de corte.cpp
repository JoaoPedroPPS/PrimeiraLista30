/*
O principal prêmio da Olimpíada Brasileira de Informática é o convite para os cursos de programação
oferecidos no Instituto de Computação da Unicamp, com todas as despesas pagas pela Fundação Carlos
Chagas, patrocinadora da OBI. São convidados apenas os competidores que atingem certo número mínimo
de pontos, consideradas as duas fases de provas. Você foi contratado pela Coordenação da OBI para fazer
um programa que, dados os números de pontos obtidos por cada competidor em cada uma das fases, e o
número mínimo de pontos para ser convidado, determine quantos competidores serão convidados para o
curso na Unicamp. Você deve considerar que:
• todos os competidores participaram das duas fases;
• o total de pontos de um competidor é a soma dos pontos obtidos nas duas fases;
Por exemplo, se a pontuação mínima para ser convidado é 435 pontos, um competidor que tenha obtido
200 pontos na primeira fase e 235 pontos na segunda fase será convidado para o curso na Unicamp. Já um
competidor que tenha obtido 200 pontos na primeira fase e 234 pontos na segunda fase não será
convidado.
Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão
(normalmente o teclado). A primeira linha da entrada contém dois números inteiros N e P, representando
respectivamente o número de competidores (1 = N = 100) e o número mínimo de pontos para ser convidado
(1 = P = 1000). Cada uma das N leituras seguintes contém dois números inteiros X e Y indicando a pontuação
de um competidor em cada uma das fases (0 = X = 400) e (0 = Y = 400).
Saída
Seu programa deve imprimir na saída padrão uma única linha contendo um único inteiro, indicando o
número de competidores que serão convidados a participar do curso na Unicamp.
*/
#include<stdio.h>
int main(){
	int qp, nc, p1,p2, count=0,convidado=0;
	printf("\nDigite a quantidade de participantes: ");
	scanf("%d", &qp);
	printf("\nDigite a nota de corte: ");
	scanf("%d", &nc);
	for(count=0;count<= qp; count++){
		printf("\nDigite a nota da primeira prova do participante: ");
		scanf("%d", &p1);
		printf("\nDigite a nota da segunda prova do participante: ");
		scanf("%d", &p2);
		if((p1 + p2) >= nc){
			convidado++;
		}
			
	}
	printf("\nO numero de participantes convidados é de %d", convidado);
	
}
