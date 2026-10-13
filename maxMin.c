#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int minimum = a;
  int maximum = a;

  if (a <= b && a <= c) {
    minimum = a;

  } else if (b <= a && b <= c) {
    minimum = b;
  } else {
    minimum = c;
  }

  if (a >= b && a >= c) {
    maximum = a;

  } else if (b >= a && b >= c) {
    maximum = b;
  } else {
    maximum = c;
  }

  printf("%d %d", minimum, maximum);
}

// #include <stdio.h>

// int main() {
//   int a, b, c;
//   scanf("%d %d %d", &a, &b, &c);

//   int min = a;
//   int max = a;

//   if (b > max) {
//     max = b;
//   }
//   if (c > max) {
//     max = c;
//   }

//   if (b < min) {
//     min = b;
//   }
//   if (c < min) {
//     min = c;
//   }
//   printf("%d %d", min, max);
// }