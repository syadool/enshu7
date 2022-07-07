#include <stdio.h>

int main(){
    int x;
    printf("Please input x.");
    scanf("%d",&x);
    printf("絶対値:");
    printf("%d\n", x);
    if(x >= 0){
        printf("%d\n",x);
    } else{
        printf("%d\n",-x);
    }
    return 0;
}
