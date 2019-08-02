/*************************************************************************
    > File Name: EP-02.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 15时08分31秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int main() {
	int64_t a = 1, b = 2, sum = 2;
	while (a + b <= 4000000) {
		b = a + b;
		a = b - a;
		if(!(b & 1))
		sum += b;
		
	}
	printf("%"PRId64"\n", sum);
	return 0;
}
