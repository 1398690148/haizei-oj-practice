/*************************************************************************
    > File Name: 174.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 13时46分28秒
 ************************************************************************/

#include <stdio.h>

#define MAX_N 1000000

void replace(int i, char *str) {
	int j = 0;
	while (str[j]) {
		++j;
	}
	for(int k = j + 1; k >= i; k--) {
		str[k] = str[k - 2];
	}
	str[i] = '%';
	str[i + 1] = '2';
	str[i + 2] = '0';
}

int find(char *str) {
	int i = 0;
	for(i = 0; str[i]; i++) {
		if(str[i] == 32) return i;
	}
	return -1;
}

int main() {
	char str[MAX_N + 5];
	scanf("%[^\n]s", str);
	for (int i = 0; str[i]; i++) {
		int pos = find(str);
		if(pos == -1) break;
		replace(pos, str);
	}
	printf("%s\n", str);
	return 0;
}
