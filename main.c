#include <stdio.h>
#include <string.h>
#include <ctype.h>

void readphrase(char[201], int);
char supergetchar();

int main() {
	//I'm going to build a word using this string
	char word[201];
	//this variable is a placeholder for what supergetchar passes to it
	int c;
	//this is a counter variable that will track which space in "word" c gets copied to
	int i = 0;

	//will continually add to the "word" until EOF or a period.
	while((c = supergetchar() != EOF )&&(c != '.')) {
		printf("c after calling function: %c\n", c);
		
		word[i] = c;
		i++;
	}
	//code for once a "word" is formed
	printf("---------\n");
	printf("%s\n", word);
}
