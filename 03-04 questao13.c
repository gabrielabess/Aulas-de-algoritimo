#include<stdio.h>

int main(){
	float lado1, lado2, lado3;
	printf(" Insira a medida do primeiro lado: ");
	scanf("%f", &lado1);
	printf(" Insira a medida do segundo lado: ");
	scanf("%f", &lado2);
	printf(" Insira a medida do terceiro lado: ");
	scanf("%f", &lado3);
	if(lado1==lado2 && lado1==lado3){
		printf("Equilatero");
	}
	else if(lado1!=lado2 && lado1!=lado3 && lado3!=lado2){
		printf("Escaleno");
	}
	else{
		printf("Isoceles");
	}
}
