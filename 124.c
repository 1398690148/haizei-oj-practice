/*************************************************************************
    > File Name: 124.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月22日 星期一 14时53分41秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int study, school, age, workyear;
	scanf("%d %d %d %d", &study, &school, &age, &workyear);
	if(school < 50 || study > 0) {
		if(age <= 25 || workyear >= 5) {
			printf("ok\n");
		} else {
			printf("pass");
		}
	} else {
		printf("pass");
	}
	return 0;
}
