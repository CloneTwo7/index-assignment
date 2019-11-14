#include <stdio.h>
#include <string.h>
#include <ctype.h>

void readphrase(char phrase[201], int c) {
    int i = 0;
    int flag = 0;

	//stops looping if it hits an ending symbol
	if( c == (',' || '.' || '?' || '!' || ':' || ';')) {
	    flag++;
	}
	if(flag != 0){
        	//capitalizes each char
        	c=toupper(c);
        
        	//sets all blank characters to spaces
        	if(isspace(c)) {
            		c = ' ';
        	}
	
		//skips over the following characters
        	if(c == ('('|| ')' || '\'' || '"'||'-')) {
            		i++;
        	}
        	else {
            		//builds phrase one character at a time
            		phrase[i]=c;
        	}
	}
    phrase[i++] = '\0';
}
