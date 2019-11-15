#include <stdio.h>
#include <string.h>
#include <ctype.h>

void readphrase(char[201], int);
char supergetchar();

int main() {
	char word[201];
	int c;
	int i = 0;

	while((c = supergetchar() != EOF )&&(c != '.')) {
		printf("c after calling function: %c\n", c);
		
		word[i] = c;
		i++;
	}

	printf("---------\n");
	printf("%s\n", word);
}
