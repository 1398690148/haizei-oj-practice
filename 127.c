/*************************************************************************
    > File Name: 127.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月22日 星期一 15时24分22秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int x, n;
	double sum;
	scanf("%d%d", &x, &n);
	sum = x;
	for(int i = 0; i < n; i++) {
		sum += sum * 0.06;
	}
	x = sum;
	printf("%d", x);
	
	
	
	
	return 0;
}
