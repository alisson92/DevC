#include <stdio.h>
#include <stdlib.h>

int main()
{
	float reajuste, salario, salarioreajuste, maiorsalreajuste;
	int cont;
	maiorsalreajuste=0;

	{
	printf("Qual a porcentagem de reajuste: ");
	scanf("%f", &reajuste);
	for(cont=1;cont<=50;cont=cont+1)
	
	{
		printf("Informe o seu salario: ");
		scanf(" %f", &salario);
		salarioreajuste = salario + (salario*reajuste/100);
		printf("O salario reajustado foi: %.2f\n\n", salarioreajuste);
		
		if (salarioreajuste > maiorsalreajuste)
		maiorsalreajuste = salarioreajuste;
		
	}
	
	printf("O maior salario foi de: %.2f", maiorsalreajuste);
	return 0;
	}
}
