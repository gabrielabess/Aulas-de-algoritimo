#include <stdio.h>

int main(){
int numeros[10],maiorValor, menorValor, posicaoMaior, posicaoMenor;

for(int i=0; i<10; i++){
    printf(" Digite o %d numero:", i+1);
    scanf("%d", &numeros[i]);
}
for(int i=0; i<10; i++){
    if(numeros[i]>maiorValor){
    maiorValor=numeros[i];
    posicaoMaior=i;}

    if(numeros[i]<menorValor){
    menorValor=numeros[i];
    posicaoMenor=i;}
}
printf("Maior valor: %d\nPosição: %d", maiorValor, posicaoMaior);
printf("\nMenor valor: %d\nPosição: %d", menorValor, posicaoMenor);}
