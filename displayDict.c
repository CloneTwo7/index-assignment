#include <stdio.h>
#include <string.h>
#include <ctype.h>

void displayDict(char dict[1000][201], int num, int phrase_count[1000]) {
	int i = 0;

	while(i < num-1) {
		int cnt = phrase_count[i]+1;
		printf("%05d<%s>\n",cnt, dict[i]);
		i++;
	}

}
