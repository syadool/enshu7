#include <stdio.h>

int main() {
    int test;
    printf("点数を入力");
    scanf("%d", &test);
    if(test < 0 && test > 100){
        printf("無効な点数");
    }
    return 0;
}
