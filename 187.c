/*************************************************************************
    > File Name: 187.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 21时07分21秒
 ************************************************************************/

#include <stdio.h>

int Hannuo(int n, char one, char two, char three) {
	if(n == 1) return move(one, three);
	else {
		Hannuo(n - 1, one, three, two);
		move(one, three);
		Hannuo(n - 1, two, one, three);
	}
}

void move(char x, char y) {
	printf("%c-->%c\n", x, y);
}

int main() {
	int n;
	scanf("%d", &n);
	Hannuo(n, 'A', 'B', 'C');
	return 0;
}
