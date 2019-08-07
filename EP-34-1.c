/*************************************************************************
    > File Name: EP-34-1.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 18时05分41秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 100000

int A[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int is_val(int x) {
	int pre_x = x, sum = 0;
	while (x) {
		sum += A[x % 10];
		x /= 10;
	}
	return pre_x == sum;
}

int main() {
	int sum = 0;
	for (int i = 1; i < 10; i++) {
			A[i] = A[i - 1] * i;
	}
	for (int i = 3; i < MAX_N; i++) {
		if (is_val(i)) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
