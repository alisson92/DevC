#include <stdio.h>
#include <stdlib.h>
int main()
 {
 	float salbruto, salliquido, imposto, totbruto, totliquido, totimposto;
 	int cont;
 	
 	for (cont=1;cont<=15;cont++)
 	{
 		printf("Digite o valor do salario bruto: ");
		scanf(" %f", &salbruto);
		if (salbruto > 999)
			imposto = salbruto*0.10;
		else
			if (salbruto >1999)
				imposto = salbruto*0.15;
			else
				if (salbruto >9999)
					imposto = salbruto*0.20;
				else
					if (salbruto >99999)
						imposto = salbruto*0.25;
					else
						imposto = salbruto*0.30;
						salliquido = salbruto - imposto;
		printf("Salario Liquido: %.2f\n", salliquido);
		totbruto = totbruto + salbruto;
		totliquido = totliquido + salliquido;
		totimposto = totimposto + imposto;
	 }
	 printf("TOT salário bruto: %.2f \n", totbruto);
	 printf("TOT salario liquido: %.2f \n", totliquido);
	 printf("TOT salario liquido: %.2f \n", totimposto);
	 return 0;

 }
