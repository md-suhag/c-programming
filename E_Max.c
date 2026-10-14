#include <stdio.h>

int main() {
    int n;
    long long int currentNumber = 0;
    long long int max = 0;
    scanf("%d", &n);
    
    for (int i= 0; i<=n;i++){
   
        scanf("%lld",&currentNumber);
        if(currentNumber>max){
            max = currentNumber;
        }
    }

    printf("%lld",max);


    return 0;
}
// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int n;
//     long long int currentNumber ;
//     long long int max = INT_MIN;
//     scanf("%d", &n);

//     for (int i= 0; i<=n;i++){
   
//         scanf("%lld",&currentNumber);
//         if(currentNumber>max){
//             max = currentNumber;
//         }
//     }

//     printf("%lld",max);


//     return 0;
// }