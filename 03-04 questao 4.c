#include<stdio.h>

int main() {
	float preco, preco_inf;
	printf("Insira o valor:\n");
	scanf("%f", &preco);
	
	if(preco<100) {
		preco_inf=preco*1.15;
		printf("O preco final e:%.2f", preco_inf);
	} else {
		preco_inf=preco*1.25;
		printf("o preco final e: %.2f", preco_inf);
	}
}
