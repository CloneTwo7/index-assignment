#include <stdio.h>
#include <string.h>
#include <ctype.h>

void readphrase(char[201], int);

int main() {
	char hello[201];
	int c;
	while(c = getchar() != EOF) {
		readphrase(hello, c);
	}
	printf("%s\n", hello);
}
