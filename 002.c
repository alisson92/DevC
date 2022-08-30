#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float sal, maiorsal, somasal, mediasal;
	int cont;
	maiorsal=0;
	somasal=0;
	
	for (cont=1;cont<=10;cont=cont+1)
	 
	 {
	 	printf("Digita aqui o seu salario: ");
	 	scanf(" %f", &sal);
	 	somasal=somasal+sal;
	 if (sal > maiorsal)
	 {
	 	maiorsal = sal;
	 	
	 }
}
	mediasalmasal/5;
	printf("O maior salario foi: %.2f\n", maiorsal);
	printf("A media salarial da empresa foi %.2f \n", mediasal);
	return 0;
}
