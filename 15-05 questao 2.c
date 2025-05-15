#include <stdio.h>

int main(){
int numeros[10];

for(int i=0; i<10; i++){
    printf(" Digite o %d numero:", i+1);
    scanf("%d", &numeros[i]);
}
printf("Valores armazenados e suas posicoes:\n");
for(int i=0; i<10; i++){
    printf("\t%d", numeros[i]);}
printf("\n");
for(int i=-1; i<9; i++){
    printf("\t%d", numeros[i]);}
}
