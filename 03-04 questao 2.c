#include<stdio.h>

int main() {
	int ano_nasc, ano_atual=2025, idade;
	printf("Insira o ano atual:");
	scanf("%d", &ano_atual);
	if(ano_atual>2025 || ano_atual<1900) {
		printf("Ano Invalido");
	} else {
		printf("Insira seu ano de nascimento:");
		scanf("%d", &ano_nasc);

		if(ano_atual<ano_nasc || ano_nasc<1900) {
			printf("Ano Invalido");
		} else {
			idade=ano_atual-ano_nasc;

			if(idade>=16 && idade<18) {
				printf("Pode votar mas e opcional!");
			} else if(idade>=18 && idade<65) {
				printf("Pode votar e e obrigatorio");
			} else if(idade>=65) {
				printf("Pode votar mas nao e obrigatorio");
			} else {
				printf("Ainda nao pode votar!");
			}
		}
	}
}
