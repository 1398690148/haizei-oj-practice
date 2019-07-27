/*************************************************************************
    > File Name: 138.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月23日 星期二 21时06分47秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for(int i = n; i > 0; i--) {
		for(int j = 0; j < i; j++) {
			printf("AA");
		}
		if(i > 1)
			printf("\n");
	}
}
