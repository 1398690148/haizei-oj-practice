/*************************************************************************
    > File Name: EP-45.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 18时45分39秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int64_t pentagonal(int64_t n) {
	return n * (3 * n - 1) / 2;
}

int64_t triangular(int64_t n) {
	return n * (n + 1) / 2;
}

int64_t hexagonal(int64_t n) {
	return n * (2 * n - 1);
}

int binary_search(int64_t (*func)(int64_t), int64_t x) {
	int head = 1, tail = 100000,mid;
	while (head <= tail) {
		mid = (head + tail) / 2;
		if (func(mid) == x) return mid;
		else if (func(mid) < x) head = mid + 1;
		else tail = mid - 1;
	}
	return 0;
	
}

int main() {
	int n = 144;
	for (;;++n) {
		if (!binary_search(triangular, hexagonal(n))) continue;
		if (!binary_search(pentagonal, hexagonal(n))) continue;
		printf("%"PRId64"\n", hexagonal(n));
		break;
	}	
	
	
	return 0;
}
