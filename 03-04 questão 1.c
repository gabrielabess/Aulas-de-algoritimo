#include<stdio.h>

int main() {
		int num1, num2;
		printf("Digite o primeiro numero:");
		scanf("%i", &num1 );
		printf("Digite o segundo numero:");
		scanf("%i", &num2);
		
		if (num1>num2){
			printf("O primeiro numero e maior.");
		}
		else if (num1<num2){
			printf("O segundo numero e maior");
		}
		else{
			printf("Os numeros sao iguais!");
		}
	}
