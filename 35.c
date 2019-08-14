/*************************************************************************
    > File Name: 35.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 14时07分24秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int begin, end;
	scanf("%d%d", &begin, &end);
	if (begin > end) {
		printf("ERROR");
		return 0;
	}
	if (begin < 0) begin = 0;
	for (int i = begin; i <= end; ++i) {
		printf("%d\n", i);
	}
	
	
	return 0;
}
