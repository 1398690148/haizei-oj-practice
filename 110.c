/*************************************************************************
    > File Name: 110.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月21日 星期日 18时46分33秒
 ************************************************************************/

#include<stdio.h>

int main() {
	double X;
	double sum = 0;
	scanf("%lf", &X);
	if(X > 15) {
		sum += (X - 15) * 9;
		sum += 15 * 6;
	} else {
		sum += X * 6;
	}
	printf("%.2f\n", sum);
	return 0;
}
