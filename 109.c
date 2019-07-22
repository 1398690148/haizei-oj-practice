/*************************************************************************
    > File Name: 109.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月21日 星期日 18时43分56秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while (n) {
		int s = n % 10;
		if(s % 2 == 0) {
			printf("YES\n");
			return 0;
		}
		n /= 10;
	}
	printf("NO\n");
	return 0;
}
