#include <stdio.h>

int dobro(int n1, int n2, int x){
	
	if (n1 > n2){
		x = n1;
	} else{
		x = n2;
	}
	
	return x;
}

//marizzxxx

int main(){
	int n1, n2, x;
	
	printf("Programa que escreve uma fun que recebe dois numeros inteiros e retorna o maior dos numeros recebidos\n\n");
	
	printf("Digite o n1: ");
	scanf("%d", &n1);
	
	printf("Digite o n2: ");
	scanf("%d", &n2);
	
	x = dobro(n1, n2, x);
	printf("\nO maior entre eles eh: %d\n", x);
	
	return 0;
}
