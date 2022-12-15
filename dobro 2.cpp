#include <stdio.h>

int dobro(int n1, int n2, int x){
	
	if (n1 > n2){
		x = n1 * 2;
	} else{
		x = n2 * 2;
	}
	
	return x;
}

//marizzxxx

int main(){
	int n1, n2, x;
	
	printf("Programa que escreve uma fun que recebe dois numeros como argumentos e retorna o dobro do maior dos numeros recebidos\n\n");
	
	printf("Digite o n1: ");
	scanf("%d", &n1);
	
	printf("Digite o n2: ");
	scanf("%d", &n2);
	
	x = dobro(n1, n2, x);
	printf("\nO dobro do maior numero eh: %d\n", x);
	
	return 0;
}
