/*************************************************************************
    > File Name: 166.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月29日 星期一 18时07分20秒
 ************************************************************************/

#include <stdio.h>

#define MAX_N 10000
int main() {
	char str[MAX_N + 5] = {0}, B[MAX_N] = {0}, C[MAX_N + 5] = {0};
	int n;
	int i = 0;
	scanf("%s", str);
	scanf("%d", &n);
	scanf("%s", B);
	for(i = 0; i < n - 1; i++) {
		C[i] = str[i];
	}
	int N = i;
	int j = 0;
	while (B[j]) {
		C[i++] = B[j];
		++j;
	}
	while (str[N]) {
		C[i++] = str[N];
		++N;
	}
	if (N > 100) {
		printf("100\n");
	} else printf("%d\n", N);
	printf("%s\n", C);
	int pos = 0;
	for(int j = i - 1; j >= 0; j--) {
		++pos;
		if(C[j] == 'x') {
			printf("%d\n", pos);
			break;
		}
	}
}
