/*************************************************************************
    > File Name: 195.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 20时50分23秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100000000

int A[MAX_N + 5] = { 0 };
int findhalf(int k, int n) {
	int head = 0, tail = n - 1, mid;
	while (head <= tail) {
		mid = (head + tail) / 2;
		if (A[mid] == k) return mid;
		else if (A[mid] > k) tail = mid - 1;
		else head = mid + 1;
	}
	return head - 1;
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	int s = m - 1;
	while (m--) {
		int k;
		scanf("%d", &k);
		int pos = findhalf(k, n);
		m != s && printf(" ");
		if(pos == -1) printf("%d", A[0]);
		else printf("%d", A[pos]);
	}
	return 0;
}
