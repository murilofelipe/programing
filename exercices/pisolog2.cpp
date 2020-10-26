/*
Informalmente, o logaritmo de um nu´mero em uma dada base e´ a quantidade de vezes que devemos dividir esse nu´mero pela base ate´ que o quociente da divisa~o seja 1. 
Por exemplo, log2 16 = 4 ja´ que 16/2 = 8/2 = 4/2 = 2/2 = 1.

O piso de um nu´mero inteiro positivo x e´ o u´nico inteiro i tal que i = x < i+1. O piso de x e´ denotado por ?x?. 

Escreva uma func¸a~o recursiva com a seguinte interface:

int piso_log2(int n)

que receba um nu´mero inteiro positivo n e devolva ?log2 n?. 
*/
#include <stdio.h>

int piso_log2(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",piso_log2(n));
	
	return 0;
}

int piso_log2(int n){
	if(n==1){
		return 0;
	}
	
	return piso_log2(n/2) + 1;
}

