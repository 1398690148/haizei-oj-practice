/*************************************************************************
    > File Name: 113.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月21日 星期日 19时11分22秒
 ************************************************************************/

#include<stdio.h>

int year(int y) {
	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0 ) {
		printf("29\n");
	} else {
		printf("28\n");
	}

}
int main() {
	int y, m;
	scanf("%d%d", &y, &m);
	switch(m) {
		case 1:printf("31\n");break;
		case 2:year(y);break;
		case 3:printf("31\n");break;
		case 4:printf("30\n");break;
		case 5:printf("31\n");break;
		case 6:printf("30\n");break;
		case 7:printf("31\n");break;
		case 8:printf("31\n");break;
		case 9:printf("30\n");break;
		case 10:printf("31\n");break;
		case 11:printf("30\n");break;
		case 12:printf("31\n");break;
	}
	return 0;
}
