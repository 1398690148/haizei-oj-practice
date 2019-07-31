/*************************************************************************
    > File Name: 165.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 18时59分04秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int main() {
	int64_t c;
	int size = 0;
	scanf("%"PRId64, &c);
	for(int64_t i = 1; i < c; i++) {
		int64_t b = sqrt(c * c - i * i);
		if(i * i + b * b == c * c)
		{
			++size;
		}

	}
	printf("%d\n", size / 2);
	return 0;
}
