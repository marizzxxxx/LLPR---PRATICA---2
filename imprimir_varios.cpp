#include <stdio.h>

int imprimir_varios (int quantidade){
	while (quantidade){
		printf("Adoro programar\n");
	-- quantidade;
	}
	printf("O valor de quantidade eh: %d\n", quantidade);
}

//marizzxxx

int main(){
	int x;
	scanf("%d", &x);
	imprimir_varios(x);
	printf("O valor de x eh: %d\n", x);
	return 0;
}
