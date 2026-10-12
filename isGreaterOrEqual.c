#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d",  &b);
    if (a >= b) {
        printf("%d is greater than or equal to %d\n", a, b);
    } else {
        printf("%d is less than %d\n", a, b);
    }
    return 0;
}