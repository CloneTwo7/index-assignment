#include <stdio.h>
#include <string.h>
#include <stdio.h>

void dictSort(char dict[1000][201], int counts[1000], int max) {

	for(int pass = 0; pass < max; pass++) {
		for(int i = 0; i < max -2; i++) {
		
		//swap if true
		if(strlen(dict[i]) > strlen(dict[i+1])) {
			char temp[201];
			int count_temp;
			strcpy(temp, dict[i]);
			count_temp = counts[i];
			strcpy(dict[i], dict[i+1]);
			counts[i] = counts[i+1];
			strcpy(dict[i+1], temp);
			counts[i+1] = count_temp;
			}
		
		}
	}
}
