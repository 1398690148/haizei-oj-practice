/*************************************************************************
    > File Name: 169.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 18时17分51秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

typedef struct mima{
	char str;
	int n;
} mima;

mima m[2010];
int sum(char *str, int n) {
	int len = strlen(str);
	int sums = 0;
	for(int i = 0; i < len; i++) {
		for(int j = 0; j < n; j++) {
			if(str[i] == m[j].str) {
				sums += m[j].n;
			}
		}
	}
	return sums;
}

int main() {
	int n = 0, sums = 0;
	char strs[1005];
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s", &m[i].str);
		scanf("%d", &m[i].n);
		getchar();
	}
	scanf("%s", strs);
	sums = sum(strs, n);
	printf("%d\n", sums);
	return 0;
}
