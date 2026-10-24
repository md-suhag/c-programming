#include <stdio.h>
#include <math.h>
int main() {

    long long int a, b;


    scanf("%lld %lld",&a,&b);

    long long int floor_result = floor((double)a/b);
    long long int ceil_result = ceil((double)a/b);
    long long int round_result = round((double)a/b);
    
    printf("floor %lld / %lld = %lld\n", a, b, floor_result);
    printf("ceil %lld / %lld = %lld\n", a,b,ceil_result);
    printf("round %lld / %lld = %lld\n", a, b, round_result);
    

    return 0;
}