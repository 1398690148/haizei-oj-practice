/*************************************************************************
    > File Name: EP-07.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月05日 星期一 15时09分10秒
 ************************************************************************/
//素数晒
#include <stdio.h>
#define MAX_N 200000

int main() {
	//memset(A, 0, sizeof(A)); 按字节初始化
	int prime[MAX_N + 5] = {0};
	for (int i = 2; i <= MAX_N; ++i) {
		if(!prime[i]) {
			prime[++prime[0]] = i;
			for (int j = 2; i * j <= MAX_N; ++j) {
				prime[i * j] = 1;
			}
		}
	}
	printf("%d\n", prime[10001]);
	return 0;
}
