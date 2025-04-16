#include <stdio.h>

int main() {
	float valor_etiqueta, valor_final, juros, valor_dif, valor_parcela;
	int meses, opcao, num_parcelas;
	printf("Insira o preco de etiqueta do produto: ");
	scanf("%f", &valor_etiqueta);
	printf("\nAgora selecione a opcao de pagamento:\n1- A vista em dinheiro com 15%% de desconto\n2- A vista no cartao de debito com 10%% de desconto\n3- A vista no cartao de credito com 5%% de desconto\n4- 2X no cartao de credito com o preco da etiqueta, somente em compras acima de R$100,00\n5- De 3X a 10X com juros de 10%%, somente em compras acima de R$300,00\nDigite a opcao que melhor lhe atende:  ");
	scanf("%d", &opcao);
	if(opcao<1 || opcao>5) {
		printf("Opcao invalida!");
	} else {
		switch (opcao) {
			case 1:
				valor_final= valor_etiqueta*0.85;
				valor_dif= valor_etiqueta-valor_final; //modificar a ordem para os que aumentam o valor
				printf("Voce selecionou a opcao 'a vista em dinheiro', o valor da etiqueta era R$%.2f e com a opcao selecionada o valor a pagar e R$%.2f, voce economizou R$%.2f!", valor_etiqueta, valor_final, valor_dif);
				break;
			case 2:
				valor_final= valor_etiqueta*0.90;
				valor_dif= valor_etiqueta-valor_final;
				printf("Voce selecionou a opcao 'a vista no cartao de debito', o valor da etiqueta era R$%.2f e com a opcao selecionada o valor a pagar e R$%.2f, voce economizou R$%.2f!", valor_etiqueta, valor_final, valor_dif);
				break;
			case 3:
				valor_final= valor_etiqueta*0.95;
				valor_dif= valor_etiqueta-valor_final;
				printf("Voce selecionou a opcao 'a vista no cartao de credito', o valor da etiqueta era R$%.2f e com a opcao selecionada o valor a pagar e R$%.2f, voce economizou R$%.2f!", valor_etiqueta, valor_final, valor_dif);
				break;
			case 4:
				if(valor_etiqueta<100) {
					printf("O valor nao e suficiente para a opcao selecionada!");
				} else {
					valor_final= valor_etiqueta;
					valor_parcela=valor_final/2;
					printf("Voce selecionou a opcao '2X no cartao de credito', o valor da etiqueta era R$%.2f e com a opcao selecionada ele se mantem, cada parcela sera R$%.2f!", valor_etiqueta, valor_parcela);
				}
				break;
			case 5:
				if(valor_etiqueta<300) {
					printf("O valor nao e suficiente para a opcao selecionada!");
				} else {
					printf("Quantas parcelas voce deseja? ");
					scanf("%d", &num_parcelas);
					if (num_parcelas<3 || num_parcelas>10) {
						printf("Numero invalido de parcelas");
					} else {
						juros= valor_etiqueta*0.1*num_parcelas;
						valor_final= valor_etiqueta + juros; // valor acresido é o juros
						valor_parcela= valor_final/num_parcelas;
						printf("Voce selecionou a opcao '%dX no cartao de credito', o valor da etiqueta era R$%.2f e com a opcao selecionada aumenta R$%.2f, ficando %.2f, cada parcela sera R$%.2f!", num_parcelas, valor_etiqueta, juros, valor_final, valor_parcela);
					}
				}
				break;
		}
	}
}
