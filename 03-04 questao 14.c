#include<stdio.h>

int main() {
	float ang1, ang2, ang3, soma_dos_ang;
	printf("Insira o primeiro angulo: ");
	scanf("%f", &ang1);
	printf("Insira o segundo angulo: ");
	scanf("%f", &ang2);
	printf("Insira o terceiro angulo: ");
	scanf("%f", &ang3);
	soma_dos_ang=ang1+ang2+ang3;
	if (soma_dos_ang!=180) {
		printf("Angulos invalidos");
	} else {
		if (ang1==90 || ang2==90 || ang3==90) {
			printf("Triangulo retangulo");
		} else if (ang1>90 || ang2>90 || ang3>90) {
			printf("Triangulo obtusangulo");
		} else {
			printf(" Triangulo Acutangulo");
		}
	}
}
