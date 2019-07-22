/*************************************************************************
    > File Name: 118.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月21日 星期日 20时43分19秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
int main() {
	int year, sum = 0;
	scanf("%d", &year);
	if(year >= 1900){
	sum = fabs(1900 - year);
	sum %= 12;
	} else {
		sum = 1900 - year;
		sum %= 12;
		sum = 12 - sum;
	}
	switch(sum) {
		case 0:printf("rat");break;
		case 1:printf("ox");break;
		case 2:printf("tiger");break;
		case 3:printf("rabbit");break;
		case 4:printf("dragon");break;
		case 5:printf("snake");break;
		case 6:printf("horse");break;
		case 7:printf("sheep");break;
		case 8:printf("monkey");break;
		case 9:printf("rooster");break;
		case 10:printf("dog");break;
		case 11:printf("pig");break;
	}
	return 0;
}
