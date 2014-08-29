#include "lab3Func.h"

void upConv( char *sPtr ){	//Converts all lowercase letters to up
	while(*sPtr != '\0'){
		if(islower(*sPtr)){
			*sPtr = toupper(*sPtr);
		}
		++sPtr;
	}
};


int vCount( char *sPtr ){	//Count the number of Vowels in a string
	int c = 0;				//Assumes string is all upperCase
	while(*sPtr != '\0'){
		if(*sPtr == 'A'){c++;}
		else if(*sPtr == 'E'){c++;}
		else if(*sPtr == 'I'){c++;}
		else if(*sPtr == 'O'){c++;}
		else if(*sPtr == 'U'){c++;}
		++sPtr;
	}
	return c;
};

void swap( char *sPtr1, char *sPtr2 ){
	printf("Hit 0\n");
	int c1 = 0;
	int c2 = 0;
	char *p1 = sPtr1;	//Original Pointer locations
	char *p2 = sPtr2;
	int i;
	
	//Count contents of each string to size tempString
	while(*sPtr1 != '\0'){
		++c1;
		++sPtr1;
	}
	
	
	while(*sPtr2 != '\0'){
		++c2;
		++sPtr2;
	}
	
	//Reset pointers
	sPtr1 = p1;
	sPtr2 = p2;

	
	//Advance pointers until a letter is reached
	while(*sPtr1 <= 'A' || *sPtr1 >= 'Z'){
		++sPtr1;
	} 
	
	while(*sPtr2 <= 'A' || *sPtr2 >= 'Z'){
		++sPtr2;
	} 
	
	if(*sPtr2 < *sPtr1){
		char temStr[c1];
		sPtr1 = p1;	//return pointers to origins
		sPtr2 = p2;
		for(i=0;i<c1;i++){	//copy word1 to temp
			temStr[i] = *sPtr1;
			++sPtr1;
		}
		sPtr1 = p1;
		while(*sPtr2 != '\0'){	//Store word2 into word1
			*sPtr1 = *sPtr2;
			++sPtr1;
			++sPtr2;			
		}
		sPtr1 = p1;	//return pointers to origins
		sPtr2 = p2;
		// Copy temp into word2
		
		
	}

};
