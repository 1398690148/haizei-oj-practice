/*************************************************************************
    > File Name: EP-03-1.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 16时44分51秒
 ************************************************************************/

#include <stdio.h>
#define N 600851475143LL

int main() {
	long long int i = 2, ans = 0;
	long long int num = N;
	while (i * i <= num) {
		if (num % i == 0) ans = i;
		while (num % i == 0) {
			num /= i;
		}
		++i;
	}
	if (num != 1) ans = num;
	printf("%lld\n", ans);
	
	
	return 0;
}
