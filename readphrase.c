#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *readphrase(char phrase[201]) {
    char c;
    int i = 0;

    while( (c = getchar()) != (','||'.'||';'||':'||'?'||'!'|| EOF )) {
        //capitalizes each char
        c=toupper(c);
        
        //sets all blank characters to spaces
        if(isspace(c)) {
            c = ' ';
        }
        if(c == ('('|| ')' || '\'' || '"'||'-')) {
            i++;
        }
        else {
            //builds phrase one character at a time
            phrase[i]=c;
        }
    }
    return(phrase);
}