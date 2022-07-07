#include<stdio.h>
int main(){
    int cnt;
    int prod;
    prod = 2;
    for(cnt = 1; cnt <= 10; cnt = cnt + 1){
        printf("2の%d乗:%d\n",cnt,prod);
        prod = prod * 2;
    }
    return 0;
}