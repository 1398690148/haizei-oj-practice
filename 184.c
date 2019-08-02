/*************************************************************************
    > File Name: 184.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 16时04分39秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int n, sum = 1;
	scanf("%d", &n);
	for(int i = 0; i < n - 1; i++) {
		sum = (sum + 1) * 2;
	}
	printf("%d\n", sum);
	return 0;
}
