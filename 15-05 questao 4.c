#include <stdio.h>

int main(){
int numeros[10],maiorValor, menorValor;

for(int i=0; i<10; i++){
    printf(" Digite o %d numero:", i+1);
    scanf("%d", &numeros[i]);
}
for(int i=0; i<10; i++){
    if(numeros[i]>maiorValor)
    maiorValor=numeros[i];

    if(numeros[i]<menorValor)
    menorValor=numeros[i];
}
printf("Maior valor: %d", maiorValor);
printf("\nMenor valor: %d", menorValor);}
