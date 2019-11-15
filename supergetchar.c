#include <stdio.h>
#include <string.h>
#include <ctype.h>

char supergetchar() {
	
	//sets value of c
	int c = getchar();

	//if c is an ignorable character, it will repeat until c is not ignorable
	while( c == ('(' || ')' || '\'' || '\"' || '-'))
	{
		c = getchar();
	}
	
	//converts whitespace to spaces
	if(isspace(c)) {
		c = ' ';
	}
	//converts to capital letter
	c = toupper(c);
	
	//return processed char
	printf("c after going through supergetchar() = %c\n", c);
	return(c);
}
