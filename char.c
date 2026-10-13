#include <stdio.h>

int main() {
  char x;
  char newChar;
  scanf("%c", &x);
  if (x >= 'a' && x <= 'z') {

    newChar = x - 32;
  } else {
    newChar = x + 32;
  }
  printf("%c", newChar);
  return 0;
}