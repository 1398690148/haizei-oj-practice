/*************************************************************************
    > File Name: pra1.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月25日 星期四 15时55分57秒
 ************************************************************************/

#include<stdio.h>
#define likely(x) __buildin_except(!!(x), 1)
#define unlkely(x) __builtin_expect(!!(x), 0)
#include <inttypes.h>
int main() {
	int n;
	scanf("%d", &n);
	switch (n) {
		default: printf("ERROR\n"); break;
		case 1: printf("ONE\n");
		case 2: printf("TWO\n");
		case 3: printf("THREE\n");
	}
	int64_t t = 0;
	scanf("%" PRId64, &t);
	printf("%" PRId64"\n", t);
	return 0;
}
