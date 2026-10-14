#include <stdio.h>;

int main() {
    for(int i = 1000;i<=9999;i++){
        int x;
        scanf("%d",&x);
        if(x== 1999){
            
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}