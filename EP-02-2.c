/*************************************************************************
    > File Name: EP-02-2.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 16时15分51秒
 ************************************************************************/

#include <stdio.h>
#define MAX_N 4000000

int fib[3] = {0, 1};
int main() {
	int n = 1, sum = 0;
	while (fib[n % 3] + fib[(n - 1) % 3] < MAX_N) {
		++n;
		fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
		if(!(fib[n % 3] & 1))
			sum += fib[n % 3];
	}
	printf("%d\n", sum);
	return 0;
}
