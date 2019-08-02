/*************************************************************************
    > File Name: 2.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 20时24分01秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	if(a >= 85) printf("A\n");
	else if(a >= 75) printf("B\n");
	else if(a >= 60) printf("C\n");
	else printf("D\n");
	return 0;
}
