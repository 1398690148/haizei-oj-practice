/*************************************************************************
    > File Name: 129.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月23日 星期二 16时10分17秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	int a;
	int min = 10001;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &a);
		if(a < min) {
			min = a;
		}
	}
	printf("%d\n", min);
	return 0;
}
