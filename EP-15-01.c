/*************************************************************************
    > File Name: EP-15-01.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 16时14分25秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
	int64_t n = 40, m = 20, ans = 1;
	while ( m > 1) {
		if (n > 20)	ans *= (n--);
		if (ans % m == 0) ans /= (m--);
	}
	printf("%"PRId64"\n", ans);
	return 0;
}
