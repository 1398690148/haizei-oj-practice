/*************************************************************************
    > File Name: 126.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月22日 星期一 15时16分58秒
 ************************************************************************/

#include<stdio.h>

#define PI 3.14
int main() {
	double r1, r2;
	scanf("%lf%lf", &r1, &r2);
	double sum = PI * r1 * r1 - PI * r2 * r2;
	printf("%.2f\n", sum);
	
	
	return 0;
}
