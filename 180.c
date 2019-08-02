/*************************************************************************
    > File Name: 180.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 15时59分28秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int64_t pows(int i) {
	int64_t sum = 1;
	for(int j = 0; j < i; j++) {
		sum *= 2;
	}
	return sum;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%"PRId64"\n", pows(n));
	return 0;
}
