/*************************************************************************
    > File Name: 128.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月23日 星期二 16时05分36秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	int a;
	double sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a);
		sum += a;
	}
	printf("%.2f", sum / n);
}
