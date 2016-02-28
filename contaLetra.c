#include <stdio.h>

int main(void) {
	printf("Digite uma palavra:");
	char palavra[100];
	int contador, i,igualA;
	gets(palavra);
	printf("\nFrase digitada: %s", palavra);
	for(i=0;palavra[i] !='\0'; i++){
		if(palavra[i] == 'a'){
			palavra[i] = 'b';
			contador ++;
			igualA ++;
		}
	}
	printf("\nCaracteres igual a 'a': %d", igualA);
	printf("\nCaracteres modificados: %d", contador);
	printf("\nPalavra modificada: %s", palavra);
	
	return (0);
}
