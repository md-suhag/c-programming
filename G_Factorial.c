#include <stdio.h>;

int main() {

    int t;
    scanf("%d",&t);

    int a[t];

    for(int i = 0; i<t; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i = 0; i<t; i++){

        // printf("%d",a[i]);
        int result = 1;
        if(a[i]==0){
            printf("%d\n", 1);
            continue;
        }
        for(int j= 1;j<=a[i];j++){
            result = result * j;
        }

        printf("%d\n",result);
    }
    


    return 0;
}