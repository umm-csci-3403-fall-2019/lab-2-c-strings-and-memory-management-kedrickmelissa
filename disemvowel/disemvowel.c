#include <stdlib.h>

#include "disemvowel.h"

#include <cstring>


int isVowel(char c){
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I'|| c == 'o' || c == 'O' || c == 'u' || c == 'U') {
		return 1;
	}
	else
	{
		return 0;
	}
}


int countConst(char str) {
  
  int i = 1;
  
  if (isVowel(str)){
	continue;
  }
  else
  { 
	i += 1;
  }
  return i;
}



char *disemvowel(char *str) {

  char full[] = str
  char new[countConst(str) + 1]
  int c = 0;


  for (c; full[c] != '\0'; c++) {
	  //checks if the char at c is a vowel
	if (isVowel(full[c])) {
		continue;
	}
	else 
  	{
           //append const to array
	  new[] == strcat(new[], c);
	}
  return new[];
  }

  return (char*) new[];
}






