#include<stdio.h>
int main(){
	int a;
	int b;
	int cnt;
	a = 2;
	cnt = 0;
	while(cnt<4)
	{
		printf("%d\n",a);
        a = a * (-3);
		cnt=cnt + 1;

	}
    b = a / 6;
    printf("%d\n",b);
    return 0;
}