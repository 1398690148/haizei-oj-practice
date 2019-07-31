/*************************************************************************
    > File Name: 151.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月29日 星期一 17时44分51秒
 ************************************************************************/

#include <stdio.h>

int Win(char c, char d) {
	if((c == 'Y' && d == 'Y') || (c == 'O' && d == 'O') 
			|| (c == 'H' && d == 'H')) {
		return 1;
	} else if((c == 'Y' && d == 'H') || (c == 'O' && d == 'Y') 
			|| (c == 'H' && d == 'O')) {
		return 2;
	} else {
		return 0;
	}
}
int main() {
	char A[10], B[10];
	scanf("%[^\n]s", A);
	getchar();
	scanf("%[^\n]s", B);
	if (Win(A[0], B[0]) == 2) {
		if(Win(A[0], B[2]) > 0) {
			printf("MING\n");
		} else {
			if (Win(A[2], B[2]) == 2) {
				printf("MING\n");
			} else {
				printf("LIHUA\n");
			}
		}
	}
	else if(Win(A[0], B[0]) == 1) {
		if(Win(A[2], B[2]) > 1) {
			printf("MING\n");
		} else if(Win(A[2], B[2]) == 0) {
			printf("LIHUA\n");
		} else {
			printf("TIE\n");
		}
	}
	else {
		if(Win(A[2], B[0]) < 2) {
			printf("LIHUA\n");
		} else {
			if(Win(A[2], B[2]) > 0) {
				printf("MING\n");
			} else {
				printf("LIHUA\n");
			}
		}	
	}
	return 0;
}
