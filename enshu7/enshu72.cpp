#include<stdio.h>
int main(){
    int sum;
    int p;
    int cnt;
    sum = 0;
    p = 2;
    for(cnt = 0; cnt < 6; cnt = cnt + 1){
        printf("%d ",sum, p, cnt);
        sum = sum + p;
        p = p * 2;
    }
}