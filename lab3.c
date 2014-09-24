#include "lab3Func.h"

#define WORDSIZE 16
#define LISTSIZE 20

int main() {
	char words[WORDSIZE] = "FISHER";
	int vowels;
	
	/* Test Part B */
	upConv(words);
	vowels = vCount(words);
	printf("There are %d vowels in %s\n", vowels,words);
	
	/* Test Part C */
	char words2[WORDSIZE] = "FISH";
	upConv(words2);
	
	printf( "\nBefore swap:\nWord1 is %s\nWord2 is %s\n", words, words2 );
	alphOrder(words,words2);
	printf( "\nAfter swap:\nWord1 is %s\nWord2 is %s\n", words, words2 );


	/* Test Part D */
	int i,j, count = 0;
	char list[LISTSIZE][WORDSIZE] = { "QUEBEC","PAPA","OSCAR","FOXTROT","INDIA",
						"KILO","HOTEL","TANGO","NOVEMBER","SIERRA",
						"ROMEO","ALPHA","ECHO","MIKE","DELTA",
						"BRAVO","JULIET","GOLF","LIMA","CHARLIE" };
	
	printf("Here's the UNsorted list:\n");
	for(i=0;i<LISTSIZE;i++){
		printf("%s\n",list[i]);
	}
	
	// Perform Sort
	for(i=0;i<LISTSIZE;i++){
		for(j=0;j<LISTSIZE-1;j++){
			count += alphOrderRet(list[j],list[j+1]);
		}
	}
	
	printf("\nAfter %d swaps, here's the Sorted list:\n",count);
	for(i=0;i<LISTSIZE;i++){
		printf("%s\n",list[i]);
	}
	

	return 0;
}
