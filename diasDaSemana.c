#include <stdio.h>

int main(void) {
	int num;
	printf("Digite um numero correspondente ao um da semana: ");
	scanf("%d", &num);
	switch(num){
		case 1:
			printf("\nSegunda-Feira");
			break;
		case 2:
			printf("\nTerça-Feira");
			break;
		case 3:
			printf("\nQuarta-Feira");
			break;
		case 4:
			printf("\nQuinta-Feira");
			break;
		case 5:
			printf("\nSexta-Feira");
			break;
		case 6:
			printf("\nSabado");
			break;
		case 7:
			printf("\nDomingo");
			break;
	}
	return 0;
}
