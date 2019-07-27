/*************************************************************************
    > File Name: 136.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月23日 星期二 20时56分19秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
	int64_t n;
	scanf("%" PRId64, &n);
	for(int i = 1; i <= n; i++) {
		if(i % 7 == 0) {
			if(i > n - 7) {
				printf("%d", i);
				return 0;
			}
			printf("%d\n", i);
		}
	}
	
	return 0;
}
