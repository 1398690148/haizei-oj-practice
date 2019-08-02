/*************************************************************************
    > File Name: 178.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 17时57分55秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int n;
	char c = 'A';
	scanf("%d", &n);
	for(int i = 0; i < n - 1; i++) {
		printf("A");
		printf("%c", c + i + 1);
	}
	
	return 0;
}
