#include<stdio.h>

int main(){
	int num1, num2, num3;
	printf("Insira 3 valores inteiros e distintos: ");
	scanf("%d, %d, %d", &num1, &num2, &num3);
	if(num1>num2 && num1>3){
		printf(" O numero %d e o maior", num1);
	}else if (num2>num1 && num2>num3){
		printf("O numero %d e o maior", num2);
	}else {
		printf("O numero %d e o maior", num3);
	}
	
}
