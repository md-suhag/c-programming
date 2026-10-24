#include <stdio.h>;

int main() {
    
    double r;
    scanf("%lf",&r);

    double pi = 3.141592653;

    double area =pi * (r*r);

    printf("%.9f", area);
    return 0;
}