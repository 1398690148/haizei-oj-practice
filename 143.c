/*************************************************************************
    > File Name: 143.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月25日 星期四 20时59分17秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int isprime_number(int i) {
	for(int j = 2; j <= sqrt(i); j++) {
		if(i % j == 0) {
			return 0;
		}
	}
	return 1;
}

int issquare_number(int i) {
	for(int j = 1; j <= i; j++) {
		if(j * j == i) {
			return 1;
		}
	}
	return 0;
}

int main() {
//	printf("%d%d", isprime_number(11), issquare_number(4));
	int a, b;
	int size = 0;
	int A[9005] = {0};
	scanf("%d%d", &a, &b);
	for(int i = a; i <= b; i++) {
		if (i % 6 == 0) {
			int below = i % 100;
			if (issquare_number(below)) {
				int up = i / 100;
				if(isprime_number(up)) {
					A[size++] = i;
				}
			}
		}
	}
	for(int i = 0; i < size; i++) {
		printf("%d", A[i]);
		if(i != size - 1) printf(" ");
	}
	printf("\n%d", size);
}
