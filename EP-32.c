/*************************************************************************
    > File Name: EP-32.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 15时43分34秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 10000

inline int add_to_num(int x, int *num) {
	while (x) {
		if (num[x % 10]) return 0;
		num[x % 10] += 1;
		x /= 10;
	}
	return 1;
}

int digits(int x) {
	return floor(log10(x)) + 1;
}

int is_val(int a, int b, int c) {
	if (digits(a) + digits(b) + digits(c) != 9) return 0;
	int num[10] = {0};
	num[0] = 1;
	int flag = 1;
	flag = flag && add_to_num(a, num);
	flag = flag && add_to_num(b, num);
	flag = flag && add_to_num(c, num);
	return flag;
}

int keep[MAX_N + 5] = {0};
int main() {
	int sum = 0;
	for (int a = 1; a < 100; a++) {
		for (int b = a + 1; b < 10000; b++) {
			if (!is_val(a, b, a * b)) continue;
			if (keep[a * b]) continue;
			sum += (a * b);
			keep[a * b] = 1;
		}
	}
	printf("%d\n", sum);
	return 0;
}
