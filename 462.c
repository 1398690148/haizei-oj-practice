/*************************************************************************
    > File Name: 462.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 16时29分30秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

int main() {
	int n, man = 0, woman = 0;
	int64_t ans = 0;
	char c[5];
	char num[500] = {0};
	int64_t number;
	scanf("%d", &n);
	int pre_n = 0;
	while (n--) {
		scanf("%s", c);
		if (c[0] == 'i') {
			scanf("%s", num);
			int len = strlen(num);
			if ((num[len - 2] & 15) & 1) {
				++man;
			} else {
				++woman;
			}
		} else if (c[0] == 'q'){
			scanf("%"PRId64, &number);
			ans += number;
			++pre_n;
		}
	}
	int64_t ave = 0;
	if (pre_n != 0)
	ave = ans / pre_n;
	printf("%d %d %"PRId64"\n", man, woman, ave);
	return 0;
}
