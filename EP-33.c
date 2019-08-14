/*************************************************************************
    > File Name: EP-33.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月09日 星期五 16时40分11秒
 ************************************************************************/

#include <stdio.h>

int yuefen(int *x, int *y) {
	int a = *x % 10;
	int b = *x / 10 % 10;
	int c = *y % 10;
	int d = *y / 10 % 10;
	if (a == d && a != 0) {*x = b, *y = c;return 1;}
	else if (a == c && a != 0) {*x = b, *y = d; return 1;}
	else if (b == d && b != 0) {*x = a, *y = c; return 1;}
	else if (b == c && b != 0) {*x = a, *y = d; return 1;}
	else return 0;
}


int main() {
	for (int i = 11; i < 100; ++i) {
		for (int j = i + 1; j < 100; ++j) {
			int a = i, b = j;
			if(yuefen(&a, &b))
			{	
				if (a * j == b * i)
					printf("%d/%d\n", i, j);
			}
		}
	}
	
	return 0;
}
