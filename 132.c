/*************************************************************************
    > File Name: 132.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月23日 星期二 19时52分37秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
int main() {
	int n, a;
	int64_t sum = 1;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a);
		sum *= a;
	}
	printf("%" PRId64 "\n", sum);


	return 0;
}
