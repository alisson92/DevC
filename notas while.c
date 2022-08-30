#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	float nota1, nota2, nota3, media;
	int	cont=1;
	
	while (cont<=40)
	
	{
	
	printf("Digite a primeira nota: ");
	scanf(" %f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf(" %f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf(" %f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	if (media >=7)
	
		printf("Aluno aprovado! %.2f \n\n", media);
	else
		printf("Aluno reprovado! %.2f\n\n", media);
		cont++;
	}
	return 0;
}
