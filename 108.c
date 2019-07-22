/*************************************************************************
    > File Name: 108.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月21日 星期日 18时39分11秒
 ************************************************************************/

#include<stdio.h>

int main() {
	char a;
	double b, h;
	scanf("%c", &a);
	scanf("%lf%lf", &b, &h);
	if(a == 'r') {
		printf("%.2f\n", b * h);
	} else {
		printf("%.2f\n", b * h * 0.5);
	}
	return 0;
}
