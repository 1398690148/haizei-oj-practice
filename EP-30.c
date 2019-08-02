/*************************************************************************
    > File Name: EP-30.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年08月02日 星期五 16时16分08秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#define MAX_N 354294

int is_val(int i) {
	int pre_i = i, sum = 0;
	while (i) {
		sum += (int)pow(i % 10, 5);
		i /= 10;
	}
	return sum == pre_i;
}
int main() {
	int32_t sum = 0;	
	for (int i = 2; i < MAX_N; i++) {
		if(is_val(i)) sum += i;
	}
	printf("%"PRId32"\n", sum);
	return 0;
}
