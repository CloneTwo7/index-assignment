#include <stdio.h>
#include <string.h>
#include <ctype.h>

char supergetchar();
int flag;
void readphrase(char phrase[201]) {

	char c;
	int i = 0;
	while( ((c = supergetchar() ) != EOF) && (c != '.') && (c != ',') && (c != '!') && (c != '?') && (c != ';') && (c != ':')){
			phrase[i] = c;
			i++;
			phrase[i] = '\0';
	}
	if(c == EOF) {
		flag = 1;
	}
	else {
		flag = 0;
	}
}
