/*************************************************************************
    > File Name: 130.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月23日 星期二 16时41分27秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n, m;
	double sum = 0;
	scanf("%d%d", &m, &n);
	sum = 0;
	for(int i = 0; i < n; i++) {
		sum = (sum + m) * 1.00417;
	}
	printf("$%.2f\n", sum);

	return 0;
}
