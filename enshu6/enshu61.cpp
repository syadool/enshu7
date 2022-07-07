#include<stdio.h>
int main(){
    int diff;
    int p;
    int cnt;
    diff = 20;
    p = 6;
    cnt = 0;
    while (cnt < 6){
        printf("%d\n",diff);
        diff = diff - p;
        cnt = cnt + 1;
    }
return 0;
}