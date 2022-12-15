#include <stdio.h>

int dobro(int n1){
	return 2 * n1;
}

//marizzxxx

int main(){
	int n, d;
	printf("Digite o numero: ");
	scanf("%d", &n);
	d = dobro(n);
	printf("O dobro do numero eh: %d\n", d);
	printf("O dobro do numero eh: %d\n", dobro(10));
	dobro(10);
	
	return 0;
}
