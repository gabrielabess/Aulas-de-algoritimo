#include<stdio.h>

int main() {
	float nota1, nota2, nota3, media;
	printf("Insira a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Insira a segunda nota:\n");
	scanf("%f", &nota2);
	printf("Insira a terceira nota:\n");
	scanf("%f", &nota3);
	media=(nota1+nota2+nota3)/3;
	printf("As notas informadas foram: %.1f, %.1f, %.1f e a media e %.1f\n", nota1, nota2, nota3, media);
	
	if(media>=7){
		printf("Voce esta aprovado");
	}
	else {
		printf("Voce esta reprovado");
	}
}
