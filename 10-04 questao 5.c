#include<stdio.h>

int main() {
	int num1, num2,opcao;
	float resultado;
	printf("Insira o primeiro numero: ");
	scanf("%i", &num1);
	printf("Insira o segundo numero: ");
	scanf("%i", &num2);
	printf("Selecione alguma das seguintes operacoes:\n1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
	scanf("%d", &opcao);
	if (opcao<1 || opcao>4) {
		printf("Resposta Invalida");
	} else {
		switch (opcao) {
			case 1:
				resultado=num1+num2;
				printf("Voce escolheu adicao entre os numeros %i e %i e o resultado foi %.2f", num1, num2, resultado);
			break;
			case 2:
				resultado=num1-num2;
				printf("Voce escolheu subtracao entre os numeros %i e %i e o resultado foi %.2f", num1, num2, resultado);
			break;
			case 3:
				resultado=num1*num2;
				printf("Voce escolheu multiplicacao entre os numeros %i e %i e o resultado foi %.2f", num1, num2, resultado);
			break;
			case 4:
				if (num2==0){
				printf("Divisao nao e possivel por conta do zero");}
				else{
				resultado=num1/num2;
				printf("Voce escolheu divisao entre os numeros %i e %i e o resultado foi %.2f", num1, num2, resultado);}
			break;
		}	
	}
}
