#include <stdio.h>
#include <stdlib.h>
int main()
{
  	int cont, num;

  	printf("Digite um numero: ");
	scanf(" %d \n", &num);
	
	for (cont=1;cont<=20;cont=cont+1)
	{
	  printf(" Numero lido: %d", num);
	}
	return 0;
}
