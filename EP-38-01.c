/*************************************************************************
    > File Name: EP-38-01.c
    > Author: liqiang
    > Mail: 1398690148@qq.com
    > Created Time: 2019年08月12日 星期一 14时23分27秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N 10000


int digits(int x) {
	return floor(log10(x)) + 1;
}

int calc(int x) {
	int n = 1;
	int ans = 0;
	while (digits(ans) < 9) {
		ans *= (int)pow(10, digits(x * n));
		ans += x * n;
		n += 1;
	}
	if (digits(ans) - 9) return 0;
	int num[10] = {0};
	num[0] = 1;
	int pre_ans = ans;
	while (pre_ans) {
		if (num[pre_ans % 10]) return 0;
		num[pre_ans % 10] += 1;
		pre_ans /= 10;
	}
	return ans;
}

int main() {
	int ans = 0;
	for (int i = 1; i < MAX_N; ++i) {
		int tmp = calc(i);
		if (tmp > ans) ans = tmp;
	}
	printf("%d\n", ans);		
	return 0;
}
