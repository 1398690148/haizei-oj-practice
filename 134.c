/*************************************************************************
    > File Name: 134.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月23日 星期二 20时33分06秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
int main() {
	int32_t a, b, size = 0;
	int A[100] = {
		0
	};
	scanf("%"PRId32 "%" PRId32, &a, &b);
	for(int i = a; i <= b; i++) {
		if(i % 11 == 0) {
			A[size++] = i;
		}
	}
	for(int i = 0; i < size - 1; i++) {
		printf("%d ", A[i]);
	}
	if(size - 1 >= 0 && A[size - 1] != 0)
	printf("%d", A[size - 1]);

	
	
	return 0;
}
