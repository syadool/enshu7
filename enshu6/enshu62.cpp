#include<stdio.h>
int main(){
    int sum;
    int p;
    int cnt;
    sum = 0;
    p = 2;
    cnt = 0;
    while (cnt < 6){
        printf("%d\n",sum);
        p = p * 2;
        cnt = cnt + 1;
        sum = sum + p;
    }
return 0;
}