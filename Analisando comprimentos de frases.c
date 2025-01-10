#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char str1[50], str2[50];
	
	printf("Digite uam frase: ");
	gets(str1);
	
	printf("Digite outra: ");
	gets(str2);
	
	
	printf("\n\nString1: ");
	puts(str1);
	printf("Comprimento: %d", strlen(str1));
	
	printf("\n\nString2: ");
	puts(str2);
	printf("Comprimento: %d", strlen(str2));
	
	
	if (strlen(str1) == strlen(str2))
	{
		printf("\n\nComprimentos iguais! :D");
	}
	
	else
	{
		printf("\n\nComprimentos diferentes :(");
	}
	
	printf("\n\n\n");
	system("pause");
}