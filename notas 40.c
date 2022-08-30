#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cont;
	float nota1, nota2, nota3;
	float media;
	
	for (cont=1;cont<=40;cont++)
	
	{
		printf("Digite a primera nota: ");
		scanf(" %f", &nota1);
		printf("Digite a segunda nota: ");
		scanf(" %f", &nota2);
		printf("Digite a terceira nota: ");
		scanf(" %f", &nota3);
		media = (nota1+nota2+nota3)/3;
		printf("\nA media do aluno foi: %.2f \n\n", media);
		
		if (media >=7)
		{
		printf("Aluno aprovado! %.2f\n\n", media);
		}	
		printf("Aluno reprovado! %.2f\n\n", media);
	}		
}
