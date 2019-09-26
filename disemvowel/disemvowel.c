#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "disemvowel.h"


int isVowel(char c){
	        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'|| c == 'o' || c == 'O' || c == 'u' || c == 'U') {
			               return 1;
	       	}
		return 0;
}



char *disemvowel(char *str) {
	int i = 0, c = 0;

	for (i = 0; (unsigned)i < strlen(str); i++) {
		if(isVowel(str[i]) != 1) {
			c++;
		}
	}
	
	char *nStr = (char*) calloc(c+1, sizeof(char));

	 for(int j = 0, k = 0; (unsigned)j < strlen(str); j++) {
		 if(isVowel(str[j]) == 0) {
			 nStr[k] = str[j];
			 k++;
		 }
	 } 

	return (char*) nStr;
}

