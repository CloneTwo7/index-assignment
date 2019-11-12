#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *modString(char*);

int main() {
	char c;
	while((c = getchar()) != EOF) {
		printf("%c", c);
	}
	printf("I want to prove theresa wrong");
}
