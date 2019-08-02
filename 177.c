/*************************************************************************
    > File Name: 177.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 18时05分21秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

void exchange(char *str) {
	char A[2] = {0};
	int len = strlen(str);
	A[0] = str[len - 2];
	A[1] = str[len - 1];
	for(int i = len - 1; i >= 0; i--) {
		str[i] = str[i - 2];
	}
	str[0] = A[0];
	str[1] = A[1];
}

int main() {
	char str[1005];
	scanf("%s", str);
	int n = strlen(str);
	printf("%s\n", str);
	for(int i = 0; i < n - 1; i++) {
		exchange(str);
		printf("%s\n", str);
	}
}
