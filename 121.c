/*************************************************************************
    > File Name: 121.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月22日 星期一 11时17分20秒
 ************************************************************************/

#include<stdio.h>

int main() {
	char a, b;
	scanf("%c %c", &a, &b);
	if (a == 'H') {
		if (b == 'H') {
			printf("TIE\n");
		} else if (b == 'Y') {
			printf("LI\n");
		} else {
			printf("MING\n");
		}
	} else if (a == 'O') {
		if (b == 'H') {
			printf("LI\n");
		} else if (b == 'Y') {
			printf("MING\n");
		} else {
			printf("TIE\n");
		}
	} else {
		if (b == 'H') {
			printf("MING\n");
		} else if (b == 'Y') {
			printf("TIE\n");
		} else {
			printf("LI\n");
		}
	}
	return 0;
}
