#include <stdio.h>

/*
		Um programa que comece com um número inteiro positivo n. 
		Se n é par, divida por 2. Se n é ímpar, multiplique por 3 e some 1. 
		Repita esse processo com o novo valor de n, terminando quando n = 1. 
		Imprima o ciclo de n e devolva o comprimento do ciclo.
*/

int ciclo(int n);

int main(){
	int n;
	scanf("%d",&n);
	
	printf(" %d",ciclo(n));
	
	return 0;
}
int ciclo(int n){
	
	if(n==1){
		return 1;
	}
	else if(n%2==0){
		n=n/2;
	}else{
		n= 3*n + 1;
	}
	printf(" %d",n);
	return ciclo(n)+1;
}
