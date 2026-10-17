#include <stdio.h>;

int main() {

    int n;
    scanf("%d",&n);

    int firstDigit = n/10;
    int secondDigit = n%10;

    if( secondDigit != 0 && firstDigit % secondDigit == 0){
        printf("YES");
    }else if(firstDigit !=0 &&  secondDigit %firstDigit == 0){
        printf("YES");
    }
    else{

        printf("NO");
    }
    
    return 0;
}