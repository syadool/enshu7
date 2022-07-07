#include <stdio.h>
int main() {
    int gokamoku[5];
    int i;
    int sum;
    int avg;
    gokamoku[0] = 70;
    gokamoku[1] = 90;
    gokamoku[2] = 100;
    gokamoku[3] = 65;
    gokamoku[4] = 80;
    sum = 0;
    i = 0;
    for (i = 0; i < 5; i = i + 1) {
        avg = avg + gokamoku[i];
        i = i + 1;
    }
    printf("%d\n",avg);
    return 0;
}