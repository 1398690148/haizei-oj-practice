/*************************************************************************
    > File Name: 172.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 18时38分22秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int compare(char *str1, char *str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len = 0;
	if (len1 >= len2) len = len1;
	else len = len2;
	for(int i = 0; i < len; i++) {
		if (str1[i] > str2[i]) return 1;
		else if (str1[i] < str2[i]) return 0;
	}
	if(len == len1) return 1;
	return 0;
}

void d(char *str1, char *str2) {
	for (int i = 0; str2[i]; i++) {
		str1[i] = str2[i];
	}
}

int main() {
	char str[10][25];
	char min[25] = "zz";
	for (int i = 0; i < 10; i++) {
		scanf("%s", str[i]);
	}
	for (int j = 0; j < 10; j++) {
		int min_i;
		for (int i = 0; i < 10; i++) {
			if (compare(min, str[i])) {
				d(min, str[i]);
				min_i = i;
			}
		}
		for (int k = 0; str[min_i][k]; k++)
			printf("%c", min[k]);
		str[min_i][0] = 'z';
		min[0] = 'z';
		printf("\n");
	}
	return 0;
}
