/*************************************************************************
    > File Name: 5..c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 13时53分37秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main() {
	int32_t a, sum = 0;
	scanf("%"PRId32, &a);
	for (int i = a; i >= 1; i--) {
		if(a % i != 0) continue;
		sum += i;

		a /= i;
	}
	printf("%"PRId32"\n", sum);
	return 0;
}
