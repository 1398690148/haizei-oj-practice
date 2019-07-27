/*************************************************************************
    > File Name: 137.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月23日 星期二 21时02分37秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	char c = 'A';
	scanf("%d", &n);
	for(int i = n; i > 0; i--) {
		for(int j = 0; j < i; j++) {
			printf("%c", c++);
		}
		if(i > 1)
		printf("\n");
	}
}
