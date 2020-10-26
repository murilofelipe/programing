#include <stdio.h>
/*
	Um programa que l� um n�mero inteiro n positivo, 
	calcula e imprime a soma dos d�gitos do n�mero n. 
	
	A program that reads a positive integer n,
    calculates and prints the sum of the digits of the number n.
*/
int soma_digitos(int n);

int main(){
	int n;
	scanf("%d",&n);
	
	printf("%d",soma_digitos(n));
	
	return 0;
}

int soma_digitos(int n){
	if(n==0){
		return n;
	}
	return soma_digitos(n/10) + n%10;
}
