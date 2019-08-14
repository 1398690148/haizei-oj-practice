/*************************************************************************
    > File Name: 65.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 17时05分31秒
 ************************************************************************/

#include <stdio.h>

int is_val(int x) {
	if (x % 3 == 0) return 1;
	if (x % 5 == 0) return 1;
	if (x % 7 == 0) return 1;
	return 0;
	
}
int main() {
	int sum = 0;
	for (int i = 1; i <= 10000; ++i) {
		if (is_val(i)) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
