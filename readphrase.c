#include <stdio.h>
#include <string.h>
#include <ctype.h>

char supergetchar();

//one global variable to track if EOF is hit
int flag;

void readphrase(char phrase[201]) {

	char c;
	int i = 0;
	//adds characters to the phrase, only if it's a valid phrase character
	while( ((c = supergetchar() ) != EOF) && (c != '.') && (c != ',') && (c != '!') && (c != '?') && (c != ';') && (c != ':')){
			phrase[i] = c;
			i++;
			phrase[i] = '\0';
	}

	//if EOF is hit then the main loop will break
	if(c == EOF) {
		flag = 1;
	}

	else {
		flag = 0;
	}
}
