#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "disemvowel.h"

char *disemvowel(char *str) {
	char *nStr;
	int i = 0, c;

	for (i = 0; str[i] != '\0'; i++) {
		if(isVowel(str[i]) == 1) {
			c++;
		}
	}
	 nStr = (char*)calloc(c+1, sizeof(char));

	 for(int j = 0, k = 0; j < i; j++) {
		 if(isVowel(str[j]) == 0) {
			 nStr[k] = str[j];
			 k++;
		 }
	 }
	 nStr[c] = '\0';

	return (char*) nStr;
}

int isVowel(char c){
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'|| c == 'o' || c == 'O' || c == 'u' || c == 'U') {
	       return 1;
	}
return 0;	
}
