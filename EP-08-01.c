/*************************************************************************
    > File Name: EP-08-01.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月05日 星期一 18时19分24秒
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
#include "EP-08.h"

int main() {
	int64_t p = 1, zero = 0, ans = 0;
	for (int i = 0; num[i]; ++i) {
		if (num[i] == '0') {
			++zero;
		} else {
			p *= (num[i] - '0');
		}
		if (i >= 13) {
			if (num[i - 13] == '0') {
				--zero;
			} else {
				p /= (num[i - 13] - '0');
			}
		}
		if (zero == 0 && p > ans) {
			ans = p;
		}
	}
	printf("%"PRId64"\n", ans);
	
	return 0;
}
