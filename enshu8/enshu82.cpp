#include <stdio.h>

int main(){
    int gokamoku[5];
    int i;
    int avg;
    int sum;

    gokamoku[0] = 70;
    gokamoku[1] = 90;
    gokamoku[2] = 100;
    gokamoku[3] = 65;
    gokamoku[4] = 80;
    sum = 0;
    i = 0;
    while (i < 5){
        sum = sum + gokamoku[i];
        i = i + 1;
    }
    avg = sum /5;
    printf("%d",avg);
    return 0;
}