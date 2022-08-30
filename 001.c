#include <stdio.h>
#include <stdlib.h>

int main(){
	int cont, num, maior;
	maior=0;
	
	for (cont=1;cont<=15;cont=cont+1
	)
	{
	printf("Digite um numero: ");
	scanf(" %d", &num);		
	}

	if (num > maior)
	{
		maior = num;
	}
	
	printf("O maior valor digitado foi: %d\n", maior);
	
	
}
