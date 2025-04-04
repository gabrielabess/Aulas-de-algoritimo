#include<stdio.h>

int main() {
	int senha;
	printf("Insira a senha:");
	scanf("%i", &senha);
	if (senha==1234) {
		printf("Senha correta");
	} else {
		printf("Senha incorreta");
	}
}
