#include <stdio.h>
#include <string.h>
#include <ctype.h>

int supergetchar();
int repeats(char[1000][201], char[201], int[1000]);
void displayDict(char[1000][201], int, int[1000]);
void readphrase(char[201]);
void dictSort(char[1000][201], int[1000], int);


int flag = 0;

int main() {
	//dictionary used to track all phrases
	char dict[1000][201];

	//array of ints to count how many of each phrase there are
	int phrase_counts[1000];

	//array that holds the current phrase in question
	char phrase[201];

	//this int tracks what index of the dictionary is next
	int i = 0;

	//this int stores the total number of phrases
	int num_phrase = 0;

	//continually reads input until and end of file is hit.
	while(flag == 0) {
		//reads next phrase
		readphrase(phrase);

		//block of code to get rid of extra spaces at the beginning of each phrase
		while(phrase[0] == ' '){
			int j = 0;
			while(j < (strlen(phrase)-1)) {
				phrase[j] = phrase[j+1];
				j++;
			}
			//sets a null terminator for the phrase
			phrase[j] = '\0';	
		}
		if(strlen(phrase) >= 199) {
			phrase[200] = '\0';
		}
		//figures out how many phrases total there are
		int new = repeats(dict, phrase, phrase_counts);
		num_phrase = num_phrase + new;
		//if a new phrase is found, it adds it to the dictionary
		if( ( new == 1) && (num_phrase <= 999) ) {
			strcpy(dict[i],phrase);
			i++;
		}
	}
	//block of code to print the dictionary
	printf("---------\n");
	if(num_phrase >= 999) {
		num_phrase = 1000;
	}
	dictSort(dict, phrase_counts, num_phrase);
	//calls function to display the sorted dictionary
	displayDict(dict, num_phrase, phrase_counts);
}
