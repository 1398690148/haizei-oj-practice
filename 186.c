/*************************************************************************
    > File Name: 186.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 20时36分01秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100000
int A[MAX_N + 5] = { 0 };
int n;
int walk(int n1) {
	if(n1 >= n) return 0;
	return walk(n1 + A[n1]) + 1;
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("%d\n", walk(0));
	return 0;
}
