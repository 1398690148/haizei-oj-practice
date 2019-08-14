/*************************************************************************
    > File Name: EP-44.01.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 15时00分01秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int64_t pentagonal(int64_t n) {
	return n * (3 * n - 1) / 2;
}

int is_Pentagonal(int64_t x, int64_t n) {
	int head = 1, tail = n, mid;
	while (head <= tail) {
		mid = (head + tail) >> 1;
		if (pentagonal(mid) == x) return mid;
		else if (pentagonal(mid) < x) head =mid + 1;
		else tail = mid - 1;
	}
	return 0;
}

int main() {
	int64_t i = 1, j = 1;
	int64_t ans = INT64_MAX;
	while (pentagonal(j + 1) - pentagonal(j) < ans) {
		j += 1;
		for(int i = j - 1; i > 0; --i) {
			if (pentagonal(j) - pentagonal(i) >= ans) break;
			if (!is_Pentagonal(pentagonal(j) + pentagonal(i), 2 * j)) continue;
			if(!is_Pentagonal(pentagonal(j) - pentagonal(i), 2 * i)) continue;
			if (pentagonal(j) - pentagonal(i) >= ans) continue;
			ans = pentagonal(j) - pentagonal(i);
		}
	}
	printf("%"PRId64"\n", ans);
	return 0;
}
