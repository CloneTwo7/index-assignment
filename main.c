#include <stdio.h>
#include <string.h>
#include <ctype.h>

int supergetchar();
int repeats(char[1000][201], char[201], int[1000]);
void displayDict(char[1000][201], int, int[1000]);
void readphrase(char[201]);
void dictSort(char[1000][201], char[201]);


int flag = 0;

int main() {
	char dict[1000][201];
	int phrase_counts[1000];
	char phrase[201];
	//this variable is a placeholder for what supergetchar passes to it
	int c;
	//this is a counter variable that will track which space in "word" c gets copied to
	int i = 0;
	int num_phrase = 0;

	//will continually add to the "phrase" until EOF or an end thingy.
	while(flag == 0) {
		readphrase(phrase);
		//new declairs whether or not the current phrase is a duplicate
		
		if(phrase[0] == ' '){
			int j = 0;
			while(j < (strlen(phrase)-1)) {
				phrase[j] = phrase[j+1];
				j++;
			}
			phrase[j] = '\0';	
		}

		
		int new = repeats(dict, phrase, phrase_counts);
		num_phrase = num_phrase + new;
		if( new == 1) {
			strcpy(dict[i],phrase);
			i++;
		}
	}
	//code for once a "word" is formed
	printf("---------\n");
	displayDict(dict, num_phrase, phrase_counts);
}
