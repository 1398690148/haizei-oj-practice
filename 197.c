/*************************************************************************
    > File Name: 197.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 20时15分06秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int A[15] = { 0 };
	int max = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < 10; i++) {
		int j;
		for (j = 0; j < 10; j++) {
			if (A[j] > A[max]) max = j;
		}
		i && printf(" ");
		printf("%d", A[max]);
		A[max] = 0;
	}
	return 0;
}
