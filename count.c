#include<stdio.h>

#define MAX_WORD_LENGTH 30

// coen 12 lab 1, count.c
// takes file passed in arguments by user and counts number of words, printing it out for the user
// 9/24/2021

int main(int argc, char *argv[]) {
	char c[MAX_WORD_LENGTH+1];
	int count;
	FILE *fp;
	
	// terminates if file is not passed in
	if(argc!= 2) {
		printf("must provide filename in argument\n");
		return 1;
	}
	
	// opens file passed in
	fp = fopen(argv[1], "r");
	
	// checks if file path is correct
	if(fp==NULL) {
		printf("must enter a valid file\n");
		return 1;
	}

	// increments count while there are words
	while(fscanf(fp, "%s", c) == 1) {
		count++;
	}
	
	// prints total word count
	printf("%d total words\n", count);	

	// always remember to close the file when finished
	fclose(fp);
	return 0;
}
