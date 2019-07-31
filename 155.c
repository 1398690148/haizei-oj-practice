/*************************************************************************
    > File Name: 155.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 15时57分23秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int A[35];
	A[0] = 3;
	int flag = 2, sum = 0, n;
	for(int i = 1; i < 30; i++) {
		A[i] = A[i - 1]  + flag;
		flag += 2;
	}
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		printf("%d\n", A[i]);
		sum += A[i];
	}
	printf("%d\n", sum);
}
