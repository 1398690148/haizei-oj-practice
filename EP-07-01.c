/*************************************************************************
    > File Name: EP-07-01.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月05日 星期一 15时59分27秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10000
int prime[MAX_N + 5] = {0};

int main() {
	for (int i = 2; i <= MAX_N; ++i) {
		if (!prime[i])
			for (int j = i; j <= MAX_N; j += i)
				if(!prime[j]) prime[j] = i;
	}
	int n;
	while (scanf("%d", &n)) {
		printf("%d\n", prime[n]);
	}
	return 0;
}
