/*************************************************************************
    > File Name: 175.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 20时14分26秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int n, you = 0, liang = 0, zhong = 0, cha = 0;
	int A[35] = {0};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < n; i++) {
		if(A[i] >= 90) you++;
		else if(A[i] >= 80) liang++;
		else if(A[i] >= 60) zhong++;
		else cha++;
	}
	printf("You %d\n", you);
	printf("Liang %d\n", liang);
	printf("Zhong %d\n", zhong);
	printf("Cha %d\n", cha);
	return 0;
}
