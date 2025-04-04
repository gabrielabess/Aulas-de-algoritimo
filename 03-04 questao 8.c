#include<stdio.h>

int main(){
	int num1, num2, num3;
	printf("Insira um numero inteiro: ");
	scanf("%i", &num1);
	printf("Insira um numero inteiro: ");
	scanf("%i", &num2);
	printf("Insira um numero inteiro: ");
	scanf("%i", &num3);
	
	if(num1<num2 && num1<num3){
		printf("Ordem cresceste: %i", num1);
		if (num2<num3){
		printf(", %i, %i", num2, num3);}
		else {
			printf(", %i, %i", num3, num2);
		}}
		
	else if(num2<num1 && num2<num3){
		printf("Ordem cresceste: %i", num2);
		if (num1<num3){
		printf(", %i, %i", num1, num3);}
		else {
			printf(", %i, %i", num3, num1);
		}}
	else{
		printf("Ordem cresceste: %i", num3);
		if (num2<num1){
		printf(", %i, %i", num2, num1);}
		else {
			printf(", %i, %i", num1, num2);
		}}	
		
}
