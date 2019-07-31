/*************************************************************************
    > File Name: prac.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 19时09分51秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int64_t f(int64_t i) {
	if(i == 1) return 1;
	return i * f(i - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%"PRId64"\n", f(n));
}
