#include <stdio.h>
#include <string.h>
#include <ctype.h>

int repeats(char dict[1000][201], char phrase[201], int phrase_counts[1000]) {

	//counter for the outer loop
	int i = 0;
	//flag in case of two of the same phrases
	int r_flag = 0;
	//counts if the phrase is new or not
	int new_phrase = 0;
	
	int len = strlen(phrase);

	while( (i < 999) && (r_flag == 0)) {
		//compares string lenghts before checking individual characters to ensure no seg faults
		int dict_len = strlen(dict[i]);
		if(dict_len == len) {
			//variable for inner loop
			int j = 0;
			//if both have the same string length, then checks individual characters 
			while(j < (len-1)) {
				if(dict[i][j] == phrase[j]) {
					//if the characters are the same then it sets the flag
					r_flag = 1;
				}
				else {
					//however, the moment it notices different characters it breaks out of the loop
					r_flag = 0;
					break;
				}
				j++;
			
			}
		}

		i++;
	}
	
	//if it's a new phrase, then it adds 1 to total phrases
	if(r_flag == 0) {
		return 1;
	}
	
	//if it's a repeat phrase, then it doesn't add anything to total phrases
	if(r_flag == 1) {
		phrase_counts[i-1]++;
		return 0;
	}
}
