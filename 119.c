/*************************************************************************
    > File Name: 119.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月21日 星期日 19时58分10秒
 ************************************************************************/

#include<stdio.h>

int main() {
	
	int y, m, d, e;
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d%d%d",&y,&m,&d);
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		month[1]=29;
	if(m == 12 && d == 31) {
		printf("%d %d %d\n", y, m, d - 1);
		printf("%d 1 1\n", y + 1);
	} else if(m == 1 && d == 1) {
		printf("%d 12 31\n", y - 1);
		printf("%d %d %d\n", y, m, d + 1);
	} else {
		if(d == month[m - 1]) {
			printf("%d %d %d\n", y, m, d - 1);
			printf("%d %d 1\n", y, m + 1);
		} else if(d == 1) {
			printf("%d %d %d\n", y, m - 1, month[m -2]);
			printf("%d %d %d\n", y, m, d + 1);
		} else {
			printf("%d %d %d\n", y, m, d - 1);
			printf("%d %d %d\n", y, m, d + 1);
		}
	}
	return 0;
}
