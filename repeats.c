#include <stdio.h>
#include <string.h>
#include <ctype.h>

int repeats(char dict[1000][201], char phrase[201], int count[1000]) {
	//counter for the outer loop
	int i = 0;
	//flag in case of double
	int r_flag = 0;
	int new_phrase = 0;
	int len = strlen(phrase);
	while( (i < 999) && (r_flag == 0)) {
		int dict_len = strlen(dict[i]);
		if(dict_len == len) {
			int j = 0;
			while(j < (len-1)) {
				if(dict[i][j] == phrase[j]) {
					r_flag = 1;
				}
				else {
					r_flag = 0;
					break;
				}
				j++;
			}
		}

		i++;
	}
	if(r_flag == 0) {
		return 1;
	}
	if(r_flag == 1) {
		count[i]++;
		return 0;
	}
}
