#include <stdio.h>

int main(){
int numeros[5];7

for(int i=0; i<5; i++){
    printf(" Digite o %d numero:", i+1);
    scanf("%d", &numeros[i]);
}
printf("Numeros em ordem normal:");
for(int i=0; i<5; i++){
    printf("%d\t", numeros[i]);
}
printf("/nNumeros em ordem inversa:");
for(int i=4; i>=0; i--){
    printf("%d\t", numeros[i]);
}
}

