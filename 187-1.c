/*************************************************************************
    > File Name: 187-1.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月05日 星期一 19时19分16秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
int64_t f(int64_t n) {
	if (n == 1) return 1;
	return f(n - 1) * 2 + 1;
}

int64_t f1(int64_t n) {
	if (n == 1) return 1;
	return f1(n - 1) * 2 + n;

}
int main() {
	int64_t n, m;
	scanf("%"PRId64, &n);
	printf("%"PRId64" %"PRId64, f(n), f1(n));
	return 0;
}
