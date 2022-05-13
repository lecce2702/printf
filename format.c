#include <stdio.h>
int main(){
	int ganzzahl = 1;
	float gleitkomma = 3.14;
	char character = 'a';
	char string[] = "Rundung für Pi";
	printf("%1.2f ist eine %i %c %s!\n",gleitkomma, ganzzahl, character, string);
	return 0;
}
