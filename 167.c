/*************************************************************************
    > File Name: 167.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月29日 星期一 19时28分54秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 10000
int main() {
	char A[MAX_N + 5] = {0}, B[MAX_N] = {0}, C[MAX_N] = {0};
	int n, N;
	scanf("%s", A);
	scanf("%d", &n);
	scanf("%s", B);
	int len = strlen(A);
	printf("%d\n", len);
	for(int i = 0; i < len; i++) {
		if(!(A[i] == 'a')) continue;
		printf("%d\n", i + 1);
		break;
	}
	for(int i = 0; i < n - 1; i++) {
		printf("%c", A[i]);
	}
	printf("%s", B);
	for(int i = n - 1; A[i]; i++) {
		printf("%c", A[i]);
	}

}
