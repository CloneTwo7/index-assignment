#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* modString(char *x){
	int len = strlen(x);
	printf("%i\n", len);
	char y[len];
	int i = 0;
	while(i < len){
		if(isspace(x[i]))
			y[i] = ' ';
		else
			y[i] = toupper(x[i]);
		i++;
	}
	y[i]='\0';
	return(strcpy(x,y));
}
