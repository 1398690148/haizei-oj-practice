/*************************************************************************
    > File Name: 125.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月25日 星期四 14时20分31秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int h, m, s, t;
	int pre_t;
	char c = '%';
	scanf("%d%d%d%d", &h, &m, &s, &t);
	pre_t = t;
	int nt = h * 3600 + m * 60 + s + t;
	if(nt >= 86400) {
		nt -= 86400; 
	}
	h = nt / 3600;
	m = nt % 3600 / 60;
	s = nt % 3600 % 60;
	if (h == 0) {
		printf("12:%d:%dam\n", m, s);
	} else if (h < 12) {
		printf("%d:%d:%dam\n", h, m, s);
	} else if (h == 12) {
		printf("%d:%d:%dpm\n", h, m, s);
	} else {
		printf("%d:%d:%dpm\n", h - 12, m, s);
	}
	printf("%.2f%c\n", pre_t / 864.0, c);
	return 0;
}
