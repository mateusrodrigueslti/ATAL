#include <stdio.h>
int variavelGlobal = 10;
int main(void) {
	int variavelLocal1 = 20;
	int variavelLocal2 = 30;
	int variavelLocal3 = 40;
	int variavelLocal4 = 50;
	int variavelLocal5 = 60;
	
	char variavelCaracter1 = 'c';
	char variavelCaracter2 = 'o';
	char variavelCaracter3 = 'e';
	char variavelCaracter4 = 'l';
	char variavelCaracter5 = 'h';
	char variavelCaracter6 = 'a';
	
	printf("As variaveis inteiras contem os numero: ");
	printf("%d", variavelGlobal);
	printf(", %d", variavelLocal1);
	printf(", %d", variavelLocal2);
	printf(", %d", variavelLocal3);
	printf(", %d", variavelLocal4);
	printf(", %d", variavelLocal5);
	
	printf("\nO animal contido nas variaveis caracteres é: ");
	printf("%c", variavelCaracter1);
	printf("%c", variavelCaracter2);
	printf("%c", variavelCaracter3);
	printf("%c", variavelCaracter4);
	printf("%c", variavelCaracter5);
	printf("%c", variavelCaracter6);
	return (0);
}
