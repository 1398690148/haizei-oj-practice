/*************************************************************************
    > File Name: EP-05.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 14时44分07秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int64_t gcd(int64_t a, int64_t b) {
	if (b == 0) return a;
	return gcd(b, a % b);
	//return (b ? gcd(b, a % b) : a);
}

int main() {
	int64_t sum = 2520;
	for (int i = 11; i <= 20; ++i) {
		sum =  sum * i / gcd(sum, i);
	}
	printf("%"PRId64"\n", sum);
	return 0;
}
