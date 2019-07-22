/*************************************************************************
    > File Name: 114.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月21日 星期日 19时20分34秒
 ************************************************************************/

#include<stdio.h>

int main() {
	char c;
	scanf("%c", &c);
	switch(c) {
		case 'h':printf("He\n");break;
		case 'l':printf("Li\n");break;
		case 'c':printf("Cao\n");break;
		case 'd':printf("Duan\n");break;
		case 'w':printf("Wang\n");break;
		default:printf("Not Here\n");break;
	}
	return 0;
}
