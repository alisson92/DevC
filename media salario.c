#include <stdio.h>
#include <stdlib.h>

	int main()
	
	{
		float salario, somasalario, maiorsalario, mediasalario;
		int cont;
		maiorsalario = 0;
		somasalario = 0;
		
		for (cont=1;cont<=10;cont++) 
		{
			printf("Informe o seu salario: ");
			scanf(" %f", &salario);
			somasalario = somasalario + salario;
			
			if (salario > maiorsalario)
			{
				maiorsalario = salario;
			}
		}
		
		mediasalario=somasalario/5;
		
		printf("O maior salario foi de = %.2f \n", maiorsalario);
		printf("A media de salario da empresa foi = %.2f \n", mediasalario);
		return 0;
	}
	
	
