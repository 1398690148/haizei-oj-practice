/*************************************************************************
    > File Name: 55.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 13时45分18秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
int is_year(int y) {
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		return 1;
	return 0;
}
int is_val(int y) {
	int64_t sum = 0;
	for (int i = 1900; i < y; ++i) {
		if (is_year(i))
			sum += 366;
		else sum += 365;
	}
	sum += (157 + is_year(y));
	return (sum % 7) == 6;
}
int main() {
	int sy, sm, sd, ay, am, ad, ans = 0;
	scanf("%d%d%d%d%d%d", &sy, &sm, &sd, &ay, &am, &ad);
	for (int i = sy; i <= ay; ++i) {
		ans += is_val(i);
	}	
	if (is_val(sy) && sm >= 6 && sd > 6) {
			ans -= 1;		
	}
	if (is_val(ay) && am >= 6 && ad > 6) {
			ans -= 1;
	}
	printf("%d\n", ans);
	return 0;
}
