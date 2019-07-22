/*************************************************************************
    > File Name: 117.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月21日 星期日 19时50分23秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int a;
	int b[4] = {0};
	int i = 0;
	scanf("%d", &a);
	while(a) {
		b[i++] =  a % 10;
		a /= 10;
	}
	for(int j = 0;j < i ;j++) {
		if(b[j] == b[i - j - 1]) {

		} else {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
