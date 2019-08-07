/*************************************************************************
    > File Name: EP-36.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 18时52分18秒
 ************************************************************************/

#include <stdio.h>

int is_val(int x, int base) {
	int pre_x = x, sum = 0;
	while (x) {
		sum = sum * base + x % base;
		x /= base;
	}
	return pre_x == sum;
}

int main() {
	int sum = 0;
	for (int i = 1; i < 1000000; i++) {
		if(is_val(i, 2) && is_val(i, 10)) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
