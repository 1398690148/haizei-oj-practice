/*************************************************************************
    > File Name: 116.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月21日 星期日 19时41分26秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a + b < c || a + c < b || b + c < a) {
		printf("illegal triangle\n");
	} else {
		if(a >= b && a >= c) {
			if(b * b + c * c > a * a) {
				printf("acute triangle\n");
			} else if(b * b + c * c == a * a) {
				printf("right triangle\n");
			} else {
				printf("obtuse triangle\n");
			}
		} else if(b >= a && b >= c) {
			if(a * a + c * c > b * b) {
				printf("acute triangle\n");
			} else if(a * a + c * c == b * b) {
				printf("right triangle\n");
			} else {
				printf("obtuse triangle\n");
			}
		} else if(c >= b && c >= a) {
			if(b * b + a * a > c * c) {
				printf("acute triangle\n");
			} else if(b * b + a * a == c * c) {
				printf("right triangle\n");
			} else {
				printf("obtuse triangle\n");
			}
		}
	}

	return 0;
}
