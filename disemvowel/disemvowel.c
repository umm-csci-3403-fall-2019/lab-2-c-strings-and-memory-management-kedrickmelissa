#include <stdlib.h>
#include "disemvowel.h"
#include <cstring>
#include <string.h>



int isVowel(char c){
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'|| c == 'o' || c == 'O' || c == 'u' || c == 'U') {
		return 1;
	}
	else
	{
		return 0;
	}
}


int countConst(char *str) {
  
  int i = 0;
  int n = 0;
  for(n = 0; (unsigned)n < strlen(str); n++){
	if (isVowel(str[n])){
		continue;
	}
	else
	{
		i += 1;
	}
  }
  return i;
}

char *disemvowel(char *str) {

  char mynew[countConst(str) + 1];
  int c;

  for (c = 0; (unsigned)c < strlen(str); c++) {
	  //checks if the char at c is a vowel
	if (isVowel(str[c])) {
		continue;
	}
	else 
  	{
           //append const to array
	  strcat(mynew, str[c]);
	}
  return (mynew);
  }

  return (char*) (mynew);
}






