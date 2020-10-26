/*

	Um programa que l� um n�mero inteiro positivo n, 
	calcula e imprime a quantidade de d�gitos do n�mero. 
	
*/

#include <stdio.h>

int conta_digitos(int n);

int main(){
	int n;
	scanf("%d",&n);
	
	printf("%d",conta_digitos(n));
	
	return 0;
}

int conta_digitos(int n){
	if(n<=9){
		return 1;
	}
	
	return conta_digitos(n/10)+1;
}
