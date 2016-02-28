#include <stdio.h>

int main(void) {
	char string1[100];
	char string2[100];
	scanf("%s", &string1);
	scanf("%s", &string2);
	printf("String1 %s",string1);
	printf("\n %s");
	printf("String2 %s",string2);
	
	printf("String1 %c",string1[1]);
	printf("String2 %c",string2[1]);
	return (0);
}
