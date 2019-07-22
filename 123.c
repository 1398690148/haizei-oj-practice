/*************************************************************************
    > File Name: 123.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月22日 星期一 15时21分08秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d%d", &a, &b);
	scanf("%d%d", &c, &d);
	if(a >= c && b <= d) {
		printf("YES\n");
	} else if(a <= c && b >= d) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	
	return 0;
}
