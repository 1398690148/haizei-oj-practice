/*************************************************************************
    > File Name: 198.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月25日 星期四 18时58分44秒
 ************************************************************************/

#include <stdio.h>

long long int f(long long int n) {
	if(n == 0) return 1;
	return f(n - 1) + f(n - 2);
}

int main() {
	long long int n;
	scanf("%lld", &n);
	printf("%lld", f(n) % 10000000007);

}
