/*
O algoritmo de Euclides e´ um me´todo simples e eficiente para encontrar o ma´ximo divi- sor comum entre dois nu´meros inteiros diferentes de zero. 
Podemos descreve^-lo como segue. 
Sejam a e b dois nu´meros inteiros. 
Divida a por b. Se o resto r dessa divisa~o for 0, enta~o mdc(a, b) = b. 
Caso contra´rio, repita o processo com b no papel de a e r no papel de b.

*/

#include <stdio.h>
int mdc(int a, int b);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	
	printf("%d",mdc(a,b));
	
	return 0;
}

int mdc(int a, int b){
	if(a%b == 0){
		return b;
	}
	
	return mdc(b,a%b);
}
