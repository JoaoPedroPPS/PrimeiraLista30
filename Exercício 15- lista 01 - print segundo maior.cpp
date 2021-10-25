#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a > b > c || c > b > a){
		printf("\n%d", b);
	}
	else if(b > a > c || c > a > b){
		printf("\n%d", a);
	}
	else if(b > c > a || a> c > b){
		printf("\n%d", c);
	}
	return 0;
}
