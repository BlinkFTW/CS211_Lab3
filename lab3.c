#include "lab3Func.h"

int main() {
	char words[] = "dog";
	char *chPtr = &words[0];
	int vowels;
	
	upConv(chPtr);
	
	vowels = vCount(chPtr);
	
	printf("There are %d vowels\n", vowels);
	
	// Test Part C
	char words2[] = "cat";
	upConv(words2);
	
	swap(words,words2);
	
	printf("Word1 is %s\nWord2 is %s\n",words,words2);

	return 0;
}
