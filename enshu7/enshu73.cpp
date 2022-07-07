#include<stdio.h>
int main(){
    int sum;
    int cnt;
    sum = 0;
    for(cnt = 1, cnt < 11; cnt = cnt + 1;){
        sum = sum + cnt;
    }
    printf("%d", sum);
    printf("%d", cnt);
    return 0;
}