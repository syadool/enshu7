#include <stdio.h>
int main() {
    int diff;
    int p;
    int cnt;
    diff = 20;
    p = 6;
    for(cnt = 0; cnt < 6; cnt = cnt + 1){
        printf("%d ",diff,p,cnt);
        diff = diff - p;
    }
    return 0;
}