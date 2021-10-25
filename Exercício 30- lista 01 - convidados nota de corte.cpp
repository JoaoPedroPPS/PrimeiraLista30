/*
O principal pr�mio da Olimp�ada Brasileira de Inform�tica � o convite para os cursos de programa��o
oferecidos no Instituto de Computa��o da Unicamp, com todas as despesas pagas pela Funda��o Carlos
Chagas, patrocinadora da OBI. S�o convidados apenas os competidores que atingem certo n�mero m�nimo
de pontos, consideradas as duas fases de provas. Voc� foi contratado pela Coordena��o da OBI para fazer
um programa que, dados os n�meros de pontos obtidos por cada competidor em cada uma das fases, e o
n�mero m�nimo de pontos para ser convidado, determine quantos competidores ser�o convidados para o
curso na Unicamp. Voc� deve considerar que:
� todos os competidores participaram das duas fases;
� o total de pontos de um competidor � a soma dos pontos obtidos nas duas fases;
Por exemplo, se a pontua��o m�nima para ser convidado � 435 pontos, um competidor que tenha obtido
200 pontos na primeira fase e 235 pontos na segunda fase ser� convidado para o curso na Unicamp. J� um
competidor que tenha obtido 200 pontos na primeira fase e 234 pontos na segunda fase n�o ser�
convidado.
Entrada
A entrada cont�m um �nico conjunto de testes, que deve ser lido do dispositivo de entrada padr�o
(normalmente o teclado). A primeira linha da entrada cont�m dois n�meros inteiros N e P, representando
respectivamente o n�mero de competidores (1 = N = 100) e o n�mero m�nimo de pontos para ser convidado
(1 = P = 1000). Cada uma das N leituras seguintes cont�m dois n�meros inteiros X e Y indicando a pontua��o
de um competidor em cada uma das fases (0 = X = 400) e (0 = Y = 400).
Sa�da
Seu programa deve imprimir na sa�da padr�o uma �nica linha contendo um �nico inteiro, indicando o
n�mero de competidores que ser�o convidados a participar do curso na Unicamp.
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
	printf("\nO numero de participantes convidados � de %d", convidado);
	
}
