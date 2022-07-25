#include <stdio.h>
int main(){
    int s;
    scanf("%d", s);
    if(s < 0 || 100 < s){
        printf("%d点は誤った点数ではありませんか");
    }else{
        if(0 <= s || s < 60){
            printf("%d点は不可です");
        }else{
            if(60 <= s || s < 70){
                printf("%d点は可です");
            }else
                if(70 <= s || s < 80){
                    printf("%d点は良です");
                }else{
                    if(80 <= s || s <= 100){
                        printf("%d点は優です");
                    }
                }
        }
    }

}