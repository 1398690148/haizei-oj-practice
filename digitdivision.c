/*************************************************************************
    > File Name: digitdivision.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 20时49分25秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
	char N[105];
	int t = 0;
	scanf("%s", N);
	int len = strlen(N);
	for (int i  = 0; i < len; ++i) {
		t = (t * 10 + (N[i] & 15)) % 17;
	}
	if (t == 0)
		printf("%d\n", t);
	//printf("%s", N);
	return 0;
}
