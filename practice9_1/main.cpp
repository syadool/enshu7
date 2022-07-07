#include<stdio.h>
int main() {
    int heights[3] = {180, 171, 173};
    //房さんの身長は182cm
    int avg;
    int cnt;
    for (cnt = 0, cnt < 3; cnt = cnt + 1;) {
        avg = avg + heights[cnt];
    }
    avg = avg / 3;
    printf("%d",avg);
    return 0;
}