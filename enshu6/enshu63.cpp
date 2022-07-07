#include<stdio.h>
int main(){
    int sum;
    int cnt;
    sum = 0;
    cnt = 1;
    while (cnt<11){
        sum = sum + cnt;
        cnt = cnt +1;
    }
    printf("sum = %d\n",sum);
    printf("cnt = %d\n",cnt);
return 0;
}