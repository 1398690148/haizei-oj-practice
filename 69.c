/*************************************************************************
    > File Name: 69.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月14日 星期三 16时33分29秒
 ************************************************************************/

#include <stdio.h>

int days[13] = {0, 
	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int main() {
	int y, m, d;
	scanf("%d%d%d", &y, &m, &d);
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) days[2] = 29;
	if (m < 1 || m > 12) {
		printf("No\n");
		return 0;
	} else {
		if (d < 1 || d > days[m]) {
			printf("No\n");
			return 0;
		}
	}
	printf("Yes\n");
	return 0;
}
