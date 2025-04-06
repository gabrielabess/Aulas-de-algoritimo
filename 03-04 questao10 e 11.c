#include<stdio.h>
#include<math.h>

int main() {
	int nlados;
	float medida_lados, area;
	printf("Insira o numero de lados:\n");
	scanf(" %d", &nlados);
	if(nlados<3) {
		printf("Nao e um poligono");
	} else if(nlados>5) {
		printf("Poligono nao identificado");
	} else {
		printf("Insira a medida do lado em centimetros: ");
		scanf(" %f", &medida_lados);
		if (nlados==3) {
			printf("\nTriangulo");
			area = (sqrt(3) / 4) * (medida_lados*medida_lados);;
			printf("\nA area e: %f", area);
		} else if (nlados==4) {
			printf("\nE um quadrado!");
			area=medida_lados*medida_lados;
			printf("\nA area e: %f", area);
		} else {
			printf("\nPentagono");
		}
	}
}
