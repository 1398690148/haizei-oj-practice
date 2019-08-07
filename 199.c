/*************************************************************************
    > File Name: 199.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 17时59分28秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000

int A[11] = { 0 };
long long B[MAX_N + 5] = { 0 };

long long f(int x, int m) {
	if (x < 10) return x;
	if (B[x]) return B[x];
	for (int i = 1; i <= 10; i++) {
		B[x] += A[i] * f(x - i, m);
	}
	printf("B[%d] = %lld\n", x, B[x]);
	B[x] = B[x] % m;
	return B[x];
}

int main() {
	int k, m;
	scanf("%d%d", &k, &m);
	for (int i = 1; i <= 10; i++) {
		scanf("%d", &A[i]);
	}
	printf("%lld\n", f(k, m) % m);
	
	return 0;
}
