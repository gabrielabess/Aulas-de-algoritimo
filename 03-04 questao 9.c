#include<stdio.h>

int main() {
	float altura, peso_ideal;
	int genero;
	printf("Insira sua altura: ");
	scanf("%f", &altura);
	if (altura>2.5 || altura<0.5) {
		printf("Altura invalida");
	} else {
		printf("Selecione o seu genero\n 1-Feminino\n 2-Masculino\n");
		scanf("%int", &genero);
		if(genero!=1 && genero!=2) {
			printf("Resposta invalida");
		} else {
			if(genero==1) {
				peso_ideal=(62.1 * altura) - 44.7;
				printf("Seu peso ideal e: %.2f", peso_ideal);
			} else {
				peso_ideal=(72.7 * altura) - 58;
				printf("Seu peso ideal e: %.2f", peso_ideal);
			}
		}
	}
}
