#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *readphrase(char[201]);

int main() {
	char *hello;
	char *s = readphrase(hello);

	printf("%s\n",s);
}
