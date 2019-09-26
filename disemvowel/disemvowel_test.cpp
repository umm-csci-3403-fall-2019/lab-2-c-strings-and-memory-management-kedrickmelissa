#include <gtest/gtest.h>

#include "disemvowel.h"

TEST(Disemvowel, HandleEmptyString) {
	char *filler = disemvowel((char*) "");
  ASSERT_STREQ("", filler);
	free(filler);
}

TEST(Disemvowel, HandleNoVowels) {
	char *filler = disemvowel((char*) "pqrst");
  ASSERT_STREQ("pqrst", filler);
	free(filler);
}

TEST(Disemvowel, HandleOnlyVowels) {
	char *filler = disemvowel((char*) "aeiouAEIOUOIEAuoiea");
  ASSERT_STREQ("", filler);
  	free(filler);
}

TEST(Disemvowel, HandleMorrisMinnesota) {
	char *filler = disemvowel((char*) "Morris, Minnesota");
  ASSERT_STREQ("Mrrs, Mnnst", filler);
	free(filler);
}

TEST(Disemvowel, HandlePunctuation) {
	char *filler = disemvowel((char*) "An (Unexplained) Elephant!");
  ASSERT_STREQ("n (nxplnd) lphnt!", filler);
  	free(filler);
}

TEST(Disemvowel, HandleLongString) {
  char *str;
  int size;
  int i;

  size = 50000;
  str = (char*) calloc(size, sizeof(char));
  str[0] = 'x';
  str[1] = 'y';
  str[2] = 'z';
  for (i = 3; i < size-1; ++i) {
    str[i] = 'a';
  }
  str[size-1] = '\0';
  
  ASSERT_STREQ("xyz", disemvowel(str));

  free(str);
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
