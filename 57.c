/*************************************************************************
    > File Name: 57.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 15时29分24秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int n = 1;
int get_len(int x) {
	return floor(log10(x)) + 1;
}

int get_digit(int x, int pos) {
	int A[10] = {0};
	int len = get_len(x);
	for (int i = 0; i < len; ++i) {
		A[i] = x % 10;
		x /= 10;
	}
	return A[len - pos];
}

int main() {
	int x, y = 1, len = 0;
	for (int j = 0; j < 3; ++j) {
		len = 0;
		scanf("%d", &x);
		for (int i = 1; i <= 200000; ++i) {
			if (len + get_len(i) >= x) {
				y *= get_digit(i, x - len);
				break;
			}
			len += get_len(i);
		}
	}
	printf("%d\n", y);
	return 0;
}
