/*************************************************************************
    > File Name: 53.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 14时02分43秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define MAX_N 1000000

int32_t sum(int32_t x) {
	int32_t numsum = 1;
	for (int i = 2; i < x / 2; i++) {
		if(x % i != 0) continue;
		numsum += i;
	}
	numsum += x;
	return numsum;
}
int main() {
	for(int i = 1; i <= MAX_N; i++) {
		
	}
	return 0;
}
