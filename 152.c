/*************************************************************************
    > File Name: 152.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 15时41分59秒
 ************************************************************************/

#include<stdio.h>

char str[][10] = {"Sunday", "Monday", "Tuesday", 
				"Wednesday", "Thursday", "Friday", 
				"Saturday"};
int main() {
	int n;
	scanf("%d", &n);
	printf("%s\n", str[(n + 3) % 7]);
	return 0;
}
