#include <stdio.h>

int main(){
int numeros[10], soma;

for(int i=0; i<10; i++){
    printf(" Digite o %d numero:", i+1);
    scanf("%d", &numeros[i]);
}

for(int i=0; i<=10; i++){
    soma = soma+i;
}
printf("Soma:%d", soma);}
